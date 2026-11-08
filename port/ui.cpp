// The in-game menus, with Dear ImGui:
//   F1   settings: video, sound, controls (click a binding, press the new key)
//   F2   debug tools: status, speed, layers, mission warp, RAM freezes and
//        search, memory, palette, tiles, sprites, I/O registers
//   F5   bookmark this place (bookmarks.txt; Debug window: Go warps there)
//   F9   quick report: the same zip as F12, no window, no note (key_quickreport, pad_quickreport)
//   F12  report a problem: freezes the game, asks what went wrong, saves a
//        zip with what is needed to see it again, opens the GitHub issue page
//   P    pause, N one frame while paused, Tab (held) fast-forward
// Controllers: Guide or Back+Start opens the settings, the D-pad / stick and
// A move around them, B closes them.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <SDL.h>
#include "imgui.h"
#include "imgui_impl_sdl2.h"
#include "imgui_impl_sdlrenderer2.h"
extern "C" {
#include "lift.h"
#include "pc.h"
#include "settings.h"
#include "ui.h"
#include "input.h"
#include "report.h"
#include "debug.h"

extern "C" {
int fills_ok(void);
void fill_gen_start(void);
void fill_patch_reload(void);
extern volatile int fillGenDone, fillGenTotal, fillGenState;
}
/* with the WFC fill picked and no fills.bin for this ROM: say so, offer to make it */
static void fill_status(void) {
	static int lastState = 0;
	if (fillGenState == 2 && lastState != 2) { fill_patch_reload(); dbg_changed(); }
	lastState = fillGenState;
	if (settings.fillGaps != 1) return;
	if (fillGenState == 1) {
		char b[64]; snprintf(b, sizeof b, "Making fill data: %d/%d places", fillGenDone, fillGenTotal);
		ImGui::ProgressBar(fillGenTotal ? (float)fillGenDone / fillGenTotal : 0.f, ImVec2(-1, 0), b);
		return;
	}
	if (fillGenState == 2) { ImGui::TextDisabled("Fill data made."); return; }
	if (fills_ok()) return;
	ImGui::TextColored(ImVec4(1, .8f, .3f, 1), fillGenState == 3 ? "Making fill data failed (see the log)" : "Fill data not made yet");
	ImGui::SameLine();
	if (ImGui::Button("Make it now (~25 min, uses 4 cores)")) fill_gen_start();
	if (ImGui::IsItemHovered()) ImGui::SetTooltip("Works fills.bin out in the background (you can keep playing).\nOr run: mmz --gen-fills");
}

}

struct DebugState debug = { 0, 0, 0, 0x1F, 0, 0 };

static SDL_Window *sWindow;
static SDL_Renderer *sRenderer;
static bool sShowSettings, sShowDebug;
static bool sShowMemory, sShowPalette, sShowTiles, sShowSprites, sShowIo, sShowSearch, sShowFreezes;
static int sRebindKey = -1, sRebindPad = -1;   // binding waiting for a new key / controller input
static Uint32 sRebindTime;                      // when the controller binding started
static bool sFocusSettings;
static bool sTabHeld;
static const char *sTestDir;   // --ui-test
static bool sTestOpenAll;      // --ui-test: the Debug window's sections open
static SDL_Rect sGameDst;      // where the game picture is in the window
static int sGameTexW, sGameTexH;
static bool sPlaceMode;        // Debug: click the game to put Zero there
extern "C" char dbg_check_result[400];
extern "C" void dbg_run_check(int which);
static bool screen_to_world(float sx, float sy, int *wx, int *wy);
// the report window (F12, or after a crash on the last run)
static bool sShowReport, sReportFocus;
extern "C" int ui_no_startup_dialogs;   // main.c: scripted runs (--route) do not stop for the crash dialog
static int sReportKind;
static char sReportMsg[2000], sReportZip[700], sReportStatus[800];

// ---------------------------------------------------------------- the game

// RAM addresses in Mega Man Zero (docs/notes.md)
#define ADDR_MISSION 0x0202A574u
#define ADDR_MODE 0x020236E0u
#define ADDR_SUBMODE 0x020236E1u
#define ADDR_AREA 0x0200520Cu
#define ADDR_CAMERA 0x02022C44u

static const struct { u32 base, size; } kRegions[] = {
	{ 0x02000000, 0x40000 }, { 0x03000000, 0x8000 }, { 0x04000000, 0x400 }, { 0x05000000, 0x400 },
	{ 0x06000000, 0x18000 }, { 0x07000000, 0x400 }, { 0x0E000000, 0x8000 },
};
static u8 *gba_ptr(u32 a) {
	for (auto &r : kRegions)
		if (a >= r.base && a < r.base + r.size) return (u8 *)(uintptr_t)a;
	if (a >= 0x08000000 && a < 0x08000000 + 0x2000000) {
		extern u32 romSize;
		if (a - 0x08000000 < romSize) return (u8 *)(uintptr_t)a;
	}
	return nullptr;
}
static u32 rd(u32 a, int size) {
	u8 *p = gba_ptr(a);
	if (!p) return 0;
	return size == 1 ? p[0] : size == 2 ? (u32)(p[0] | p[1] << 8) : (u32)(p[0] | p[1] << 8 | p[2] << 16 | (u32)p[3] << 24);
}
static void wr(u32 a, u32 v, int size) {
	if (a >= 0x08000000 && a < 0x0E000000) return;   // not the ROM
	u8 *p = gba_ptr(a);
	if (!p) return;
	for (int i = 0; i < size; i++) p[i] = v >> (i * 8);
}

// RAM freezes: written every frame, like cheat codes
struct Freeze { u32 addr, value; int size; bool on; char name[32]; };
static Freeze sFreezes[64];
static int sFreezeCount;
static int find_freeze(u32 addr) {
	for (int i = 0; i < sFreezeCount; i++)
		if (sFreezes[i].addr == addr) return i;
	return -1;
}
static void add_freeze(u32 addr, u32 value, int size, const char *name) {
	int i = find_freeze(addr);
	if (i < 0) {
		if (sFreezeCount == 64) return;
		i = sFreezeCount++;
	}
	sFreezes[i] = Freeze{ addr, value, size, true, "" };
	snprintf(sFreezes[i].name, sizeof sFreezes[i].name, "%s", name ? name : "");
}

static long sFrame;
static float sFps;

extern "C" void ui_game_frame(long frame) {
	static Uint32 last;
	static int frames;
	sFrame = frame;
	for (int i = 0; i < sFreezeCount; i++)
		if (sFreezes[i].on) wr(sFreezes[i].addr, sFreezes[i].value, sFreezes[i].size);
	frames++;
	Uint32 now = SDL_GetTicks();
	if (now - last >= 500) {
		sFps = frames * 1000.0f / (now - last);
		frames = 0;
		last = now;
	}
}

// ------------------------------------------------------------- setting up

extern "C" void ui_init(SDL_Window *window, SDL_Renderer *renderer) {
	sWindow = window;
	sRenderer = renderer;
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	ImGuiIO &io = ImGui::GetIO();
	io.IniFilename = nullptr;   // window positions are not kept
	io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;
	ImGui::StyleColorsDark();
	ImGui_ImplSDL2_InitForSDLRenderer(window, renderer);
	ImGui_ImplSDL2_SetGamepadMode(ImGui_ImplSDL2_GamepadMode_AutoAll);
	ImGui_ImplSDLRenderer2_Init(renderer);
	// a crash on the last run that was not reported yet
	char msg[256];
	const char *zip = ui_no_startup_dialogs ? NULL : report_pending_crash(msg, sizeof msg);
	if (zip) {
		sReportKind = REPORT_CRASH;
		snprintf(sReportZip, sizeof sReportZip, "%s", zip);
		snprintf(sReportMsg, sizeof sReportMsg, "%s\n", msg);
		sShowReport = sReportFocus = true;
	}
}

static bool menus_open() { return sShowSettings || sShowDebug || sShowReport; }

// a short message over the game (F5)
static char sToast[200];
static Uint32 sToastUntil;
static void toast(const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(sToast, sizeof sToast, fmt, ap);
	va_end(ap);
	sToastUntil = SDL_GetTicks() + 3000;
}
static void bookmark_here() {
	const char *b = bookmark_add_here();
	if (b) { SDL_SetClipboardText(b); toast("Bookmarked (and copied): %s", b); }
	else toast("Too many bookmarks: remove some in the Debug window (F2)");
}

