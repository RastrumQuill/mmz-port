/* Mega Man Zero for PC: the lifted (and hand-written) game code, run
 * natively, with an SDL2 window, keyboard and gamepad, and sound.
 *
 *   mmz [--rom FILE] [--save FILE] [--scale N]
 *   mmz --headless --route FILE      play a tools/emu route without a
 *       [--wav FILE]                 window, writing its screenshots (as
 *                                    .ppm) for comparison with mGBA, and
 *                                    the sound
 *
 * The ROM is read for the data the code uses (graphics, sound, levels);
 * none of its code is run.
 */
#include <errno.h>
#include <stdarg.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
#else
#include <sys/mman.h>
#endif
#include <SDL.h>
#include "lift.h"
#include "pc.h"
#include "settings.h"
#include "ui.h"
#include "input.h"

extern u32 romSize, biosBus;
extern jmp_buf failJmp;
extern char failReason[128];
extern int64_t budget;
void lift_AgbMain(void);

static int headless;
static FILE *wavFile;     /* --wav: headless sound output */
static u32 wavBytes, wavRate;
static long frameCount;
static u16 keys;   /* pressed buttons, GBA bit order */

/* Errors: a message box when there is a window to go with it (on Windows
 * the game has no console). */
static void fatal(const char *fmt, ...) {
	char msg[1024];
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(msg, sizeof msg, fmt, ap);
	va_end(ap);
	fprintf(stderr, "%s\n", msg);
	if (!headless) SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Mega Man Zero", msg, NULL);
	exit(1);
}

/* ------------------------------------------------------------- memory */

/* The GBA memory at its own addresses, so game pointers work as they are. */
#ifdef _WIN32
/* The game's memory has to be at the GBA's own addresses, but Windows hands
   out low addresses to whatever asks first: injected overlays and hooks,
   graphics drivers, the file dialog's shell extensions. So the ranges are
   reserved before anything else runs (a constructor). If something already
   holds them by then, the game starts itself again suspended, before any DLL
   is loaded into the new process, reserves them there, and lets it run. */
static const struct { u32 addr, size; } kGbaRanges[] = {
	{ 0x02000000, 0x40000 }, { 0x03000000, 0x8000 }, { 0x04000000, 0x1000 }, { 0x05000000, 0x1000 },
	{ 0x06000000, 0x18000 }, { 0x07000000, 0x1000 }, { 0x08000000, 0x2000000 }, { 0x0E000000, 0x8000 },
};
#define NRANGES (sizeof kGbaRanges / sizeof *kGbaRanges)

static int reserve_in(HANDLE proc) {
	int ok = 1;
	for (unsigned i = 0; i < NRANGES; i++) {
		void *want = (void *)(uintptr_t)kGbaRanges[i].addr;
		MEMORY_BASIC_INFORMATION mi;
		/* already reserved (by the parent, for this process) */
		if (VirtualQueryEx(proc, want, &mi, sizeof mi) && mi.State == MEM_RESERVE && mi.AllocationBase == want)
			continue;
		if (VirtualAllocEx(proc, want, kGbaRanges[i].size, MEM_RESERVE, PAGE_NOACCESS) != want) ok = 0;
	}
	return ok;
}

__attribute__((constructor(101))) static void reserve_gba_ranges(void) {
	if (reserve_in(GetCurrentProcess())) return;
	if (GetEnvironmentVariableA("MMZ_RELAUNCHED", NULL, 0)) return;   /* map_at reports it */
	SetEnvironmentVariableA("MMZ_RELAUNCHED", "1");
	STARTUPINFOW si = { sizeof si };
	PROCESS_INFORMATION pi;
	wchar_t exe[MAX_PATH];
	GetModuleFileNameW(NULL, exe, MAX_PATH);
	if (!CreateProcessW(exe, GetCommandLineW(), NULL, NULL, TRUE, CREATE_SUSPENDED, NULL, NULL, &si, &pi))
		return;
	reserve_in(pi.hProcess);
	ResumeThread(pi.hThread);
	WaitForSingleObject(pi.hProcess, INFINITE);
	DWORD code = 1;
	GetExitCodeProcess(pi.hProcess, &code);
	ExitProcess(code);
}
#endif

