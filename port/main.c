/* Mega Man Zero for PC: the lifted (and hand-written) game code, run
 * natively, with an SDL2 window, keyboard and gamepad, and sound.
 *
 *   mmz [--rom FILE] [--save FILE] [--scale N]
 *   mmz --headless --route FILE      play a tools/emu route without a
 *                                    window, writing its screenshots (as
 *                                    .ppm) for comparison with mGBA
 *
 * The ROM is read for the data the code uses (graphics, sound, levels);
 * none of its code is run.
 */
#include <errno.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <SDL.h>
#include "lift.h"
#include "pc.h"

extern u32 romSize, biosBus;
extern jmp_buf failJmp;
extern char failReason[128];
extern long budget;
void lift_AgbMain(void);

static int headless;
static long frameCount;
static u16 keys;   /* pressed buttons, GBA bit order */

/* ------------------------------------------------------------- memory */

static void *map_at(u32 addr, u32 size) {
	void *p = mmap((void *)(uintptr_t)addr, size, PROT_READ | PROT_WRITE,
	               MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED_NOREPLACE, -1, 0);
	if (p == MAP_FAILED || p != (void *)(uintptr_t)addr) {
		fprintf(stderr, "cannot map GBA memory at %08X: %s\n", addr, strerror(errno));
		exit(1);
	}
	return p;
}

static void load_rom(const char *path) {
	FILE *f = fopen(path, "rb");
	if (!f) { fprintf(stderr, "cannot open ROM %s\n", path); exit(1); }
	fseek(f, 0, SEEK_END);
	romSize = ftell(f);
	rewind(f);
	u8 *rom = map_at(0x08000000, (romSize + 0xFFF) & ~0xFFFu);
	if (fread(rom, 1, romSize, f) != romSize) { fprintf(stderr, "cannot read ROM\n"); exit(1); }
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
	char p[300];
	snprintf(p, sizeof p, "%s", path);
	char *dot = strrchr(p, '.');
	if (dot && !strcmp(dot, ".png")) strcpy(dot, ".ppm");
	FILE *f = fopen(p, "wb");
	if (!f) { fprintf(stderr, "cannot write %s\n", p); return; }
	fprintf(f, "P6\n%d %d\n255\n", SCREEN_W, SCREEN_H);
	for (int i = 0; i < SCREEN_W * SCREEN_H; i++) {
		u32 c = ppu_frame[i];
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
static SDL_GameController *pad;
static SDL_AudioDeviceID audioDev;
static SDL_AudioStream *audioStream;
static int audioStreamRate;
static Uint64 nextFrameTime;

static void sdl_init(int scale) {
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_GAMECONTROLLER) < 0) {
		fprintf(stderr, "SDL: %s\n", SDL_GetError());
		exit(1);
	}
	window = SDL_CreateWindow("Mega Man Zero", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
	                          SCREEN_W * scale, SCREEN_H * scale, SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_RenderSetLogicalSize(renderer, SCREEN_W, SCREEN_H);
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
	if (!audioDev || n == 0) return;
	int rate = audio_rate();
	if (rate <= 0) return;
	if (!audioStream || rate != audioStreamRate) {
		if (audioStream) SDL_FreeAudioStream(audioStream);
		audioStream = SDL_NewAudioStream(AUDIO_S16SYS, 2, rate, AUDIO_S16SYS, 2, 48000);
		audioStreamRate = rate;
	}
	SDL_AudioStreamPut(audioStream, buf, n * 4);
	static s16 outBuf[16384 * 2];
	int got = SDL_AudioStreamGet(audioStream, outBuf, sizeof outBuf);
	/* keep the queue short, so sound stays in step with the picture */
	if (got > 0 && SDL_GetQueuedAudioSize(audioDev) < 48000 * 4 / 8)
		SDL_QueueAudio(audioDev, outBuf, got);
}

static void sdl_frame(void) {
	SDL_Event e;
	while (SDL_PollEvent(&e)) {
		if (e.type == SDL_QUIT) { save_flush(); exit(0); }
		if (e.type == SDL_CONTROLLERDEVICEADDED && !pad) pad = SDL_GameControllerOpen(e.cdevice.which);
	}
	const Uint8 *k = SDL_GetKeyboardState(NULL);
	u16 m = 0;
	if (k[SDL_SCANCODE_X]) m |= 1;            /* A */
	if (k[SDL_SCANCODE_Z]) m |= 2;            /* B */
	if (k[SDL_SCANCODE_BACKSPACE] || k[SDL_SCANCODE_RSHIFT]) m |= 4;   /* Select */
	if (k[SDL_SCANCODE_RETURN]) m |= 8;       /* Start */
	if (k[SDL_SCANCODE_RIGHT]) m |= 16;
	if (k[SDL_SCANCODE_LEFT]) m |= 32;
	if (k[SDL_SCANCODE_UP]) m |= 64;
	if (k[SDL_SCANCODE_DOWN]) m |= 128;
	if (k[SDL_SCANCODE_S]) m |= 256;          /* R */
	if (k[SDL_SCANCODE_A]) m |= 512;          /* L */
	if (pad) {
		static const SDL_GameControllerButton b[10] = {
			SDL_CONTROLLER_BUTTON_B, SDL_CONTROLLER_BUTTON_A, SDL_CONTROLLER_BUTTON_BACK, SDL_CONTROLLER_BUTTON_START,
			SDL_CONTROLLER_BUTTON_DPAD_RIGHT, SDL_CONTROLLER_BUTTON_DPAD_LEFT, SDL_CONTROLLER_BUTTON_DPAD_UP,
			SDL_CONTROLLER_BUTTON_DPAD_DOWN, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER, SDL_CONTROLLER_BUTTON_LEFTSHOULDER };
		for (int i = 0; i < 10; i++)
			if (SDL_GameControllerGetButton(pad, b[i])) m |= 1 << i;
		int ax = SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTX);
		int ay = SDL_GameControllerGetAxis(pad, SDL_CONTROLLER_AXIS_LEFTY);
		if (ax > 16000) m |= 16;
		if (ax < -16000) m |= 32;
		if (ay < -16000) m |= 64;
		if (ay > 16000) m |= 128;
	}
	keys = m;
	SDL_UpdateTexture(texture, NULL, ppu_frame, SCREEN_W * 4);
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	SDL_RenderPresent(renderer);
	sdl_audio();
	/* 59.73 frames a second, as on the GBA */
	Uint64 freq = SDL_GetPerformanceFrequency();
	nextFrameTime += freq * 280896 / 16777216;
	Uint64 now = SDL_GetPerformanceCounter();
	if (nextFrameTime > now) SDL_Delay((Uint32)((nextFrameTime - now) * 1000 / freq));
	else if (now - nextFrameTime > freq / 4) nextFrameTime = now;   /* far behind: do not rush */
}