extern "C" int ui_pauses_game(void) { return (sShowSettings || sShowReport) && !sTestDir; }

// open the report window; the picture and memory are taken now, before it is drawn
static void open_report(int kind) {
	if (sShowReport) return;
	report_snapshot();
	sReportKind = kind;
	sReportMsg[0] = sReportZip[0] = sReportStatus[0] = 0;
	sShowReport = sReportFocus = true;
}

// the quick report button: everything F12 saves, without the window or a note
extern "C" void ui_quick_report(void) {
	if (sShowReport) return;
	report_snapshot();
	const char *z = report_write(REPORT_PROBLEM, "");
	const char *name = z ? strrchr(z, '/') : NULL;
	if (z) toast("Quick report saved: %s (Debug window, F2, or F12 to share)", name ? name + 1 : z);
	else toast("Quick report failed: could not write the reports folder");
}

extern "C" int ui_rebinding(void) { return sRebindKey >= 0 || sRebindPad >= 0; }

extern "C" void ui_toggle_settings(void) {
	sShowSettings = !sShowSettings;
	if (sShowSettings) sFocusSettings = true;
	else settings_save();
}

static void rebind_pad(int i) {
	sRebindPad = i;
	sRebindKey = -1;
	sRebindTime = SDL_GetTicks();
	input_capture_begin();
}

extern "C" int ui_wants_input(void) {
	if (sRebindKey >= 0 || sRebindPad >= 0) return 1;
	return sShowSettings || sShowReport || (menus_open() && ImGui::GetIO().WantCaptureKeyboard);
}

extern "C" int ui_event(const SDL_Event *e) {
	// a binding being changed takes the next key or button
	if (sRebindKey >= 0 && e->type == SDL_KEYDOWN) {
		if (e->key.keysym.scancode != SDL_SCANCODE_ESCAPE) settings.keys[sRebindKey] = e->key.keysym.scancode;
		sRebindKey = -1;
		return 1;
	}
	if (sRebindPad >= 0) {
		struct Bind b;
		int joy;
		if (input_capture(e, &b, &joy)) {
			(joy ? settings.joy : settings.pad)[sRebindPad] = b;
			sRebindPad = -1;
			return 1;
		}
		if (e->type == SDL_KEYDOWN && (e->key.keysym.scancode == SDL_SCANCODE_ESCAPE ||
		                               e->key.keysym.scancode == SDL_SCANCODE_DELETE)) {
			if (e->key.keysym.scancode == SDL_SCANCODE_DELETE) settings.pad[sRebindPad] = settings.joy[sRebindPad] = Bind();
			sRebindPad = -1;
			return 1;
		}
		if (e->type >= SDL_JOYAXISMOTION && e->type <= SDL_CONTROLLERDEVICEREMAPPED) return 1;
	}
	// B (east) closes the settings, unless a slider or text field is being used
	if (e->type == SDL_CONTROLLERBUTTONDOWN && e->cbutton.button == SDL_CONTROLLER_BUTTON_B && sShowSettings &&
	    !ImGui::IsAnyItemActive() && !ImGui::IsPopupOpen("", ImGuiPopupFlags_AnyPopupId)) {
		ui_toggle_settings();
		return 1;
	}
	if (e->type == SDL_KEYDOWN && !e->key.repeat && settings.keys[BIND_QUICK] != SDL_SCANCODE_UNKNOWN &&
	    e->key.keysym.scancode == settings.keys[BIND_QUICK] && !ImGui::GetIO().WantTextInput) {
		ui_quick_report();
		return 1;
	}
	if (e->type == SDL_KEYDOWN && !e->key.repeat) {
		switch (e->key.keysym.scancode) {
		case SDL_SCANCODE_F1: ui_toggle_settings(); return 1;
		case SDL_SCANCODE_F2: sShowDebug = !sShowDebug; return 1;
		case SDL_SCANCODE_F12: open_report(REPORT_PROBLEM); return 1;
		case SDL_SCANCODE_F5: bookmark_here(); return 1;
		case SDL_SCANCODE_ESCAPE:
			if (sShowSettings) { sShowSettings = false; settings_save(); return 1; }
			break;
		default: break;
		}
		if (!ImGui::GetIO().WantCaptureKeyboard) {
			if (e->key.keysym.scancode == SDL_SCANCODE_P) { debug.paused = !debug.paused; return 1; }
			if (e->key.keysym.scancode == SDL_SCANCODE_N && debug.paused) { debug.step++; return 1; }
			if (e->key.keysym.scancode == SDL_SCANCODE_TAB) { sTabHeld = true; debug.fastForward = 1; return 1; }
		}
	}
	if (e->type == SDL_KEYUP && e->key.keysym.scancode == SDL_SCANCODE_TAB && sTabHeld) {
		sTabHeld = false;
		debug.fastForward = 0;
	}
	if (sPlaceMode && sShowDebug && e->type == SDL_MOUSEBUTTONDOWN && e->button.button == SDL_BUTTON_LEFT &&
	    !ImGui::GetIO().WantCaptureMouse) {
		int x, y;
		if (screen_to_world((float)e->button.x, (float)e->button.y, &x, &y)) {
			if (teleport_to(x, y)) toast("Zero moved to %d, %d", x, y);
			else toast("Cannot put Zero at %d, %d: not open or not reachable", x, y);
		}
		return 1;
	}
	ImGui_ImplSDL2_ProcessEvent(e);
	return menus_open() && (ImGui::GetIO().WantCaptureKeyboard || ImGui::GetIO().WantCaptureMouse);
}

// -------------------------------------------------------------- settings

static const char *button_name(int b) {
	switch (b) {
	case SDL_CONTROLLER_BUTTON_A: return "A / Cross (bottom)";
	case SDL_CONTROLLER_BUTTON_B: return "B / Circle (right)";
	case SDL_CONTROLLER_BUTTON_X: return "X / Square (left)";
	case SDL_CONTROLLER_BUTTON_Y: return "Y / Triangle (top)";
	case SDL_CONTROLLER_BUTTON_BACK: return "Back / Select";
	case SDL_CONTROLLER_BUTTON_GUIDE: return "Guide / Home";
	case SDL_CONTROLLER_BUTTON_START: return "Start";
	case SDL_CONTROLLER_BUTTON_LEFTSHOULDER: return "LB / L1";
	case SDL_CONTROLLER_BUTTON_RIGHTSHOULDER: return "RB / R1";
	case SDL_CONTROLLER_BUTTON_LEFTSTICK: return "Left stick press";
	case SDL_CONTROLLER_BUTTON_RIGHTSTICK: return "Right stick press";
	case SDL_CONTROLLER_BUTTON_DPAD_UP: return "D-pad up";
	case SDL_CONTROLLER_BUTTON_DPAD_DOWN: return "D-pad down";
	case SDL_CONTROLLER_BUTTON_DPAD_LEFT: return "D-pad left";
	case SDL_CONTROLLER_BUTTON_DPAD_RIGHT: return "D-pad right";
	case SDL_CONTROLLER_BUTTON_MISC1: return "Share / Capture";
	case SDL_CONTROLLER_BUTTON_TOUCHPAD: return "Touchpad press";
	default: {
		const char *n = SDL_GameControllerGetStringForButton((SDL_GameControllerButton)b);
		return n ? n : "?";
	}
	}
}

static const char *bind_name(struct Bind b, char *buf, int size) {
	static const char *const axes[4][2] = {
		{ "Left stick left", "Left stick right" }, { "Left stick up", "Left stick down" },
		{ "Right stick left", "Right stick right" }, { "Right stick up", "Right stick down" } };
	static const char *const hat[9] = { "", "up", "right", "", "down", "", "", "", "left" };
	switch (b.type) {
	case BIND_BUTTON: return button_name(b.index);
	case BIND_AXIS:
		if (b.index == SDL_CONTROLLER_AXIS_TRIGGERLEFT) return "LT / L2";
		if (b.index == SDL_CONTROLLER_AXIS_TRIGGERRIGHT) return "RT / R2";
		return b.index < 4 ? axes[b.index][b.dir > 0] : "?";
	case BIND_JBUTTON: snprintf(buf, size, "Button %d", b.index); return buf;
	case BIND_JHAT: snprintf(buf, size, "Hat %d %s", b.index, b.dir > 0 && b.dir <= 8 ? hat[b.dir] : "?"); return buf;
	case BIND_JAXIS: snprintf(buf, size, "Axis %d%c", b.index, b.dir > 0 ? '+' : '-'); return buf;
	}
	return "(none)";
}