static void *map_at(u32 addr, u32 size) {
#ifdef _WIN32
	void *p = VirtualAlloc((void *)(uintptr_t)addr, size, MEM_COMMIT, PAGE_READWRITE);   /* reserved at start */
	if (p != (void *)(uintptr_t)addr)
		p = VirtualAlloc((void *)(uintptr_t)addr, size, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
	if (p != (void *)(uintptr_t)addr) {
		DWORD err = GetLastError();
		/* what is there, to report */
		MEMORY_BASIC_INFORMATION mi = { 0 };
		char owner[MAX_PATH] = "";
		VirtualQuery((void *)(uintptr_t)addr, &mi, sizeof mi);
		if (mi.State != MEM_FREE && mi.Type == MEM_IMAGE)
			GetModuleFileNameA((HMODULE)mi.AllocationBase, owner, sizeof owner);
		fatal("Cannot reserve the GBA memory at %08X (error %lu).\n\n"
		      "Something else in the process holds %p-%p (%s%s%s, state %lX).%s",
		      addr, err, mi.AllocationBase, (char *)mi.BaseAddress + mi.RegionSize,
		      mi.Type == MEM_IMAGE ? "a program file" : mi.Type == MEM_MAPPED ? "a mapped file" : "private memory",
		      owner[0] ? ": " : "", owner, (unsigned long)mi.State,
		      GetEnvironmentVariableA("MMZ_RELAUNCHED", NULL, 0) ? " (after a restart)" : "");
	}
#else
	void *p = mmap((void *)(uintptr_t)addr, size, PROT_READ | PROT_WRITE,
	               MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
	if (p == MAP_FAILED || p != (void *)(uintptr_t)addr) {
		fatal("Cannot map the GBA memory at %08X: %s", addr, strerror(errno));
	}
#endif
	return p;
}

/* 1 if the file is Mega Man Zero (USA): the code is made for that ROM */
static int is_game_rom(const char *path) {
	FILE *f = fopen(path, "rb");
	if (!f) return 0;
	char h[0xB0];
	size_t n = fread(h, 1, sizeof h, f);
	fclose(f);
	return n == sizeof h && !memcmp(h + 0xA0, "MEGAMAN ZERO", 12) && !memcmp(h + 0xAC, "AZCE", 4);
}

/* The ROM: the setting (as it is, or next to the executable), else ask. */
static const char *find_rom(void) {
	static char p[1024];
	if (is_game_rom(settings.rom)) return settings.rom;
	char *base = SDL_GetBasePath();
	snprintf(p, sizeof p, "%s%s", base ? base : "", settings.rom);
	SDL_free(base);
	if (is_game_rom(p)) return p;
	if (headless) return settings.rom;
#ifdef _WIN32
	SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Mega Man Zero",
	                         "Choose your Mega Man Zero (USA) ROM. It is read for the game's data; "
	                         "the choice is kept in mmz.ini.", NULL);
	OPENFILENAMEA ofn = { 0 };
	p[0] = 0;
	ofn.lStructSize = sizeof ofn;
	ofn.lpstrFilter = "GBA ROM (*.gba)\0*.gba\0All files\0*.*\0";
	ofn.lpstrFile = p;
	ofn.nMaxFile = sizeof p;
	ofn.Flags = OFN_FILEMUSTEXIST | OFN_NOCHANGEDIR;
	if (!GetOpenFileNameA(&ofn)) exit(0);
	if (!is_game_rom(p)) fatal("%s is not Mega Man Zero (USA).", p);
	snprintf(settings.rom, sizeof settings.rom, "%s", p);
	settings_save();
	return settings.rom;
#else
	fatal("Mega Man Zero (USA) ROM not found: put it next to the game as baserom.gba, "
	      "or set rom = PATH in %s.", settings_path());
	return NULL;
#endif
}

static void load_rom(const char *path) {
	FILE *f = fopen(path, "rb");
	if (!f) fatal("Cannot open the ROM %s.", path);
	fseek(f, 0, SEEK_END);
	romSize = ftell(f);
	rewind(f);
	u8 *rom = map_at(0x08000000, (romSize + 0xFFF) & ~0xFFFu);
	if (fread(rom, 1, romSize, f) != romSize) fatal("Cannot read the ROM %s.", path);
	fclose(f);
}

/* ---------------------------------------------------------------- saves */

#define SRAM ((u8 *)0x0E000000)
static const char *savePath;
static u8 savedCopy[0x8000];

static void save_load(void) {
	memset(SRAM, 0xFF, 0x8000);
	FILE *f = fopen(savePath, "rb");
	if (f) { size_t n = fread(SRAM, 1, 0x8000, f); (void)n; fclose(f); }
	memcpy(savedCopy, SRAM, 0x8000);
}
static void save_flush(void) {
	if (!memcmp(savedCopy, SRAM, 0x8000)) return;
	FILE *f = fopen(savePath, "wb");
	if (!f) return;
	fwrite(SRAM, 1, 0x8000, f);
	fclose(f);
	memcpy(savedCopy, SRAM, 0x8000);
}

/* ---------------------------------------------------- headless routes */

static FILE *route;
static long routeFrame = -1;
static char routeCmd[64], routeArg1[256], routeArg2[64], routeArg3[256];

static int keymask(const char *s) {
	static const char *names[] = { "A", "B", "SELECT", "START", "RIGHT", "LEFT", "UP", "DOWN", "R", "L" };
	int m = 0;
	char buf[256];
	snprintf(buf, sizeof buf, "%s", s);
	for (char *t = strtok(buf, ","); t; t = strtok(NULL, ","))
		for (int i = 0; i < 10; i++)
			if (!strcmp(t, names[i])) m |= 1 << i;
	return m;
}

static void write_ppm(const char *path) {
	/* the zoomed-out view when there is one, else the GBA picture */
	const u32 *src = view_active ? view_frame : ppu_frame;
	int w = view_active ? view_w : SCREEN_W, h = view_active ? view_h : SCREEN_H;
	char p[300];
	snprintf(p, sizeof p, "%s", path);
	char *dot = strrchr(p, '.');
	if (dot && !strcmp(dot, ".png")) strcpy(dot, ".ppm");
	FILE *f = fopen(p, "wb");
	if (!f) { fprintf(stderr, "cannot write %s\n", p); return; }
	fprintf(f, "P6\n%d %d\n255\n", w, h);
	for (int i = 0; i < w * h; i++) {
		u32 c = src[i];
		fputc(c >> 16, f); fputc(c >> 8, f); fputc(c, f);
	}
	fclose(f);
}

static void route_step(void) {
	for (;;) {
		if (routeFrame < 0) {
			char line[512];
			if (!fgets(line, sizeof line, route)) { save_flush(); exit(0); }
			routeArg1[0] = routeArg2[0] = routeArg3[0] = 0;
			if (line[0] == '#' || sscanf(line, "%ld %63s %255s %63s %255s", &routeFrame, routeCmd, routeArg1, routeArg2, routeArg3) < 2) {
				routeFrame = -1;
				continue;
			}
		}
		if (routeFrame > frameCount) return;
		if (!strcmp(routeCmd, "shot")) write_ppm(routeArg1);
		else if (!strcmp(routeCmd, "end")) { save_flush(); exit(0); }
		else if (!strcmp(routeCmd, "poke")) *(u8 *)(uintptr_t)strtoul(routeArg1, 0, 0) = strtoul(routeArg2, 0, 0);
		else if (!strcmp(routeCmd, "dump")) {   /* dump ADDR LEN FILE */
			u32 a = strtoul(routeArg1, 0, 0), len = strtoul(routeArg2, 0, 0);
			FILE *o = fopen(routeArg3, "wb");
			if (o) { fwrite((void *)(uintptr_t)a, 1, len, o); fclose(o); }
		}
		else keys = strcmp(routeCmd, "-") ? keymask(routeCmd) : 0;
		routeFrame = -1;
	}
}

/* ---------------------------------------------------------------- SDL */

static SDL_Window *window;
static SDL_Renderer *renderer;
static SDL_Texture *texture;
static SDL_Texture *viewTexture;   /* the zoomed-out view, view_w x view_h */
static int viewTexW, viewTexH;
static SDL_AudioDeviceID audioDev;
static SDL_AudioStream *audioStream;
static int audioStreamRate;
static Uint64 nextFrameTime;

static void sdl_init(int scale) {
	input_hints();
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMECONTROLLER) < 0) {
		fprintf(stderr, "SDL: %s\n", SDL_GetError());
		exit(1);
	}
	input_init();
	window = SDL_CreateWindow("Mega Man Zero", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
	                          SCREEN_W * scale, SCREEN_H * scale, SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (!renderer) renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);   /* no GPU driver */
	if (!renderer) fatal("Cannot draw in the window: %s", SDL_GetError());
	ui_init(window, renderer);
	if (settings.fullscreen) SDL_SetWindowFullscreen(window, SDL_WINDOW_FULLSCREEN_DESKTOP);
	texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGB888, SDL_TEXTUREACCESS_STREAMING, SCREEN_W, SCREEN_H);
	SDL_AudioSpec want = { 0 }, have;
	want.freq = 48000;
	want.format = AUDIO_S16SYS;
	want.channels = 2;
	want.samples = 1024;
	audioDev = SDL_OpenAudioDevice(NULL, 0, &want, &have, 0);
	if (audioDev) SDL_PauseAudioDevice(audioDev, 0);
	nextFrameTime = SDL_GetPerformanceCounter();
}