/* ------------------------------------------------------- hw.c callbacks */

void frontend_frame(void) {
	frameCount++;
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
	const char *romPath = "baserom.gba";
	int scale = 3;
	savePath = NULL;
	for (int i = 1; i < argc; i++) {
		if (!strcmp(argv[i], "--rom") && i + 1 < argc) romPath = argv[++i];
		else if (!strcmp(argv[i], "--save") && i + 1 < argc) savePath = argv[++i];
		else if (!strcmp(argv[i], "--scale") && i + 1 < argc) scale = atoi(argv[++i]);
		else if (!strcmp(argv[i], "--headless")) headless = 1;
		else if (!strcmp(argv[i], "--route") && i + 1 < argc) {
			route = fopen(argv[++i], "r");
			if (!route) { fprintf(stderr, "cannot open route %s\n", argv[i]); return 1; }
		} else if (!strcmp(argv[i], "--reads-per-line") && i + 1 < argc) hw_reads_per_line = atoi(argv[++i]);
		else { fprintf(stderr, "usage: mmz [--rom FILE] [--save FILE] [--scale N] [--headless --route FILE]\n"); return 1; }
	}
	if (headless && !route) { fprintf(stderr, "--headless needs --route\n"); return 1; }
	static char defaultSave[512];
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
	if (!headless) sdl_init(scale);

	/* the state the BIOS leaves, and the start-up code (crt0) */
	*(u16 *)0x04000130 = 0x3FF;    /* KEYINPUT */
	*(u16 *)0x04000088 = 0x200;    /* SOUNDBIAS */
	*(u16 *)0x04000000 = 0x80;     /* DISPCNT: forced blank */
	biosBus = 0xE129F000;
	budget = 0x7FFFFFFFFFFFFFFFL;
	hw_reset();
	tasks_reset();
	if (setjmp(failJmp)) {
		fprintf(stderr, "stopped: %s (frame %ld)\n", failReason, frameCount);
		save_flush();
		return 1;
	}
	*(u32 *)0x03007FFC = 0x080000FC;   /* IntrMain */
	for (;;) {
		cpu.r[13] = 0x03007DA0;
		cpu.r[14] = 0x080000F0;
		lift_tail = 0;
		lift_AgbMain();
	}
}