// a window's first placement: cascaded, inside the game window
static void place(int k, float w, float h) {
	ImVec2 vp = ImGui::GetMainViewport()->Size;
	ImGui::SetNextWindowPos(ImVec2(20.0f + k * 30, 20.0f + k * 30), ImGuiCond_FirstUseEver);
	ImGui::SetNextWindowSize(ImVec2(w < vp.x - 40 ? w : vp.x - 40, h < vp.y - 40 ? h : vp.y - 40), ImGuiCond_FirstUseEver);
}

static void settings_window() {
	ImVec2 vp = ImGui::GetMainViewport()->Size;
	if (sFocusSettings) { ImGui::SetNextWindowFocus(); sFocusSettings = false; }
	ImGui::SetNextWindowPos(ImVec2(vp.x / 2, vp.y / 2), ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));
	ImGui::SetNextWindowSizeConstraints(ImVec2(0, 0), ImVec2(vp.x - 20, vp.y - 20));
	if (!ImGui::Begin("Settings (F1)", &sShowSettings, ImGuiWindowFlags_AlwaysAutoResize)) {
		ImGui::End();
		return;
	}
	if (ImGui::Button("Report a problem (F12)")) { sShowSettings = false; settings_save(); open_report(REPORT_PROBLEM); }
	if (ImGui::CollapsingHeader("Video", ImGuiTreeNodeFlags_DefaultOpen)) {
		if (ImGui::SliderInt("Window scale", &settings.scale, 1, 8))
			SDL_SetWindowSize(sWindow, SCREEN_W * settings.scale, SCREEN_H * settings.scale);
		bool fs = settings.fullscreen;
		if (ImGui::Checkbox("Full screen (F11)", &fs)) {
			settings.fullscreen = fs;
			SDL_SetWindowFullscreen(sWindow, fs ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0);
		}
		static const char *const views[VIEW_MODES] = {
			"GBA (240x160)", "x2 (480x320)", "x3 (720x480)", "x4 (960x640)",
			"Mega Man X (256x224)", "Custom", "Window (fit to the window's shape)",
		};
		ImGui::SetNextItemWidth(260);
		ImGui::Combo("View", &settings.viewMode, views, VIEW_MODES);
		if (settings.viewMode == VIEW_CUSTOM) {
			ImGui::SetNextItemWidth(120);
			ImGui::InputInt("Width", &settings.viewW, 16, 64);
			ImGui::SameLine();
			ImGui::SetNextItemWidth(120);
			ImGui::InputInt("Height", &settings.viewH, 16, 64);
		} else if (settings.viewMode == VIEW_WINDOW) {
			ImGui::SetNextItemWidth(260);
			ImGui::SliderInt("World pixels high", &settings.viewHeight, 160, 720);
			ImGui::TextDisabled("The width follows the window (wide and ultra-wide screens).");
		}
		int vw, vh, ww, wh;
		SDL_GetRendererOutputSize(sRenderer, &ww, &wh);
		settings_view_size(ww, wh, &vw, &vh);
		ImGui::TextDisabled("Showing %dx%d of the world in stages (%.2fx the GBA's area).", vw, vh, vw * vh / (240.0 * 160));
		bool he = settings.hudEdges;
		{
			static const int speeds[] = { 100, 200, 400, 800 };
			static const char *const names[] = { "GBA (slows down where it did)", "2x", "4x", "8x" };
			int cur = 0;
			for (int k = 0; k < 4; k++) if (settings.cpuSpeed >= speeds[k]) cur = k;
			if (ImGui::Combo("Game CPU", &cur, names, 4)) settings.cpuSpeed = speeds[cur];
			if (ImGui::IsItemHovered()) ImGui::SetTooltip("CPU time the game gets each frame. More removes the slowdown\n(lots of enemies, the wide view) without speeding the game up.");
		}
		if (ImGui::Checkbox("HUD at the screen's edges", &he)) settings.hudEdges = he;
		bool fr = settings.fitRooms;
		if (ImGui::Checkbox("Fit small rooms to the screen", &fr)) settings.fitRooms = fr;
		if (ImGui::IsItemHovered()) ImGui::SetTooltip("A rectangular room smaller than the view: the view zooms in to fill the screen with it\n(smoothly, when you enter it) instead of showing black around it.");
		bool is = settings.integerScale, sm = settings.smooth;
		if (ImGui::Checkbox("Whole-number scaling only", &is)) settings.integerScale = is;
		if (ImGui::Checkbox("Smooth (filtered) pixels", &sm)) settings.smooth = sm;
	}
	if (ImGui::CollapsingHeader("Sound", ImGuiTreeNodeFlags_DefaultOpen)) {
		ImGui::SliderInt("Volume", &settings.volume, 0, 100, "%d%%");
		bool m = settings.mute;
		if (ImGui::Checkbox("Mute", &m)) settings.mute = m;
	}
	if (ImGui::CollapsingHeader("Controls", ImGuiTreeNodeFlags_DefaultOpen)) {
		ImGui::TextDisabled("Pick a binding, then press the key or controller input (Esc cancels, Delete or\n"
		                    "right-click clears). Controller buttons go by position: A is the bottom one.");
		int n = input_devices();
		if (!n) ImGui::TextDisabled("No controller connected.");
		for (int d = 0; d < n; d++) {
			int known;
			const char *name = input_device_name(d, &known);
			ImGui::BulletText("%s%s", name, known ? "" : " (no mapping: uses the Joystick column)");
		}
		static const char *const labels[BINDS] = { "A", "B", "Select", "Start", "Right", "Left", "Up", "Down", "R", "L",
		                                           "Open settings", "Fast-forward (held)", "Quick report (no note)" };
		static const int order[BINDS] = { 6, 7, 5, 4, 0, 1, 9, 8, 3, 2, 10, 11, 12 };
		bool joyColumn = input_have_joysticks();
		char buf[32];
		if (ImGui::BeginTable("bindings", joyColumn ? 4 : 3, ImGuiTableFlags_BordersInnerH)) {
			ImGui::TableSetupColumn("Button");
			ImGui::TableSetupColumn("Keyboard");
			ImGui::TableSetupColumn("Controller");
			if (joyColumn) ImGui::TableSetupColumn("Joystick");
			ImGui::TableHeadersRow();
			for (int k = 0; k < BINDS; k++) {
				int i = order[k];
				ImGui::PushID(i);
				ImGui::TableNextRow();
				ImGui::TableNextColumn();
				ImGui::TextUnformatted(labels[i]);
				ImGui::TableNextColumn();
				if (i < 10 || i == BIND_QUICK) {
					const char *kn = sRebindKey == i ? "press a key..." : SDL_GetScancodeName(settings.keys[i]);
					if (ImGui::Button(kn[0] ? kn : "(none)", ImVec2(130, 0))) { sRebindKey = i; sRebindPad = -1; }
					if (ImGui::IsItemClicked(ImGuiMouseButton_Right)) settings.keys[i] = SDL_SCANCODE_UNKNOWN;
				} else {
					ImGui::TextDisabled(i == BIND_MENU ? "F1" : "Tab");
				}
				ImGui::TableNextColumn();
				const char *pn = sRebindPad == i ? "press..." : bind_name(settings.pad[i], buf, sizeof buf);
				if (ImGui::Button(pn, ImVec2(160, 0))) rebind_pad(i);
				if (ImGui::IsItemClicked(ImGuiMouseButton_Right)) settings.pad[i] = Bind();
				if (joyColumn) {
					ImGui::TableNextColumn();
					const char *jn = sRebindPad == i ? "press..." : bind_name(settings.joy[i], buf, sizeof buf);
					if (ImGui::Button(jn, ImVec2(110, 0))) rebind_pad(i);
					if (ImGui::IsItemClicked(ImGuiMouseButton_Right)) settings.joy[i] = Bind();
				}
				ImGui::PopID();
			}
			ImGui::EndTable();
		}
		bool sm = settings.stickMoves;
		if (ImGui::Checkbox("Left stick moves too", &sm)) settings.stickMoves = sm;
		ImGui::SameLine();
		ImGui::SetNextItemWidth(150);
		ImGui::SliderInt("Stick dead zone", &settings.deadzone, 10, 90, "%d%%");
		ImGui::TextDisabled("Back + Start also opens the settings; B closes them.\n"
		                    "P pauses, N steps a frame, F2 opens the debug tools.");
	}
	ImGui::Separator();
	if (ImGui::Button("Save")) settings_save();
	ImGui::SameLine();
	if (ImGui::Button("Defaults")) {
		settings_defaults();
		SDL_SetWindowSize(sWindow, SCREEN_W * settings.scale, SCREEN_H * settings.scale);
		SDL_SetWindowFullscreen(sWindow, 0);
	}
	ImGui::SameLine();
	ImGui::TextDisabled("Saved to %s", settings_path());
	ImGui::End();
}