static void sdl_audio(void) {
	static s16 buf[8192 * 2];
	int n = audio_take(buf, 8192);
	if (!audioDev || n == 0 || settings.mute || debug.fastForward) return;
	int rate = audio_rate();
	if (rate <= 0) return;
	if (!audioStream || rate != audioStreamRate) {
		if (audioStream) SDL_FreeAudioStream(audioStream);
		audioStream = SDL_NewAudioStream(AUDIO_S16SYS, 2, rate, AUDIO_S16SYS, 2, 48000);
		audioStreamRate = rate;
	}
	if (settings.volume != 100)
		for (int i = 0; i < n * 2; i++) buf[i] = buf[i] * settings.volume / 100;
	SDL_AudioStreamPut(audioStream, buf, n * 4);
	static s16 outBuf[16384 * 2];
	int got = SDL_AudioStreamGet(audioStream, outBuf, sizeof outBuf);
	/* keep the queue short, so sound stays in step with the picture */
	if (got > 0 && SDL_GetQueuedAudioSize(audioDev) < 48000 * 4 / 8)
		SDL_QueueAudio(audioDev, outBuf, got);
}

static void sdl_events(void) {
	SDL_Event e;
	while (SDL_PollEvent(&e)) {
		if (e.type == SDL_QUIT) { save_flush(); settings_save(); exit(0); }
		input_event(&e);
		if (ui_event(&e)) continue;
		if (e.type == SDL_KEYDOWN && e.key.keysym.scancode == SDL_SCANCODE_F11) {
			settings.fullscreen = !settings.fullscreen;
			SDL_SetWindowFullscreen(window, settings.fullscreen ? SDL_WINDOW_FULLSCREEN_DESKTOP : 0);
		}
	}
	input_poll();
	/* the controller's fast-forward hotkey (Tab on the keyboard, in ui.cpp) */
	static int fast;
	if (input_fast != fast) debug.fastForward = fast = input_fast;
}

