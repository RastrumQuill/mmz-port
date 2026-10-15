// The in-game menus, with Dear ImGui:
//   F1   settings: video, sound, controls (click a binding, press the new key)
//   F2   debug tools: status, speed, layers, mission warp, RAM freezes and
//        search, memory, palette, tiles, sprites, I/O registers
//   P    pause, N one frame while paused, Tab (held) fast-forward
// Controllers: Guide or Back+Start opens the settings, the D-pad / stick and
// A move around them, B closes them.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
}

struct DebugState debug = { 0, 0, 0, 0x1F };

static SDL_Window *sWindow;
static SDL_Renderer *sRenderer;
static bool sShowSettings, sShowDebug;
static bool sShowMemory, sShowPalette, sShowTiles, sShowSprites, sShowIo, sShowSearch, sShowFreezes;
static int sRebindKey = -1, sRebindPad = -1;   // binding waiting for a new key / controller input
static Uint32 sRebindTime;                      // when the controller binding started
static bool sFocusSettings;
static bool sTabHeld;
static const char *sTestDir;   // --ui-test

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
}

static bool menus_open() { return sShowSettings || sShowDebug; }

extern "C" int ui_pauses_game(void) { return sShowSettings && !sTestDir; }

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
	return sShowSettings || (menus_open() && ImGui::GetIO().WantCaptureKeyboard);
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
	if (e->type == SDL_KEYDOWN && !e->key.repeat) {
		switch (e->key.keysym.scancode) {
		case SDL_SCANCODE_F1: ui_toggle_settings(); return 1;
		case SDL_SCANCODE_F2: sShowDebug = !sShowDebug; return 1;
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
		                                           "Open settings", "Fast-forward (held)" };
		static const int order[BINDS] = { 6, 7, 5, 4, 0, 1, 9, 8, 3, 2, 10, 11 };
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
				if (i < 10) {
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

static void debug_window() {
	ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_FirstUseEver);
	if (!ImGui::Begin("Debug (F2)", &sShowDebug, ImGuiWindowFlags_AlwaysAutoResize)) {
		ImGui::End();
		return;
	}
	ImGui::Text("Frame %ld   %.1f fps   line %d", sFrame, sFps, hw_line);
	ImGui::Text("Game mode %02X.%02X   mission %u   area %u", rd(ADDR_MODE, 1), rd(ADDR_SUBMODE, 1),
	            rd(ADDR_MISSION, 1), rd(ADDR_AREA, 1) & 0x7F);
	s32 cx = (s32)rd(ADDR_CAMERA + 0x38, 4), cy = (s32)rd(ADDR_CAMERA + 0x3C, 4);
	ImGui::Text("Camera centre %d, %d (pixels)", cx >> 8, cy >> 8);

	ImGui::SeparatorText("Speed");
	bool paused = debug.paused, ff = debug.fastForward;
	if (ImGui::Checkbox("Pause (P)", &paused)) debug.paused = paused;
	ImGui::SameLine();
	if (ImGui::Button("Step (N)")) { debug.paused = 1; debug.step++; }
	ImGui::SameLine();
	if (ImGui::Checkbox("Fast-forward (Tab)", &ff)) debug.fastForward = ff;
	ImGui::SliderInt("Cycle scale %", &hw_cycle_scale, 50, 200);

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
	// (windows that size themselves are hidden on their first frame)
	if (sFrame == 1203) shot = 1;
	if (sFrame == 1204) { sShowSettings = false; sShowDebug = sShowFreezes = sShowSearch = sShowMemory = sShowPalette = true; }
	if (sFrame == 1210) shot = 2;
	if (sFrame == 1211) { sShowFreezes = sShowSearch = sShowMemory = sShowPalette = false; sShowTiles = sShowSprites = sShowIo = true; }
	if (sFrame == 1216) shot = 3;
	if (sFrame == 1217) exit(0);
	if (!shot) return;
	int w, h;
	SDL_GetRendererOutputSize(sRenderer, &w, &h);
	SDL_Surface *surf = SDL_CreateRGBSurfaceWithFormat(0, w, h, 32, SDL_PIXELFORMAT_ARGB8888);
	SDL_RenderReadPixels(sRenderer, nullptr, SDL_PIXELFORMAT_ARGB8888, surf->pixels, surf->pitch);
	snprintf(path, sizeof path, "%s/ui%d.bmp", sTestDir, shot);
	SDL_SaveBMP(surf, path);
	SDL_FreeSurface(surf);
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

	if (sTestDir && sFrame == 1200) sShowSettings = true;
	if (sRebindPad >= 0 && SDL_GetTicks() - sRebindTime > 5000) sRebindPad = -1;   // nothing pressed
	if (menus_open()) {
		// while a controller binding waits, the controller does not move around the menu
		ImGuiIO &io = ImGui::GetIO();
		if (sRebindPad >= 0) io.ConfigFlags &= ~ImGuiConfigFlags_NavEnableGamepad;
		else io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;
		ImGui_ImplSDLRenderer2_NewFrame();
		ImGui_ImplSDL2_NewFrame();
		ImGui::GetIO().FontGlobalScale = wh >= 1400 ? 2.0f : wh >= 1000 ? 1.5f : 1.0f;
		ImGui::NewFrame();
		if (sShowSettings) settings_window();
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
		test_step();
		if (!sShowSettings && !sShowDebug) settings_save();
	}
	SDL_RenderPresent(sRenderer);
}