// ----------------------------------------------------------------- debug

static const char *const kMissionNames[] = {
	"0", "1: Opening (Disposal Center escape)", "2", "3", "4", "5", "6", "7", "8", "9",
	"10", "11", "12", "13", "14", "15", "16: Neo Arcadia Core", "17",
};

static void tip(const char *t) {
	if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) ImGui::SetTooltip("%s", t);
}
static bool opt(const char *label, int *v, const char *t, bool view = false) {
	bool b = *v != 0;
	bool ch = ImGui::Checkbox(label, &b);
	if (ch) { *v = b; if (view) dbg_changed(); }
	tip(t);
	return ch;
}
static bool header(const char *label) {
	if (sTestOpenAll) ImGui::SetNextItemOpen(true);
	return ImGui::CollapsingHeader(label);
}

// the game picture's pixel under a window point -> global (world) pixels
static bool screen_to_world(float sx, float sy, int *wx, int *wy) {
	if (sGameDst.w <= 0 || sGameTexW <= 0) return false;
	float px = (sx - sGameDst.x) * sGameTexW / sGameDst.w, py = (sy - sGameDst.y) * sGameTexH / sGameDst.h;
	if (px < 0 || py < 0 || px >= sGameTexW || py >= sGameTexH) return false;
	int gx, gy, ox = 0, oy = 0;
	if (view_active) { view_gba_global(&gx, &gy); view_gba_origin(&ox, &oy); }
	else { struct Location l; loc_now(&l); gx = l.camX - 120; gy = l.camY - 80; }
	*wx = gx + (int)px - ox; *wy = gy + (int)py - oy;
	return true;
}
static void world_to_screen(float wx, float wy, float *sx, float *sy) {
	int gx, gy, ox = 0, oy = 0;
	if (view_active) { view_gba_global(&gx, &gy); view_gba_origin(&ox, &oy); }
	else { struct Location l; loc_now(&l); gx = l.camX - 120; gy = l.camY - 80; }
	*sx = sGameDst.x + (wx - gx + ox) * sGameDst.w / (float)sGameTexW;
	*sy = sGameDst.y + (wy - gy + oy) * sGameDst.h / (float)sGameTexH;
}

static const char *const kCheckpoints[] = { "Checkpoint 0 (start)", "Checkpoint 1", "Checkpoint 2", "Checkpoint 3" };

static void debug_options() {
	if (header("Cheats")) {
		opt("Invincible", &cheat_invincible, "Zero cannot be hurt.");
		ImGui::SameLine();
		opt("No enemies", &cheat_no_enemies, "Every enemy dies as it appears (as when a boss is beaten).");
		ImGui::SameLine();
		opt("Infinite life", &dbgo.infLife, "Zero's life is kept at the most it has been since this went on.");
	}
	if (header("Teleport")) {
		static int mission = 1, cp = 0;
		ImGui::SetNextItemWidth(260);
		ImGui::Combo("##tpmission", &mission, kMissionNames, IM_ARRAYSIZE(kMissionNames));
		tip("The mission to go to (0: the base).");
		ImGui::SameLine();
		ImGui::SetNextItemWidth(170);
		ImGui::Combo("##tpcp", &cp, kCheckpoints, IM_ARRAYSIZE(kCheckpoints));
		tip("The checkpoint in that mission to start from.");
		ImGui::SameLine();
		if (ImGui::Button("Go##tp")) {
			char b[64];
			if (mission == 0) snprintf(b, sizeof b, "mmz:base");
			else snprintf(b, sizeof b, "mmz:m%d cp%d", mission, cp);
			frontend_restart_warp(b);
		}
		tip("Starts the game again and plays to that mission and checkpoint.");
		ImGui::Checkbox("Click to place Zero", &sPlaceMode);
		tip("Click the game picture: Zero moves there if the spot is open and reachable (green marker); red: not allowed.");
		static int tx, ty;
		ImGui::SameLine();
		ImGui::SetNextItemWidth(160);
		ImGui::InputInt2("##tpxy", &tx);
		tip("A point in world pixels (as the position overlay shows Zero's).");
		ImGui::SameLine();
		bool safe = teleport_safe(tx, ty);
		ImGui::BeginDisabled(!safe);
		if (ImGui::Button("Move Zero")) teleport_to(tx, ty);
		ImGui::EndDisabled();
		tip("Moves Zero to that point; only open, reached cells of the shown map are allowed.");
		ImGui::SameLine();
		if (ImGui::SmallButton("Here")) { struct Location l; loc_now(&l); tx = l.x; ty = l.y; }
		tip("Fills in Zero's position now.");
		ImGui::SameLine();
		if (ImGui::SmallButton("Reload bookmarks")) bookmarks_load();
		tip("Reads bookmarks.txt again (after editing it by hand).");
	}
	if (header("Wide view")) {
		{ bool no = view_native_only; if (ImGui::Checkbox("Native GBA rect", &no)) view_native_only = no; }
		tip("Draw the GBA screen's part from the game state too, not the GBA picture (what viewcheck compares).");
		bool fr = settings.fitRooms, he = settings.hudEdges;
		if (ImGui::Checkbox("Fit small rooms", &fr)) { settings.fitRooms = fr; dbg_changed(); }
		tip("The setting: zoom the view in to fit rooms smaller than it.");
		ImGui::SameLine();
		if (ImGui::Checkbox("HUD at edges", &he)) settings.hudEdges = he;
		tip("The setting: the HUD at the screen's edges, not the GBA screen's.");
	}
	if (header("Overlays")) {
		opt("Room extent", &dbgo.ovCrop, "Outline the room the view draws (outside it: black).");
		ImGui::SameLine();
		opt("Cell grid", &dbgo.ovGrid, "A 16-pixel metatile grid.");
	}
	if (header("Logging (stderr / mmz.log)")) {
		opt("View", &dbgo.logView, "Each frame: camera, layer, stage and area numbers (VIEWDEBUG).");
		ImGui::SameLine(); opt("Fit", &dbgo.logFit, "Every 5 s: the fitted view size (FITDEBUG).");
		opt("Line effects", &dbgo.logFx, "Per-line effects the view replays (FXDEBUG).");
		ImGui::SameLine(); opt("Sprites", &dbgo.logSprite, "Each sprite draw routine, once (SPRITEDEBUG).");
		ImGui::SameLine(); opt("Lag", &dbgo.logLag, "Routes: game frames per line (LAGDEBUG).");
	}
	if (header("Checks")) {
		if (ImGui::Button("View check")) dbg_run_check(0);
		tip("Compare the wide view with the GBA picture here; writes debug/viewcheck_FRAME.png.");
		ImGui::SameLine();
		if (ImGui::Button("View probe")) dbg_run_check(1);
		tip("Move the GBA camera over the whole view and compare; writes debug/viewprobe_*.png. Moves the camera for a while.");
		ImGui::SameLine();
		if (ImGui::Button("View chunks")) dbg_run_check(2);
		tip("Check where each chunk of the view comes from; details in the log.");
		ImGui::PushTextWrapPos(ImGui::GetFontSize() * 40);
		ImGui::TextDisabled("%s", dbg_check_result[0] ? dbg_check_result : "(no check run yet)");
		ImGui::PopTextWrapPos();
	}
}