static u16 read_buttons(void) {
	if (ui_wants_input()) return 0;
	return input_buttons();
}

/* the picture to show: the zoomed-out view, or the GBA's */
static SDL_Texture *frame_texture(void) {
	if (!view_active) {
		SDL_UpdateTexture(texture, NULL, ppu_frame, SCREEN_W * 4);
		return texture;
	}
	if (!viewTexture || viewTexW != view_w || viewTexH != view_h) {
		if (viewTexture) SDL_DestroyTexture(viewTexture);
		viewTexture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGB888, SDL_TEXTUREACCESS_STREAMING, view_w, view_h);
		viewTexW = view_w;
		viewTexH = view_h;
	}
	SDL_UpdateTexture(viewTexture, NULL, view_frame, view_w * 4);
	return viewTexture;
}

static void sdl_frame(void) {
	SDL_Texture *shown = frame_texture();
	int ww, wh;
	SDL_GetRendererOutputSize(renderer, &ww, &wh);
	settings_view_size(ww, wh, &view_w, &view_h);   /* (used from the next frame) */
	view_hud_edges = settings.hudEdges;
	sdl_events();
	/* paused (or in the settings): the game waits here, at the frame's end */
	while ((debug.paused && !debug.step) || ui_pauses_game()) {
		ui_present(shown);
		SDL_Delay(16);
		sdl_events();
		nextFrameTime = SDL_GetPerformanceCounter();
	}
	if (debug.paused && debug.step) debug.step--;
	keys = read_buttons();
	/* fast-forward: show every 4th frame, do not wait */
	static int skip;
	if (debug.fastForward && ++skip % 4) return;
	ui_present(shown);
	sdl_audio();
	if (debug.fastForward) { nextFrameTime = SDL_GetPerformanceCounter(); return; }
	/* 59.73 frames a second, as on the GBA */
	Uint64 freq = SDL_GetPerformanceFrequency();
	nextFrameTime += freq * 280896 / 16777216;
	Uint64 now = SDL_GetPerformanceCounter();
	if (nextFrameTime > now) SDL_Delay((Uint32)((nextFrameTime - now) * 1000 / freq));
	else if (now - nextFrameTime > freq / 4) nextFrameTime = now;   /* far behind: do not rush */
}