static void debug_window() {
	ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_FirstUseEver);
	if (!ImGui::Begin("Debug (F2)", &sShowDebug, ImGuiWindowFlags_AlwaysAutoResize)) {
		ImGui::End();
		return;
	}
	ImGui::Text("Frame %ld   %.1f fps   line %d", sFrame, sFps, hw_line);
	ImGui::Text("Game mode %02X.%02X   mission %u   area %u", rd(ADDR_MODE, 1), rd(ADDR_SUBMODE, 1),
	            rd(ADDR_MISSION, 1), rd(ADDR_AREA, 1) & 0x7F);
	struct Location here;
	loc_now(&here);
	ImGui::Text("Checkpoint %d   variant %d   Zero %d, %d   camera %d, %d   life %d", here.checkpoint, here.variant,
	            here.x, here.y, here.camX, here.camY, zero_hp());
	char hereText[160];
	loc_format(&here, hereText, sizeof hereText);
	ImGui::TextUnformatted(hereText);
	ImGui::SameLine();
	if (ImGui::SmallButton("Copy")) SDL_SetClipboardText(hereText);

	ImGui::SeparatorText("Speed");
	bool paused = debug.paused, ff = debug.fastForward;
	if (ImGui::Checkbox("Pause (P)", &paused)) debug.paused = paused;
	ImGui::SameLine();
	if (ImGui::Button("Step (N)")) { debug.paused = 1; debug.step++; }
	ImGui::SameLine();
	if (ImGui::Checkbox("Fast-forward (Tab)", &ff)) debug.fastForward = ff;
	ImGui::SliderInt("Cycle scale %", &hw_cycle_scale, 50, 200);
	static int pauseAt = 0;
	ImGui::SetNextItemWidth(120);
	ImGui::InputInt("##pauseat", &pauseAt, 60, 600);
	ImGui::SameLine();
	bool pa = debug.pauseAt != 0;
	if (ImGui::Checkbox("Pause at frame", &pa)) debug.pauseAt = pa ? pauseAt : 0;
	if (pa) debug.pauseAt = pauseAt;
	bool ov = debug.overlay;
	if (ImGui::Checkbox("Position overlay", &ov)) debug.overlay = ov;
	tip("Frame, mission, area, checkpoint and Zero's position drawn at the bottom.");

	debug_options();

	ImGui::SeparatorText("Bookmarks (F5 saves this place)");
	static char paste[200];
	ImGui::SetNextItemWidth(330);
	ImGui::InputTextWithHint("##paste", "paste a bookmark: mmz:m9 a2 cp1 x1234 y567", paste, sizeof paste);
	ImGui::SameLine();
	struct Location pl;
	bool valid = loc_parse(paste, &pl);
	ImGui::BeginDisabled(!valid);
	if (ImGui::Button("Go##paste")) frontend_restart_warp(paste);
	ImGui::EndDisabled();
	ImGui::SameLine();
	if (ImGui::Button("Save here")) bookmark_here();
	for (int i = 0; i < bookmarkCount; i++) {
		ImGui::PushID(i);
		if (ImGui::SmallButton("Go")) frontend_restart_warp(bookmarks[i].text);
		ImGui::SameLine();
		if (ImGui::SmallButton("Copy")) SDL_SetClipboardText(bookmarks[i].text);
		ImGui::SameLine();
		bool del = ImGui::SmallButton("x");
		ImGui::SameLine();
		ImGui::SetNextItemWidth(200);
		if (ImGui::InputText("##name", bookmarks[i].name, sizeof bookmarks[i].name, ImGuiInputTextFlags_EnterReturnsTrue)) bookmarks_save();
		if (ImGui::IsItemDeactivatedAfterEdit()) bookmarks_save();
		ImGui::SameLine();
		ImGui::TextDisabled("%s", bookmarks[i].text);
		ImGui::PopID();
		if (del) { bookmark_remove(i); break; }
	}
	ImGui::TextDisabled("Go starts the game again and plays to there (the mission from its checkpoint).");

	ImGui::SeparatorText("Layers");
	static const char *const layers[5] = { "BG0", "BG1", "BG2", "BG3", "Sprites" };
	for (int i = 0; i < 5; i++) {
		bool on = debug.layerMask & (1 << i);
		if (i) ImGui::SameLine();
		if (ImGui::Checkbox(layers[i], &on)) debug.layerMask ^= 1 << i;
	}

	ImGui::SeparatorText("Mission warp");
	static int mission = 1;
	ImGui::SetNextItemWidth(260);
	ImGui::Combo("##mission", &mission, kMissionNames, IM_ARRAYSIZE(kMissionNames));
	ImGui::SameLine();
	int fi = find_freeze(ADDR_MISSION);
	bool forcing = fi >= 0 && sFreezes[fi].on;
	if (ImGui::Checkbox("Force", &forcing)) {
		if (forcing) add_freeze(ADDR_MISSION, mission, 1, "mission");
		else if (fi >= 0) sFreezes[fi].on = false;
	}
	if (forcing && fi >= 0) sFreezes[fi].value = mission;
	ImGui::TextDisabled("With Force on, pick any mission at the base: that stage loads.\nTurn it off once the stage has started.");

	ImGui::SeparatorText("Windows");
	ImGui::Checkbox("RAM freezes", &sShowFreezes); ImGui::SameLine();
	ImGui::Checkbox("RAM search", &sShowSearch); ImGui::SameLine();
	ImGui::Checkbox("Memory", &sShowMemory);
	ImGui::Checkbox("Palette", &sShowPalette); ImGui::SameLine();
	ImGui::Checkbox("Tiles", &sShowTiles); ImGui::SameLine();
	ImGui::Checkbox("Sprites", &sShowSprites); ImGui::SameLine();
	ImGui::Checkbox("I/O registers", &sShowIo);
	ImGui::End();
}

static void freezes_window() {
	place(1, 420, 240);
	if (!ImGui::Begin("RAM freezes", &sShowFreezes)) { ImGui::End(); return; }
	ImGui::TextDisabled("Written every frame, like cheat codes.");
	static char addrText[16] = "02000000", valText[16] = "0";
	static int size = 1;
	ImGui::SetNextItemWidth(90);
	ImGui::InputText("Address", addrText, sizeof addrText, ImGuiInputTextFlags_CharsHexadecimal);
	ImGui::SameLine();
	ImGui::SetNextItemWidth(90);
	ImGui::InputText("Value", valText, sizeof valText, ImGuiInputTextFlags_CharsHexadecimal);
	ImGui::SameLine();
	ImGui::SetNextItemWidth(60);
	ImGui::Combo("##size", &size, "-\0" "8-bit\0" "16-bit\0" "-\0" "32-bit\0");
	ImGui::SameLine();
	if (ImGui::Button("Add") && size)
		add_freeze(strtoul(addrText, 0, 16), strtoul(valText, 0, 16), size == 3 ? 4 : size, "");
	for (int i = 0; i < sFreezeCount; i++) {
		Freeze &f = sFreezes[i];
		ImGui::PushID(i);
		ImGui::Checkbox("##on", &f.on);
		ImGui::SameLine();
		ImGui::Text("%08X = %0*X (%d-bit) %s", f.addr, f.size * 2, f.value, f.size * 8, f.name);
		ImGui::SameLine();
		if (ImGui::SmallButton("remove")) { sFreezes[i] = sFreezes[--sFreezeCount]; ImGui::PopID(); break; }
		ImGui::PopID();
	}
	ImGui::End();
}