/* ------------------------------------------------------- hw.c callbacks */

static void wav_header(void) {
	u32 rate = wavRate ? wavRate : 13379;
	u32 h[11] = { 0x46464952, 36 + wavBytes, 0x45564157, 0x20746D66, 16, 0x00020001, rate, rate * 4, 0x00100004,
	              0x61746164, wavBytes };
	fseek(wavFile, 0, SEEK_SET);
	fwrite(h, 4, 11, wavFile);
	fseek(wavFile, 0, SEEK_END);
}
static void wav_write(void) {
	static s16 buf[8192 * 2];
	int n = audio_take(buf, 8192);
	if (audio_rate() > 0) wavRate = audio_rate();   /* the game sets its rate after start-up */
	fwrite(buf, 4, n, wavFile);
	wavBytes += n * 4;
	wav_header();
}

void frontend_frame(void) {
	frameCount++;
	ui_game_frame(frameCount);
	if (headless && wavFile) wav_write();
	if (headless) route_step();
	else sdl_frame();
	/* hand-written C reads the register directly */
	*(u16 *)0x04000130 = frontend_keys();
	if (frameCount % 60 == 0) save_flush();
}

u16 frontend_keys(void) {
	return 0x3FF & ~keys;
}

/* --------------------------------------------------------------- start */