// RAM search over EWRAM and IWRAM bytes: narrow down by how values change
static void search_window() {
	enum { EW = 0x40000, IW = 0x8000, N = EW + IW };
	static u8 *snap, *alive;
	static int count = -1;
	auto addr_of = [](int i) -> u32 { return i < EW ? 0x02000000u + i : 0x03000000u + (i - EW); };
	auto cur = [&](int i) -> u8 { return *(u8 *)(uintptr_t)addr_of(i); };
	if (!snap) { snap = (u8 *)malloc(N); alive = (u8 *)malloc(N); }
	place(2, 420, 360);
	if (!ImGui::Begin("RAM search", &sShowSearch)) { ImGui::End(); return; }
	ImGui::TextDisabled("Bytes in EWRAM and IWRAM. Start, play a little, then keep\nthe bytes that changed the way the thing you look for did.");
	if (ImGui::Button("Start")) {
		for (int i = 0; i < N; i++) { snap[i] = cur(i); alive[i] = 1; }
		count = N;
	}
	if (count >= 0) {
		static int value = 0;
		auto filter = [&](int kind) {
			count = 0;
			for (int i = 0; i < N; i++) {
				if (!alive[i]) continue;
				u8 c = cur(i), o = snap[i];
				bool keep = kind == 0 ? c == value : kind == 1 ? c != o : kind == 2 ? c == o : kind == 3 ? c > o : c < o;
				alive[i] = keep;
				snap[i] = c;
				count += keep;
			}
		};
		ImGui::SameLine(); if (ImGui::Button("Changed")) filter(1);
		ImGui::SameLine(); if (ImGui::Button("Same")) filter(2);
		ImGui::SameLine(); if (ImGui::Button("Went up")) filter(3);
		ImGui::SameLine(); if (ImGui::Button("Went down")) filter(4);
		ImGui::SetNextItemWidth(80);
		ImGui::InputInt("##value", &value);
		ImGui::SameLine(); if (ImGui::Button("Equals")) filter(0);
		ImGui::Text("%d candidates", count);
		if (count <= 200) {
			for (int i = 0; i < N; i++) {
				if (!alive[i]) continue;
				ImGui::PushID(i);
				ImGui::Text("%08X: %3u (was %3u)", addr_of(i), cur(i), snap[i]);
				ImGui::SameLine();
				if (ImGui::SmallButton("freeze")) add_freeze(addr_of(i), cur(i), 1, "from search");
				ImGui::PopID();
			}
		}
	}
	ImGui::End();
}

static void memory_window() {
	place(3, 560, 420);
	if (!ImGui::Begin("Memory", &sShowMemory)) { ImGui::End(); return; }
	static char addrText[16] = "02000000";
	ImGui::SetNextItemWidth(90);
	ImGui::InputText("Address", addrText, sizeof addrText, ImGuiInputTextFlags_CharsHexadecimal);
	ImGui::SameLine();
	static const struct { const char *name; u32 addr; } jumps[] = {
		{ "EWRAM", 0x02000000 }, { "IWRAM", 0x03000000 }, { "I/O", 0x04000000 }, { "Camera", ADDR_CAMERA },
		{ "Mission", ADDR_MISSION }, { "Save", 0x0E000000 },
	};
	for (auto &j : jumps) {
		if (ImGui::SmallButton(j.name)) snprintf(addrText, sizeof addrText, "%08X", j.addr);
		ImGui::SameLine();
	}
	ImGui::NewLine();
	u32 base = strtoul(addrText, 0, 16) & ~15u;
	ImGui::BeginChild("hex", ImVec2(0, 0));
	for (int row = 0; row < 32; row++) {
		u32 a = base + row * 16;
		char line[128];
		int n = snprintf(line, sizeof line, "%08X ", a);
		for (int k = 0; k < 16; k++) {
			u8 *p = gba_ptr(a + k);
			n += p ? snprintf(line + n, sizeof line - n, " %02X", *p) : snprintf(line + n, sizeof line - n, " --");
		}
		ImGui::TextUnformatted(line);
	}
	ImGui::EndChild();
	ImGui::End();
}

static ImU32 gba_color(u16 c) {
	u32 r = c & 31, g = (c >> 5) & 31, b = (c >> 10) & 31;
	return IM_COL32((r << 3) | (r >> 2), (g << 3) | (g >> 2), (b << 3) | (b >> 2), 255);
}

static void palette_window() {
	ImGui::SetNextWindowPos(ImVec2(20.0f + 4 * 30, 20.0f + 4 * 30), ImGuiCond_FirstUseEver);
	if (!ImGui::Begin("Palette", &sShowPalette, ImGuiWindowFlags_AlwaysAutoResize)) { ImGui::End(); return; }
	ImDrawList *dl = ImGui::GetWindowDrawList();
	for (int half = 0; half < 2; half++) {
		ImGui::Text(half ? "Sprites" : "Backgrounds");
		ImVec2 o = ImGui::GetCursorScreenPos();
		for (int i = 0; i < 256; i++) {
			u16 c = *(u16 *)(uintptr_t)(0x05000000 + half * 0x200 + i * 2);
			ImVec2 a(o.x + (i % 16) * 12, o.y + (i / 16) * 12);
			dl->AddRectFilled(a, ImVec2(a.x + 11, a.y + 11), gba_color(c));
		}
		ImGui::Dummy(ImVec2(16 * 12, 16 * 12));
	}
	ImGui::End();
}

static SDL_Texture *sTileTex;
static void tiles_window() {
	place(5, 300, 380);
	if (!ImGui::Begin("Tiles", &sShowTiles)) { ImGui::End(); return; }
	static int block = 0, palette = 0;
	static bool bpp8 = false;
	ImGui::SetNextItemWidth(150);
	ImGui::Combo("VRAM", &block, "BG 06000000\0BG 06008000\0Sprites 06010000\0");
	ImGui::SameLine();
	ImGui::SetNextItemWidth(100);
	ImGui::SliderInt("Palette", &palette, 0, 15);
	ImGui::SameLine();
	ImGui::Checkbox("256 colours", &bpp8);
	if (!sTileTex) sTileTex = SDL_CreateTexture(sRenderer, SDL_PIXELFORMAT_RGB888, SDL_TEXTUREACCESS_STREAMING, 256, 256);
	u32 *px;
	int pitch;
	SDL_LockTexture(sTileTex, nullptr, (void **)&px, &pitch);
	const u8 *vram = (const u8 *)(uintptr_t)(0x06000000 + block * 0x8000);
	const u16 *pal = (const u16 *)(uintptr_t)(0x05000000 + (block == 2 ? 0x200 : 0));
	int tiles = bpp8 ? 512 : 1024;   // 32 KB
	for (int t = 0; t < tiles; t++)
		for (int y = 0; y < 8; y++)
			for (int x = 0; x < 8; x++) {
				int idx = bpp8 ? vram[t * 64 + y * 8 + x] : (vram[t * 32 + y * 4 + x / 2] >> ((x & 1) * 4)) & 15;
				u16 c = bpp8 ? pal[idx] : pal[palette * 16 + idx];
				ImU32 col = gba_color(c);
				int X = (t % 32) * 8 + x, Y = (t / 32) * 8 + y;
				px[Y * (pitch / 4) + X] = ((col & 0xFF) << 16) | (col & 0xFF00) | ((col >> 16) & 0xFF);
			}
	if (bpp8)
		for (int y = 128; y < 256; y++) memset(px + y * (pitch / 4), 0, 256 * 4);
	SDL_UnlockTexture(sTileTex);
	// as large as the window allows, in whole steps
	ImVec2 avail = ImGui::GetContentRegionAvail();
	float side = avail.x < avail.y ? avail.x : avail.y;
	float zoom = side >= 512 ? 2.0f : 1.0f;
	ImGui::Image((ImTextureID)(intptr_t)sTileTex, ImVec2(256 * zoom, 256 * zoom));
	ImGui::End();
}

static void sprites_window() {
	place(6, 480, 360);
	if (!ImGui::Begin("Sprites", &sShowSprites)) { ImGui::End(); return; }
	static const u8 sizes[3][4][2] = {
		{ { 8, 8 }, { 16, 16 }, { 32, 32 }, { 64, 64 } },
		{ { 16, 8 }, { 32, 8 }, { 32, 16 }, { 64, 32 } },
		{ { 8, 16 }, { 8, 32 }, { 16, 32 }, { 32, 64 } },
	};
	if (ImGui::BeginTable("oam", 7, ImGuiTableFlags_RowBg | ImGuiTableFlags_ScrollY)) {
		ImGui::TableSetupColumn("#");
		ImGui::TableSetupColumn("x, y");
		ImGui::TableSetupColumn("size");
		ImGui::TableSetupColumn("tile");
		ImGui::TableSetupColumn("palette");
		ImGui::TableSetupColumn("priority");
		ImGui::TableSetupColumn("flags");
		ImGui::TableHeadersRow();
		for (int i = 0; i < 128; i++) {
			const u16 *o = (const u16 *)(uintptr_t)(0x07000000 + i * 8);
			if (!(o[0] & 0x100) && (o[0] & 0x200)) continue;   // hidden
			int shape = o[0] >> 14;
			if (shape == 3) continue;
			int x = o[1] & 0x1FF, y = o[0] & 0xFF;
			if (x >= 240) x -= 512;
			if (y >= 160) y -= 256;
			ImGui::TableNextRow();
			ImGui::TableNextColumn(); ImGui::Text("%d", i);
			ImGui::TableNextColumn(); ImGui::Text("%d, %d", x, y);
			ImGui::TableNextColumn(); ImGui::Text("%dx%d", sizes[shape][o[1] >> 14][0], sizes[shape][o[1] >> 14][1]);
			ImGui::TableNextColumn(); ImGui::Text("%d", o[2] & 0x3FF);
			ImGui::TableNextColumn(); ImGui::Text("%d", o[2] >> 12);
			ImGui::TableNextColumn(); ImGui::Text("%d", (o[2] >> 10) & 3);
			ImGui::TableNextColumn();
			ImGui::Text("%s%s%s%s", (o[0] & 0x100) ? "affine " : "", (o[0] & 0x2000) ? "256c " : "",
			            ((o[0] >> 10) & 3) == 1 ? "blend " : ((o[0] >> 10) & 3) == 2 ? "window " : "",
			            (o[0] & 0x1000) ? "mosaic" : "");
		}
		ImGui::EndTable();
	}
	ImGui::End();
}

static void io_window() {
	ImGui::SetNextWindowPos(ImVec2(20.0f + 7 * 30, 20.0f + 7 * 30), ImGuiCond_FirstUseEver);
	if (!ImGui::Begin("I/O registers", &sShowIo, ImGuiWindowFlags_AlwaysAutoResize)) { ImGui::End(); return; }
	static const struct { u32 o; const char *name; } regs[] = {
		{ 0x000, "DISPCNT" }, { 0x004, "DISPSTAT" }, { 0x006, "VCOUNT" }, { 0x008, "BG0CNT" }, { 0x00A, "BG1CNT" },
		{ 0x00C, "BG2CNT" }, { 0x00E, "BG3CNT" }, { 0x010, "BG0HOFS" }, { 0x012, "BG0VOFS" }, { 0x014, "BG1HOFS" },
		{ 0x016, "BG1VOFS" }, { 0x018, "BG2HOFS" }, { 0x01A, "BG2VOFS" }, { 0x01C, "BG3HOFS" }, { 0x01E, "BG3VOFS" },
		{ 0x040, "WIN0H" }, { 0x042, "WIN1H" }, { 0x044, "WIN0V" }, { 0x046, "WIN1V" }, { 0x048, "WININ" },
		{ 0x04A, "WINOUT" }, { 0x04C, "MOSAIC" }, { 0x050, "BLDCNT" }, { 0x052, "BLDALPHA" }, { 0x054, "BLDY" },
		{ 0x082, "SOUNDCNT_H" }, { 0x0BA, "DMA0CNT" }, { 0x0C6, "DMA1CNT" }, { 0x0D2, "DMA2CNT" }, { 0x0DE, "DMA3CNT" },
		{ 0x102, "TM0CNT" }, { 0x106, "TM1CNT" }, { 0x200, "IE" }, { 0x202, "IF" }, { 0x208, "IME" },
	};
	if (ImGui::BeginTable("io", 4)) {
		for (auto &r : regs) {
			ImGui::TableNextColumn();
			ImGui::Text("%-10s %04X", r.name, *(u16 *)(uintptr_t)(0x04000000 + r.o));
		}
		ImGui::EndTable();
	}
	ImGui::End();
}

// ----------------------------------------------------------- each frame

// --ui-test: open the menus at set frames and save the window as BMP
extern "C" void ui_test(const char *dir) { sTestDir = dir; }
static void test_step() {
	if (!sTestDir) return;
	char path[600];
	int shot = 0;
	// (frames from 1200, or, with --warp, from a second after the warp ends)
	static long base = -1;
	if (warp_active()) { base = -1; return; }
	if (base < 0) base = sFrame < 1200 ? 1200 : sFrame + 60;
	long F = sFrame - base;
	// (windows that size themselves are hidden on their first frame)
	if (F == 0) sShowSettings = true;
	if (F == 3) shot = 1;
	if (F == 4) { sShowSettings = false; sShowDebug = sShowFreezes = sShowSearch = sShowMemory = sShowPalette = true; }
	if (F == 10) shot = 2;
	if (F == 11) { sShowFreezes = sShowSearch = sShowMemory = sShowPalette = false; sShowTiles = sShowSprites = sShowIo = true; }
	if (F == 16) shot = 3;
	if (F == 17) sShowTiles = sShowSprites = sShowIo = false;
	if (F == 22) shot = 4;   // the Debug window alone
	if (F == 23) { sTestOpenAll = true; dbgo.ovCrop = 1; }
	if (F == 28) shot = 5;   // the Debug window, every section open, overlays on
	if (F == 29) exit(0);
	if (!shot) return;
	int w, h;
	SDL_GetRendererOutputSize(sRenderer, &w, &h);
	SDL_Surface *surf = SDL_CreateRGBSurfaceWithFormat(0, w, h, 32, SDL_PIXELFORMAT_ARGB8888);
	SDL_RenderReadPixels(sRenderer, nullptr, SDL_PIXELFORMAT_ARGB8888, surf->pixels, surf->pitch);
	snprintf(path, sizeof path, "%s/ui%d.bmp", sTestDir, shot);
	SDL_SaveBMP(surf, path);
	SDL_FreeSurface(surf);
}

static void report_window() {
	ImVec2 vp = ImGui::GetMainViewport()->Size;
	if (sReportFocus) { ImGui::SetNextWindowFocus(); sReportFocus = false; }
	ImGui::SetNextWindowPos(ImVec2(vp.x / 2, vp.y / 2), ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));
	bool open = true;
	const char *title = sReportKind == REPORT_CRASH ? "The game crashed last time###report" : "Report a problem###report";
	if (!ImGui::Begin(title, &open, ImGuiWindowFlags_AlwaysAutoResize)) { ImGui::End(); return; }
	if (sReportKind == REPORT_CRASH)
		ImGui::TextWrapped("A crash report was saved. Sending it helps fix the crash. What were you doing?");
	else
		ImGui::TextWrapped("The game is paused. What went wrong? What did you expect?");
	ImGui::InputTextMultiline("##msg", sReportMsg, sizeof sReportMsg, ImVec2(ImGui::GetFontSize() * 30, ImGui::GetFontSize() * 8));
	ImGui::TextDisabled("Saved with it: your inputs since the game started, the save as it was then,");
	ImGui::TextDisabled("a screenshot, the game's memory and your settings. Nothing is sent by itself.");
	if (ImGui::Button("Share...")) ImGui::OpenPopup("share");
	if (ImGui::BeginPopup("share")) {
		static const char *const targets[] = { "GitHub issue", "Email", "Discord", "Google Drive" };
		for (int t = 0; t < 4; t++)
			if (ImGui::Selectable(targets[t])) {
				const char *z = sReportKind == REPORT_CRASH && sReportZip[0] ? sReportZip : report_write(sReportKind, sReportMsg);
				if (z) {
					snprintf(sReportZip, sizeof sReportZip, "%s", z);
					report_share(t, sReportKind, sReportMsg, z, sReportStatus, sizeof sReportStatus);
					if (sReportKind == REPORT_CRASH) report_clear_pending_crash();
				} else snprintf(sReportStatus, sizeof sReportStatus, "Could not write to %s.", report_folder());
			}
		ImGui::EndPopup();
	}
	ImGui::SameLine();
	if (ImGui::Button("Save only")) {
		const char *z = sReportKind == REPORT_CRASH && sReportZip[0] ? sReportZip : report_write(sReportKind, sReportMsg);
		if (z) {
			snprintf(sReportZip, sizeof sReportZip, "%s", z);
			snprintf(sReportStatus, sizeof sReportStatus, "Saved %s.", z);
			if (sReportKind == REPORT_CRASH) report_clear_pending_crash();
		}
	}
	ImGui::SameLine();
	if (ImGui::Button(sReportStatus[0] ? "Close" : "Cancel")) open = false;
	if (sReportStatus[0]) ImGui::TextWrapped("%s", sReportStatus);
	ImGui::End();
	if (!open) {
		if (sReportKind == REPORT_CRASH && !sReportStatus[0]) report_clear_pending_crash();   // declined
		sShowReport = false;
	}
}