int main(int argc, char **argv) {
	const char *romArg = NULL, *configArg = NULL, *viewArg = NULL;
	int scale = 0;
	savePath = NULL;
	for (int i = 1; i < argc; i++) {
		if (!strcmp(argv[i], "--rom") && i + 1 < argc) romArg = argv[++i];
		else if (!strcmp(argv[i], "--save") && i + 1 < argc) savePath = argv[++i];
		else if (!strcmp(argv[i], "--config") && i + 1 < argc) configArg = argv[++i];
		else if (!strcmp(argv[i], "--scale") && i + 1 < argc) scale = atoi(argv[++i]);
		else if (!strcmp(argv[i], "--headless")) headless = 1;
		else if (!strcmp(argv[i], "--view") && i + 1 < argc) viewArg = argv[++i];
		else if (!strcmp(argv[i], "--ui-test") && i + 1 < argc) ui_test(argv[++i]);
		else if (!strcmp(argv[i], "--wav") && i + 1 < argc) {
			wavFile = fopen(argv[++i], "wb");
			if (!wavFile) { fprintf(stderr, "cannot write %s\n", argv[i]); return 1; }
			wav_header();
		}
		else if (!strcmp(argv[i], "--route") && i + 1 < argc) {
			route = fopen(argv[++i], "r");
			if (!route) { fprintf(stderr, "cannot open route %s\n", argv[i]); return 1; }
		}
		else {
			fprintf(stderr, "usage: mmz [--rom FILE] [--save FILE] [--config FILE] [--scale N]\n"
			                "       mmz --headless --route FILE [--wav FILE] [--rom FILE] [--save FILE]\n");
			return 1;
		}
	}
	if (headless && !route) { fprintf(stderr, "--headless needs --route\n"); return 1; }
	settings_load(configArg);
	if (scale > 0) settings.scale = scale;
	if (viewArg) {   /* a mode name, or WIDTHxHEIGHT */
		int vw, vh;
		if (sscanf(viewArg, "%dx%d", &vw, &vh) == 2) { settings.viewMode = VIEW_CUSTOM; settings.viewW = vw; settings.viewH = vh; }
		else for (int i = 0; i < VIEW_MODES; i++) if (!strcmp(viewArg, kViewNames[i])) settings.viewMode = i;
	}
	settings_view_size(SCREEN_W * 4, SCREEN_H * 4, &view_w, &view_h);
	const char *romPath = romArg ? romArg : find_rom();
	static char defaultSave[1024];
	if (!savePath && settings.save[0]) savePath = settings.save;
	if (!savePath) {
		snprintf(defaultSave, sizeof defaultSave, "%s", romPath);
		char *dot = strrchr(defaultSave, '.');
		if (dot) *dot = 0;
		strcat(defaultSave, ".sav");
		savePath = defaultSave;
	}

	map_at(0x02000000, 0x40000);   /* EWRAM */
	map_at(0x03000000, 0x8000);    /* IWRAM */
	map_at(0x04000000, 0x1000);    /* I/O */
	map_at(0x05000000, 0x1000);    /* palette */
	map_at(0x06000000, 0x18000);   /* VRAM */
	map_at(0x07000000, 0x1000);    /* OAM */
	map_at(0x0E000000, 0x8000);    /* cartridge SRAM */
	load_rom(romPath);
	save_load();
	if (!headless) sdl_init(settings.scale > 0 ? settings.scale : 3);

	/* the state the BIOS leaves, and the start-up code (crt0) */
	*(u16 *)0x04000130 = 0x3FF;    /* KEYINPUT */
	*(u16 *)0x04000088 = 0x200;    /* SOUNDBIAS */
	*(u16 *)0x04000000 = 0x80;     /* DISPCNT: forced blank */
	biosBus = 0xE129F000;
	budget = INT64_MAX;
	if (getenv("MMZ_CYCLE_SCALE")) hw_cycle_scale = atoi(getenv("MMZ_CYCLE_SCALE"));
	hw_reset();
	tasks_reset();
	if (setjmp(failJmp)) {
		save_flush();
		fatal("The game stopped: %s (frame %ld).", failReason, frameCount);
	}
	*(u32 *)0x03007FFC = 0x080000FC;   /* IntrMain */
	for (;;) {
		cpu.r[13] = 0x03007DA0;
		cpu.r[14] = 0x080000F0;
		lift_tail = 0;
		lift_AgbMain();
	}
}