// over the game: the frame and where Zero is (Debug window, Position
// overlay), and the F5 message
static void debug_overlays() {
	ImDrawList *dl = ImGui::GetBackgroundDrawList();
	int wx0, wy0, wx1, wy1;
	if (!screen_to_world(sGameDst.x, sGameDst.y, &wx0, &wy0) ||
	    !screen_to_world(sGameDst.x + sGameDst.w - 1, sGameDst.y + sGameDst.h - 1, &wx1, &wy1)) return;
	dl->PushClipRect(ImVec2(sGameDst.x, sGameDst.y), ImVec2(sGameDst.x + sGameDst.w, sGameDst.y + sGameDst.h));
	float sx, sy, ex, ey;
	if (dbgo.ovShown || dbgo.ovGrid)
		for (int y = wy0 & ~15; y <= wy1; y += 16)
			for (int x = wx0 & ~15; x <= wx1; x += 16) {
				world_to_screen(x, y, &sx, &sy); world_to_screen(x + 16, y + 16, &ex, &ey);
				if (dbgo.ovShown) {
					int c = view_cell(x, y);
					if (c >= 0) {
						ImU32 col = c & 1 ? IM_COL32(0, 255, 0, 45) : c & 2 ? IM_COL32(255, 220, 0, 55) : IM_COL32(255, 0, 0, 60);
						dl->AddRectFilled(ImVec2(sx, sy), ImVec2(ex, ey), col);
						if (c & 8) dl->AddCircleFilled(ImVec2((sx + ex) / 2, (sy + ey) / 2), 1.5f, IM_COL32(255, 255, 255, 160));
					}
				}
				if (dbgo.ovGrid) dl->AddRect(ImVec2(sx, sy), ImVec2(ex + 1, ey + 1), IM_COL32(255, 255, 255, 40));
			}
	if (dbgo.ovFill && view_active && view_layers && sGameTexW == view_w && sGameTexH == view_h) {
		float kx = sGameDst.w / (float)view_w, ky = sGameDst.h / (float)view_h;
		for (int y = 0; y < view_h; y += 4)
			for (int x = 0; x < view_w; x += 4)
				if (view_layers[(size_t)y * view_w + x] & 8)
					dl->AddRectFilled(ImVec2(sGameDst.x + x * kx, sGameDst.y + y * ky), ImVec2(sGameDst.x + (x + 4) * kx, sGameDst.y + (y + 4) * ky), IM_COL32(255, 0, 255, 70));
	}
	if (dbgo.ovChunk)
		for (int cy = wy0 / 160; cy <= wy1 / 160; cy++)
			for (int cx = wx0 / 240; cx <= wx1 / 240; cx++) {
				int src = view_chunk_src(cx, cy);
				world_to_screen(cx * 240, cy * 160, &sx, &sy); world_to_screen(cx * 240 + 240, cy * 160 + 160, &ex, &ey);
				ImU32 col = src == 0 ? IM_COL32(0, 200, 255, 200) : src > 0 ? IM_COL32(255, 160, 0, 200) : IM_COL32(160, 160, 160, 160);
				dl->AddRect(ImVec2(sx + 1, sy + 1), ImVec2(ex - 1, ey - 1), col, 0, 0, 2);
				char t[40];
				snprintf(t, sizeof t, "%d,%d %s", cx, cy, src == 0 ? "vram" : src > 0 ? "copy" : src == -1 ? "none" : "?");
				if (src > 0) snprintf(t, sizeof t, "%d,%d copy %d", cx, cy, src);
				dl->AddText(ImVec2(sx + 4, sy + 3), col, t);
			}
	float l, t, r, b;
	if (dbgo.ovCrop && view_crop_rect(&l, &t, &r, &b)) {
		world_to_screen(l, t, &sx, &sy); world_to_screen(r, b, &ex, &ey);
		dl->AddRect(ImVec2(sx, sy), ImVec2(ex, ey), IM_COL32(255, 64, 64, 230), 0, 0, 2);
	}
	if (sPlaceMode && sShowDebug && !ImGui::GetIO().WantCaptureMouse) {
		ImVec2 m = ImGui::GetIO().MousePos;
		int x, y;
		if (screen_to_world(m.x, m.y, &x, &y)) {
			bool ok = teleport_safe(x, y);
			dl->AddCircle(m, 8, ok ? IM_COL32(0, 255, 0, 255) : IM_COL32(255, 0, 0, 255), 0, 2);
		}
	}
	dl->PopClipRect();
}

static bool overlays_on() { return dbgo.ovShown || dbgo.ovFill || dbgo.ovChunk || dbgo.ovCrop || dbgo.ovGrid || (sPlaceMode && sShowDebug); }

static void overlay(bool toastOn) {
	ImDrawList *dl = ImGui::GetForegroundDrawList();
	char line[300];
	int lines = (debug.overlay ? 1 : 0) + (toastOn ? 1 : 0);
	float y = ImGui::GetMainViewport()->Size.y - lines * (ImGui::GetFontSize() + 3) - 4;   // at the bottom
	auto put = [&](const char *t) {
		ImVec2 sz = ImGui::CalcTextSize(t);
		dl->AddRectFilled(ImVec2(4, y - 1), ImVec2(10 + sz.x, y + sz.y + 1), IM_COL32(0, 0, 0, 170));
		dl->AddText(ImVec2(7, y), IM_COL32(255, 255, 255, 255), t);
		y += sz.y + 3;
	};
	if (debug.overlay) {
		struct Location l;
		loc_now(&l);
		snprintf(line, sizeof line, "frame %ld  mission %d area %d cp %d  Zero %d,%d  camera %d,%d  life %d%s", sFrame,
		         l.mission, l.area, l.checkpoint, l.x, l.y, l.camX, l.camY, zero_hp(), warp_active() ? "  (warping)" : "");
		put(line);
	}
	if (toastOn) put(sToast);
}

extern "C" void ui_present(SDL_Texture *game) {
	int ww, wh;
	SDL_GetRendererOutputSize(sRenderer, &ww, &wh);
	// the game picture (the GBA's 240x160 or the zoomed-out view): as large
	// as fits, keeping its shape
	int tw, th;
	SDL_QueryTexture(game, nullptr, nullptr, &tw, &th);
	float s = ww / (float)tw < wh / (float)th ? ww / (float)tw : wh / (float)th;
	if (settings.integerScale && s >= 1) s = (float)(int)s;
	SDL_Rect dst = { (int)(ww - tw * s) / 2, (int)(wh - th * s) / 2, (int)(tw * s), (int)(th * s) };
	SDL_SetTextureScaleMode(game, settings.smooth ? SDL_ScaleModeLinear : SDL_ScaleModeNearest);
	SDL_SetRenderDrawColor(sRenderer, 0, 0, 0, 255);
	SDL_RenderClear(sRenderer);
	SDL_RenderCopy(sRenderer, game, nullptr, &dst);
	sGameDst = dst; sGameTexW = tw; sGameTexH = th;


	if (sRebindPad >= 0 && SDL_GetTicks() - sRebindTime > 5000) sRebindPad = -1;   // nothing pressed
	bool wasOpen = menus_open();
	bool toastOn = sToast[0] && SDL_GetTicks() < sToastUntil;
	if (wasOpen || debug.overlay || toastOn || overlays_on()) {
		// while a controller binding waits, the controller does not move around the menu
		ImGuiIO &io = ImGui::GetIO();
		if (sRebindPad >= 0) io.ConfigFlags &= ~ImGuiConfigFlags_NavEnableGamepad;
		else io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;
		ImGui_ImplSDLRenderer2_NewFrame();
		ImGui_ImplSDL2_NewFrame();
		ImGui::GetIO().FontGlobalScale = wh >= 1400 ? 2.0f : wh >= 1000 ? 1.5f : 1.0f;
		ImGui::NewFrame();
		if (overlays_on()) debug_overlays();
		if (debug.overlay || toastOn) overlay(toastOn);
		if (sShowSettings) settings_window();
		if (sShowReport) report_window();
		if (sShowDebug) {
			debug_window();
			if (sShowFreezes) freezes_window();
			if (sShowSearch) search_window();
			if (sShowMemory) memory_window();
			if (sShowPalette) palette_window();
			if (sShowTiles) tiles_window();
			if (sShowSprites) sprites_window();
			if (sShowIo) io_window();
		}
		ImGui::Render();
		ImGui_ImplSDLRenderer2_RenderDrawData(ImGui::GetDrawData(), sRenderer);
		if (wasOpen && !menus_open()) settings_save();
	}
	test_step();
	SDL_RenderPresent(sRenderer);
}
