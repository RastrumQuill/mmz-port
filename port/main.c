/* Mega Man Zero for PC: the lifted (and hand-written) game code, run
 * natively, with an SDL2 window, keyboard and gamepad, and sound.
 *
 *   mmz [--rom FILE] [--save FILE] [--scale N]
 *   mmz --headless --route FILE      play a tools/emu route without a
 *       [--wav FILE]                 window, writing its screenshots (as
 *                                    .ppm) for comparison (or .png) with mGBA, and
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
#include <process.h>
#include <direct.h>
#else
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#endif
#ifdef __linux__
#include <sys/personality.h>
#endif
#include <SDL.h>
#include "lift.h"
#include "pc.h"
#include "settings.h"
#include "ui.h"
#include "report.h"
#include "input.h"
#include "debug.h"

extern u32 romSize, biosBus;
extern jmp_buf failJmp;
extern char failReason[128];
extern int64_t budget;
void lift_AgbMain(void);

static int headless;
int ui_no_startup_dialogs;   /* --route: no dialog that waits for the player at start (ui.cpp) */
static FILE *wavFile;     /* --wav: headless sound output */
static u32 wavBytes, wavRate;
long frameCount;
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

static char **mainArgv;
static int frontendStarted;
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
#ifdef __linux__
		/* the kernel puts the heap anywhere in the first 1 GB, sometimes on
		   the GBA's addresses: start again once without randomisation (the
		   heap then begins right after the program, below them) */
		if (errno == EEXIST && !getenv("MMZ_RELAUNCHED") && personality(0xFFFFFFFF) != -1) {
			setenv("MMZ_RELAUNCHED", "1", 1);
			personality(personality(0xFFFFFFFF) | ADDR_NO_RANDOMIZE);
			execv("/proc/self/exe", mainArgv);
		}
#endif
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
	/* also: MMZ_ROM, and baserom.gba in the folders above the game (a build in the source tree) */
	if (getenv("MMZ_ROM") && is_game_rom(getenv("MMZ_ROM"))) return getenv("MMZ_ROM");
	base = SDL_GetBasePath();
	for (int up = 1; up <= 3 && base; up++) {
		char dots[16] = "";
		for (int k = 0; k < up; k++) strcat(dots, "../");
		snprintf(p, sizeof p, "%s%sbaserom.gba", base, dots);
		if (is_game_rom(p)) { SDL_free(base); return p; }
	}
	SDL_free(base);
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

u32 romCrc;   /* (the gap fill file is for one ROM) */
static u32 png_crc(u32 c, const unsigned char *b, size_t n);
static void load_rom(const char *path) {
	FILE *f = fopen(path, "rb");
	if (!f) fatal("Cannot open the ROM %s.", path);
	fseek(f, 0, SEEK_END);
	romSize = ftell(f);
	rewind(f);
	u8 *rom = map_at(0x08000000, (romSize + 0xFFF) & ~0xFFFu);
	if (fread(rom, 1, romSize, f) != romSize) fatal("Cannot read the ROM %s.", path);
	fclose(f);
	romCrc = ~png_crc(0xFFFFFFFFu, rom, romSize);
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
static char routeCmd[64], routeArg1[256], routeArg2[64], routeArg3[256], routeLine[512];

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

/* a picture file: PNG when the name ends in .png, else PPM */
static u32 crc_table[256];
static u32 png_crc(u32 c, const unsigned char *b, size_t n) {
	if (!crc_table[1])
		for (u32 i = 0; i < 256; i++) {
			u32 x = i;
			for (int k = 0; k < 8; k++) x = x & 1 ? 0xEDB88320u ^ (x >> 1) : x >> 1;
			crc_table[i] = x;
		}
	for (size_t i = 0; i < n; i++) c = crc_table[(c ^ b[i]) & 0xFF] ^ (c >> 8);
	return c;
}
static void png_chunk(FILE *f, const char *type, const unsigned char *d, size_t n) {
	unsigned char h[8] = { n >> 24, n >> 16, n >> 8, n, type[0], type[1], type[2], type[3] };
	fwrite(h, 1, 8, f);
	if (n) fwrite(d, 1, n, f);
	u32 c = ~png_crc(png_crc(0xFFFFFFFFu, h + 4, 4), d, n);
	unsigned char t[4] = { c >> 24, c >> 16, c >> 8, c };
	fwrite(t, 1, 4, f);
}
static void write_image(const char *path, const u32 *src, int w, int h) {
	FILE *f = fopen(path, "wb");
	if (!f) { fprintf(stderr, "cannot write %s\n", path); return; }
	const char *dot = strrchr(path, '.');
	if (!dot || strcmp(dot, ".png")) {
		fprintf(f, "P6\n%d %d\n255\n", w, h);
		for (int i = 0; i < w * h; i++) { u32 c = src[i]; fputc(c >> 16, f); fputc(c >> 8, f); fputc(c, f); }
		fclose(f);
		return;
	}
	/* uncompressed deflate (stored blocks): no zlib needed */
	size_t raw = (size_t)h * (1 + 3 * w), blocks = (raw + 65534) / 65535;
	size_t zn = 2 + raw + 5 * blocks + 4;
	unsigned char *z = malloc(zn), *r = malloc(raw), *q = z;
	for (int y = 0; y < h; y++) {
		unsigned char *row = r + (size_t)y * (1 + 3 * w);
		row[0] = 0;
		for (int x = 0; x < w; x++) { u32 c = src[y * w + x]; row[1 + 3 * x] = c >> 16; row[2 + 3 * x] = c >> 8; row[3 + 3 * x] = c; }
	}
	*q++ = 0x78; *q++ = 0x01;
	u32 a = 1, b = 0;
	for (size_t off = 0; off < raw;) {
		size_t n = raw - off > 65535 ? 65535 : raw - off;
		*q++ = off + n == raw;
		*q++ = n; *q++ = n >> 8; *q++ = ~n; *q++ = ~n >> 8;
		memcpy(q, r + off, n);
		for (size_t i = 0; i < n; i++) { a = (a + r[off + i]) % 65521; b = (b + a) % 65521; }
		q += n; off += n;
	}
	u32 ad = b << 16 | a;
	*q++ = ad >> 24; *q++ = ad >> 16; *q++ = ad >> 8; *q++ = ad;
	static const unsigned char sig[8] = { 0x89, 'P', 'N', 'G', '\r', '\n', 0x1A, '\n' };
	fwrite(sig, 1, 8, f);
	unsigned char ih[13] = { w >> 24, w >> 16, w >> 8, w, h >> 24, h >> 16, h >> 8, h, 8, 2, 0, 0, 0 };
	png_chunk(f, "IHDR", ih, 13);
	png_chunk(f, "IDAT", z, q - z);
	png_chunk(f, "IEND", NULL, 0);
	fclose(f);
	free(z);
	free(r);
}

static void write_ppm(const char *path) {
	/* the zoomed-out view when there is one, else the GBA picture */
	const u32 *src = view_active ? view_frame : ppu_frame;
	int w = view_active ? view_w : SCREEN_W, h = view_active ? view_h : SCREEN_H;
	write_image(path, src, w, h);
	/* MMZ_SHOT_GBA: the GBA picture too, as NAME.gba.EXT (to compare) */
	char p[300];
	snprintf(p, sizeof p, "%s", path);
	char *dot = strrchr(p, '.');
	if (view_active && getenv("MMZ_SHOT_GBA") && dot) {
		char ext[16];
		snprintf(ext, sizeof ext, "%s", dot);
		snprintf(dot, sizeof p - (dot - p), ".gba%s", ext);
		write_image(p, ppu_frame, SCREEN_W, SCREEN_H);
	}
}

static long routeDelay;   /* frames a warp took: later lines wait for it */
/* viewcheck: does the wide view agree with the GBA picture where the GBA
   screen sits in it? The view normally draws that part from video memory;
   for the check it draws it from the level data, as it draws the rest, so
   a wrong room or tile there shows. Only the backgrounds are compared: pixels whose top
   two layers (ppu_layers) include the HUD (BG0, which the view moves to its
   edges) or sprites (the view draws its own, from more objects) are left
   out. Prints the frame, the bookmark of here and the share that differs;
   with a file name, a PNG of the GBA picture, the view's part and the
   differences (red; grey: left out). Returns the share in percent (-1: no
   wide view). */
char dbg_check_result[400];   /* the last check's summary (Debug window) */
static double view_check(const char *png, int print) {
	if (!view_active || !view_frame) return -1;
	int ox, oy;
	view_gba_origin(&ox, &oy);
	static u32 out[SCREEN_W * SCREEN_H * 3];
	long n = 0, bad = 0;
	for (int y = 0; y < SCREEN_H; y++)
		for (int x = 0; x < SCREEN_W; x++) {
			int vx = x + ox, vy = y + oy, i = y * SCREEN_W + x;
			u32 g = ppu_frame[i], v = vx >= 0 && vx < view_w && vy >= 0 && vy < view_h ? view_frame[(size_t)vy * view_w + vx] : 0;
			int top = ppu_layers[i] & 15, second = ppu_layers[i] >> 4;
			int skip = top == 0 || top == 4 || second == 0 || second == 4;
			out[i] = g; out[i + SCREEN_W * SCREEN_H] = v;
			u32 d = skip ? 0x404040 : g != v ? 0xFF0000 : (g >> 2) & 0x3F3F3F;
			out[i + 2 * SCREEN_W * SCREEN_H] = d;
			if (!skip) { n++; bad += g != v; }
		}
	double pct = n ? 100.0 * bad / n : 0;
	if (print) {
		struct Location l;
		char b[160];
		loc_now(&l);
		loc_format(&l, b, sizeof b);
		fprintf(stderr, "viewcheck: frame %ld %s differ %.2f%% (%ld of %ld pixels compared, GBA at %d,%d in %dx%d%s)\n", frameCount, b, pct, bad, n, ox, oy, view_w, view_h,
		        view_gba_pasted ? ", GBA picture pasted: not drawable" : "");
	}
	if (png && *png) write_image(png, out, SCREEN_W, SCREEN_H * 3);
	return pct;
}

/* viewprobe: ground truth for the whole wide view, not only the GBA
   screen's part. The view is taken once (from the level data, as
   viewcheck); then the game's own camera (gCamera, put in mode 1 at speed 0:
   it stays where it is put) is moved over the view, a GBA screen at a time, and
   after a few frames (the game streams the tiles and loads the graphics
   sets for the new place) the GBA picture there is compared with what the
   view drew. Only backgrounds count: pixels whose top two layers include
   the HUD or a sprite, on either side, are left out. Prints each probe, and
   with a prefix writes PREFIX_N.png (the GBA's picture, the view's part,
   the differences, stacked) for probes that differ and PREFIX_map.png (the
   view: red where it differs, as drawn where the GBA agreed, blue
   where it differs but the camera never goes there in play (view.c's
   shown map: the GBA's picture there is not what the game shows), dark
   where nothing was compared). The camera is put back afterwards, but enemies and
   the like have seen the camera move: meant for headless routes that end
   after it (or a later warp). */
#define GCAMERA 0x02022C44u
#define CAMERA_MODES 0x0829FF8Cu
static struct {
	int on, wait, i, n, w, h, flagged, mask;
	s32 gx, gy;                 /* the view's top-left, global pixels */
	u32 *frame; u8 *lay; u8 *seen;   /* seen: 1 agreed, 2 differs, 3 differs where the camera never goes */
	u8 *shown;                  /* the view's shown map (view.c): the GBA camera can be there in play */
	u8 *anim;                   /* view pixels that changed over a second of takes (animated tiles, moving lights): left out */
	int snap;                   /* frames until the second take */
	u32 gba[SCREEN_W * SCREEN_H];   /* the GBA picture a few frames before the compare (pixels that change: left out) */
	s32 px[256], py[256];       /* probe camera centres */
	u8 cam[0x6C];
	char prefix[256];
	double thresh;
} probe;

static void probe_start(const char *prefix) {
	if (!view_active || !view_frame || !view_layers || view_gba_pasted) { fprintf(stderr, "viewprobe: frame %ld: no wide view drawn from the level data\n", frameCount); return; }
	int ox, oy;
	view_gba_origin(&ox, &oy);
	probe.w = view_w; probe.h = view_h;
	size_t n = (size_t)view_w * view_h;
	probe.frame = realloc(probe.frame, n * 4); probe.lay = realloc(probe.lay, n); probe.seen = realloc(probe.seen, n);
	memcpy(probe.frame, view_frame, n * 4); memcpy(probe.lay, view_layers, n); memset(probe.seen, 0, n);
	probe.shown = realloc(probe.shown, n);
	int gx, gy;
	view_gba_global(&gx, &gy);
	probe.gx = gx - ox;
	probe.gy = gy - oy;
	memcpy(probe.cam, (void *)(uintptr_t)GCAMERA, sizeof probe.cam);
	{ extern int view_shown_at(int, int);
	  for (int y = 0; y < view_h; y++) for (int x = 0; x < view_w; x++) probe.shown[(size_t)y * view_w + x] = view_shown_at(probe.gx + x, probe.gy + y); }
	probe.n = 0;
	{ extern int view_stage_mask; probe.mask = view_stage_mask; }
	/* GBA screens over the view, overlapping a little */
	int skipped = 0;
	int nx = (view_w - SCREEN_W + 199) / 200 + 1, ny = (view_h - SCREEN_H + 129) / 130 + 1;
	for (int j = 0; j < ny; j++)
		for (int i = 0; i < nx && probe.n < 256; i++) {
			int x = nx > 1 ? i * (view_w - SCREEN_W) / (nx - 1) : (view_w - SCREEN_W) / 2;
			int y = ny > 1 ? j * (view_h - SCREEN_H) / (ny - 1) : (view_h - SCREEN_H) / 2;
			int cx = probe.gx + x + 120, cy = probe.gy + y + 80;
			/* where the game's own camera rules let it be (not in a level-15
			   chunk, pulled back from level steps): forced further, the GBA
			   draws what it never shows */
			extern int view_camera_settle(int *, int *);
			if (!view_camera_settle(&cx, &cy)) { skipped++; continue; }
			int dup = 0;
			for (int k = 0; k < probe.n; k++) dup |= probe.px[k] == cx && probe.py[k] == cy;
			if (dup) continue;
			probe.px[probe.n] = cx; probe.py[probe.n] = cy; probe.n++;
		}
	snprintf(probe.prefix, sizeof probe.prefix, "%s", prefix ? prefix : "");
	probe.thresh = getenv("MMZ_PROBE_PCT") ? atof(getenv("MMZ_PROBE_PCT")) : 0.5;
	probe.anim = realloc(probe.anim, n); memset(probe.anim, 0, n);
	probe.i = 0; probe.wait = 0; probe.flagged = 0; probe.on = 1; probe.snap = 60;
	struct Location l; char b[160]; loc_now(&l); loc_format(&l, b, sizeof b);
	fprintf(stderr, "viewprobe: frame %ld %s view %dx%d at %d,%d: %d probes (%d where the camera cannot be)\n", frameCount, b, view_w, view_h, probe.gx, probe.gy, probe.n, skipped);
}

static void probe_put(s32 x, s32 y) {
	u8 *c = (u8 *)(uintptr_t)GCAMERA;
	c[0x18] = 1;                                    /* mode 1 (forced scroll) at speed 0: stays, and the area follows it (not in mode 0) */
	*(u32 *)(c + 0x14) = ((const u32 *)(uintptr_t)CAMERA_MODES)[1];
	c[0x19] = 0;                                    /* CHASE_JUMP */
	*(s32 *)(c + 0x40) = *(s32 *)(c + 0x44) = 0;
	*(s32 *)(c + 0x30) = *(s32 *)(c + 0x38) = x << 8;
	*(s32 *)(c + 0x34) = *(s32 *)(c + 0x3C) = y << 8;
}

static void probe_compare(void) {
	int gx, gy;
	view_gba_global(&gx, &gy);   /* (the view is drawn every frame: where the GBA screen is now) */
	s32 sx = gx - probe.gx, sy = gy - probe.gy;
	static u32 out[SCREEN_W * SCREEN_H * 3];
	long n = 0, bad = 0, hidden = 0, filled = 0;
	for (int y = 0; y < SCREEN_H; y++)
		for (int x = 0; x < SCREEN_W; x++) {
			int vx = x + sx, vy = y + sy, i = y * SCREEN_W + x;
			int in = vx >= 0 && vy >= 0 && vx < probe.w && vy < probe.h;
			size_t k = in ? (size_t)vy * probe.w + vx : 0;
			u32 g = ppu_frame[i], v = in ? probe.frame[k] : 0;
			int t = ppu_layers[i] & 15, s2 = ppu_layers[i] >> 4;
			/* only stage layers on top on both sides (backgrounds behind move at
			   their own speed: they depend on where the camera is) */
			int skip = !in || t > 3 || !(probe.mask >> t & 1) || s2 == 0 || s2 == 4 || probe.gba[i] != g || (in && probe.anim[k]);
			out[i] = g; out[i + SCREEN_W * SCREEN_H] = v;
			if (in && !skip && (probe.lay[k] & 8)) {   /* the gap fill's: the GBA has nothing there, by design (UNSEEN.md) */
				out[i + 2 * SCREEN_W * SCREEN_H] = 0x206020;
				filled++;
				continue;
			}
			if (in) { int vt = probe.lay[k] & 7, vs = probe.lay[k] >> 4; if (vt > 3 || !(probe.mask >> vt & 1) || vs == 0 || vs == 4) skip = 1; }
			out[i + 2 * SCREEN_W * SCREEN_H] = skip ? 0x404040 : g != v ? 0xFF0000 : (g >> 2) & 0x3F3F3F;
			if (skip) continue;
			if (!probe.shown[k]) {   /* the camera never shows it in play: the GBA's picture there is not what the game shows */
				out[i + 2 * SCREEN_W * SCREEN_H] = g != v ? 0x0060FF : 0x202060;
				hidden++;
				if (g != v && probe.seen[k] != 2) probe.seen[k] = 3;
				continue;
			}
			n++;
			if (g != v) { bad++; probe.seen[k] = 2; }
			else if (!probe.seen[k]) probe.seen[k] = 1;
		}
	double pct = n ? 100.0 * bad / n : 0;
	int flag = pct >= probe.thresh;
	probe.flagged += flag;
	fprintf(stderr, "viewprobe: probe %d camera %d,%d (view %d,%d) differ %.2f%% (%ld of %ld; %ld never shown in play, %ld gap fill)%s\n", probe.i, *(s32 *)0x02005200 >> 8, *(s32 *)0x02005204 >> 8,
	        sx, sy, pct, bad, n, hidden, filled, flag ? " FLAG" : "");
	if (flag && probe.prefix[0]) { char p[300]; snprintf(p, sizeof p, "%s_%d.png", probe.prefix, probe.i); write_image(p, out, SCREEN_W, SCREEN_H * 3); }
}

static void probe_step(void) {
	if (!probe.on) return;
	if (probe.snap > 0) {   /* more takes of the view, every 4 frames for a second, the camera not moved yet */
		probe.snap--;
		if (probe.snap % 4) return;
		int gx, gy, ox, oy;
		view_gba_global(&gx, &gy); view_gba_origin(&ox, &oy);
		if (view_active && view_frame && view_w == probe.w && view_h == probe.h && gx - ox == probe.gx && gy - oy == probe.gy)
			for (size_t k = 0; k < (size_t)probe.w * probe.h; k++) probe.anim[k] |= view_frame[k] != probe.frame[k];
		else if (!probe.snap) fprintf(stderr, "viewprobe: the view moved between its takes: animated pixels not all known\n");
		if (probe.snap) return;
	}
	if (probe.wait > 0) {
		probe.wait--;
		probe_put(probe.px[probe.i], probe.py[probe.i]);
		if (probe.wait == 6) memcpy(probe.gba, ppu_frame, sizeof probe.gba);
		if (probe.wait == 0) { probe_compare(); probe.i++; }
		return;
	}
	if (probe.i < probe.n) { probe_put(probe.px[probe.i], probe.py[probe.i]); probe.wait = 12; return; }
	memcpy((void *)(uintptr_t)GCAMERA, probe.cam, sizeof probe.cam);
	probe.on = 0;
	view_level_only = getenv("MMZ_VIEWCHECK") != NULL;
	long agree = 0, differ = 0, unseen = 0, hid = 0;
	size_t N = (size_t)probe.w * probe.h;
	for (size_t k = 0; k < N; k++) { agree += probe.seen[k] == 1; differ += probe.seen[k] == 2; hid += probe.seen[k] == 3; unseen += !probe.seen[k]; }
	snprintf(dbg_check_result, sizeof dbg_check_result, "viewprobe: done: %d of %d probes flagged; view pixels: %ld agree, %ld differ, %ld differ where the camera never goes (not drawn: right), %ld not compared", probe.flagged, probe.n, agree, differ, hid, unseen);
	fprintf(stderr, "%s\n", dbg_check_result);
	if (probe.prefix[0]) {
		u32 *m = malloc(N * 4);
		for (size_t k = 0; k < N; k++) { u32 c = probe.frame[k]; m[k] = probe.seen[k] == 2 ? 0xFF0000 : probe.seen[k] == 3 ? 0x0060FF : probe.seen[k] == 1 ? c : (c >> 2) & 0x3F3F3F; }
		char p[300]; snprintf(p, sizeof p, "%s_map.png", probe.prefix); write_image(p, m, probe.w, probe.h);
		free(m);
	}
}

static char viewCheckPng[256];
static int probeIn;   /* frames until the route's viewprobe starts */
static char probePrefix[256];
static int viewCheckIn;   /* frames until the route's viewcheck */

/* the Debug window's checks: 0 viewcheck, 1 viewprobe, 2 viewchunks; the
   pictures go to debug/ next to the program */
void dbg_run_check(int which) {
	char dir[600];
	char *base = SDL_GetBasePath();
	snprintf(dir, sizeof dir, "%sdebug", base ? base : "");
	SDL_free(base);
#ifdef _WIN32
	_mkdir(dir);
#else
	mkdir(dir, 0755);
#endif
	snprintf(dbg_check_result, sizeof dbg_check_result, "running...");
	if (which == 0) { snprintf(viewCheckPng, sizeof viewCheckPng, "%s/viewcheck_%ld.png", dir, frameCount); viewCheckIn = 2; view_level_only = 1; }
	else if (which == 1) { snprintf(probePrefix, sizeof probePrefix, "%s/viewprobe_%ld", dir, frameCount); probeIn = 2; view_level_only = 1; }
	else { void view_chunk_report(void); view_chunk_report(); }
}

static void route_step(void) {
	if (warp_active()) { routeDelay++; return; }
	for (;;) {
		if (routeFrame < 0) {
			char line[512];
			if (!fgets(line, sizeof line, route)) { save_flush(); exit(0); }
			if (dbgo.logLag) { extern long sprite_commits; fprintf(stderr, "lag: frame %ld game frames %ld\n", frameCount, sprite_commits); }
			routeArg1[0] = routeArg2[0] = routeArg3[0] = 0;
			snprintf(routeLine, sizeof routeLine, "%s", line);
			if (line[0] == '#' || sscanf(line, "%ld %63s %255s %63s %255s", &routeFrame, routeCmd, routeArg1, routeArg2, routeArg3) < 2) {
				routeFrame = -1;
				continue;
			}
		}
		if (routeFrame + routeDelay > frameCount) return;
		if (!strcmp(routeCmd, "shot")) write_ppm(routeArg1);
		else if (!strcmp(routeCmd, "end")) { save_flush(); exit(0); }
		else if (!strcmp(routeCmd, "poke")) *(u8 *)(uintptr_t)strtoul(routeArg1, 0, 0) = strtoul(routeArg2, 0, 0);
		else if (!strcmp(routeCmd, "ff")) debug.fastForward = atoi(routeArg1);   /* ff 1 / ff 0: Tab held or not */
		else if (!strcmp(routeCmd, "quickreport")) ui_quick_report();   /* testing: as if F9 */
		else if (!strcmp(routeCmd, "report")) { report_snapshot(); const char *z = report_write(REPORT_PROBLEM, routeArg1); fprintf(stderr, "report: %s\n", z ? z : "(failed)"); if (getenv("MMZ_PRINT_URL")) for (int t = 0; t < 4; t++) { char h[300]; report_share(t, REPORT_PROBLEM, routeArg1, z, h, sizeof h); } }   /* testing: as if F12 */
		else if (!strcmp(routeCmd, "warp")) {   /* warp mmz:... (a bookmark): from the title to there */
			struct Location l;
			if (loc_parse(routeLine, &l)) warp_start(&l);
			else fprintf(stderr, "route: not a bookmark: %s", routeLine);
		}
		else if (!strcmp(routeCmd, "cheat")) {   /* cheat invincible|noenemies 1|0 (Debug window toggles) */
			int on = atoi(routeArg2);
			if (!strcmp(routeArg1, "invincible")) cheat_invincible = on;
			else if (!strcmp(routeArg1, "noenemies")) cheat_no_enemies = on;
			else if (!strcmp(routeArg1, "inflife")) dbgo.infLife = on;
		}
		else if (!strcmp(routeCmd, "teleport")) { if (!teleport_to(atoi(routeArg1), atoi(routeArg2))) fprintf(stderr, "teleport: %s,%s is not open and reached\n", routeArg1, routeArg2); }   /* teleport X Y (global pixels) */
		else if (!strcmp(routeCmd, "life")) zero_set_hp(atoi(routeArg1));   /* life N: set Zero's life (as if hurt) */
		else if (!strcmp(routeCmd, "viewchunks")) { void view_chunk_report(void); view_chunk_report(); }   /* viewchunks: static checks of the view's chunks */
		else if (!strcmp(routeCmd, "viewprobe")) {   /* viewprobe [PREFIX]: the wide view against the GBA camera moved over it */
			view_level_only = 1;
			probeIn = 2;
			snprintf(probePrefix, sizeof probePrefix, "%s", routeArg1);
		}
		else if (!strcmp(routeCmd, "viewcheck")) {   /* viewcheck [DIFF.png]: the wide view against the GBA picture (in 2 frames) */
			snprintf(viewCheckPng, sizeof viewCheckPng, "%s", routeArg1);
			viewCheckIn = 2;
			view_level_only = 1;
		}
		else if (!strcmp(routeCmd, "where")) {   /* where: the bookmark of here, on stderr */
			struct Location l;
			char b[160];
			loc_now(&l);
			loc_format(&l, b, sizeof b);
			fprintf(stderr, "where: frame %ld %s life %d\n", frameCount, b, zero_hp());
		}
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

/* --skip-intro: fast-forward with Start / A pressed now and then, through
   the title, menus and cutscenes, until a second of play (a stage with no
   cutscene running) */
static int skipIntro;
static void skip_intro_step(void) {
	static int stable;
	stable = view_gameplay ? stable + 1 : 0;
	if (dbgo.logSkip && frameCount % 300 == 0)
		fprintf(stderr, "skip: frame %ld mode %02X event %04X gameplay %d\n", frameCount, *(u8 *)0x020236E1, *(u16 *)0x02022B6E, view_gameplay);
	if (stable >= 60) {
		fprintf(stderr, "skip-intro: playing from frame %ld\n", frameCount);
		if (getenv("MMZ_SKIPSHOT")) write_ppm(getenv("MMZ_SKIPSHOT"));
		skipIntro = 0; debug.fastForward = 0; keys = 0;
		return;
	}
	debug.fastForward = 1;
	int t = frameCount % 40;
	keys = t < 4 ? (frameCount < 2400 && frameCount % 80 < 40 ? 1 << 3 : 1 << 0) : 0;   /* Start (title), else A */
}

static void sdl_frame(void) {
	SDL_Texture *shown = frame_texture();
	int ww, wh;
	SDL_GetRendererOutputSize(renderer, &ww, &wh);
	settings_view_size(ww, wh, &view_w, &view_h);   /* (used from the next frame) */
	view_fit_apply(&view_w, &view_h);                /* small rooms: the view fits them */
	view_hud_edges = settings.hudEdges;
	hw_cpu_speed = settings.cpuSpeed < 100 ? 100 : settings.cpuSpeed > 1600 ? 1600 : settings.cpuSpeed;
	sdl_events();
	/* paused (or in the settings): the game waits here, at the frame's end */
	while ((debug.paused && !debug.step) || ui_pauses_game()) {
		ui_present(shown);
		SDL_Delay(16);
		sdl_events();
		nextFrameTime = SDL_GetPerformanceCounter();
	}
	if (debug.paused && debug.step) debug.step--;
	if (!route) keys = read_buttons();   /* a route (--route) drives the buttons: held until its next line */
	if (skipIntro) skip_intro_step();
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

/* The log (log = 1 in mmz.ini, or FRAMELOG): frames that took long in real
   time, and stretches where the game finished no frames of its own. */
static FILE *logFile;
static void frame_log(void) {
	static int on = -1;
	static Uint64 last;
	static long lastCommits, quiet;
	extern long sprite_commits;
	if (on < 0) {
		on = settings.log || getenv("FRAMELOG");
		if (settings.log) {
			char p[600], *base = SDL_GetBasePath();
			snprintf(p, sizeof p, "%smmz.log", base ? base : "");
			SDL_free(base);
			logFile = fopen(p, "w");
		}
		if (!logFile) logFile = stderr;
		if (on) fprintf(logFile, "mmz log: view %s %dx%d, cpu %d%%, scale %d, fullscreen %d, threads %d\n",
		                kViewNames[settings.viewMode], view_w, view_h, settings.cpuSpeed, settings.scale, settings.fullscreen, SDL_GetCPUCount());
	}
	Uint64 now = SDL_GetPerformanceCounter();
	double ms = last ? (now - last) * 1000.0 / SDL_GetPerformanceFrequency() : 0;
	last = now;
	u8 mode = *(u8 *)0x020236E1;
	u16 event = *(u16 *)0x02022B6E;
	if (ms > 100) report_note("stall: frame %ld took %.0f ms (cpu %d%%, ff %d)", frameCount, ms, hw_cpu_speed, debug.fastForward);
	if (on && ms > 100) fprintf(logFile, "stall: frame %ld took %.0f ms (mode %02X event %04X ff %d cpu %d%%)\n", frameCount, ms, mode, event, debug.fastForward, hw_cpu_speed);
	/* the game finishing no frames for 2 seconds while the window runs */
	quiet = sprite_commits == lastCommits ? quiet + 1 : 0;
	lastCommits = sprite_commits;
	if (quiet == 120) report_note("game stuck: no frames finished since frame %ld (mode %02X event %04X)", frameCount - 120, mode, event);
	if (on && quiet == 120) fprintf(logFile, "game stuck: no frames finished since frame %ld (mode %02X event %04X cpu %d%%)\n", frameCount - 120, mode, event, hw_cpu_speed);
	if (frameCount % 600 == 0) report_note("frame %ld mode %02X event %04X view %dx%d cpu %d%%", frameCount, mode, event, view_w, view_h, hw_cpu_speed);
	if (on && frameCount % 600 == 0) fprintf(logFile, "frame %ld mode %02X event %04X view %dx%d cpu %d%% ff %d\n", frameCount, mode, event, view_w, view_h, hw_cpu_speed, debug.fastForward);
	if (on) fflush(logFile);
}

void frontend_frame(void) {
	frameCount++;
	ui_game_frame(frameCount);
	if (headless && wavFile) wav_write();
	if (headless && getenv("MMZ_FILLSHOT")) {   /* testing: the view after entering a filled area */
		extern int fill_shot_in; extern u32 fill_shot_key;
		if (fill_shot_in > 0 && --fill_shot_in == 0) {
			char p[400]; snprintf(p, sizeof p, "%s/%08x_%ld.ppm", getenv("MMZ_FILLSHOT"), fill_shot_key, frameCount);
			write_ppm(p);
		}
	}
	if (headless) {
		route_step();
		if (getenv("MMZ_HEADLESS_FIT")) {   /* testing: the fit / crop sizes as in the window (after the shots: they use this frame's size) */
			static int aw, ah;
			if (!aw) { aw = view_w; ah = view_h; }
			view_w = aw; view_h = ah;
			view_fit_apply(&view_w, &view_h);
		}
	}
	else {
		sdl_frame();
		if (route) route_step();   /* testing: scripted input in the window too */
		frame_log();
	}
	if (probeIn && --probeIn == 0) probe_start(probePrefix);
	else probe_step();
	if (viewCheckIn && --viewCheckIn == 0) {
		double pct = view_check(viewCheckPng[0] ? viewCheckPng : NULL, 1);
		if (pct < 0) snprintf(dbg_check_result, sizeof dbg_check_result, "viewcheck: frame %ld: no wide view", frameCount);
		else snprintf(dbg_check_result, sizeof dbg_check_result, "viewcheck: frame %ld: %.2f%% of the GBA screen differs%s%s", frameCount, pct, viewCheckPng[0] ? "; " : "", viewCheckPng);
		if (pct < 0) fprintf(stderr, "%s\n", dbg_check_result);
		view_level_only = getenv("MMZ_VIEWCHECK") != NULL;
	}
	if (getenv("MMZ_VIEWCHECK") && !warp_active()) {
		view_level_only = 1;   /* every frame: print when at least that share (percent) differs */
		static long lastPrint = -1000;
		double pct = view_check(NULL, 0);
		if (pct >= atof(getenv("MMZ_VIEWCHECK")) && pct > 0 && frameCount - lastPrint >= 30) { view_check(NULL, 1); lastPrint = frameCount; }
	}
	warp_step(&keys);   /* a warp (--warp, route, Debug window) holds the buttons until it is there */
	cheats_frame();
	if (debug.pauseAt && frameCount == debug.pauseAt) debug.paused = 1;
	report_input(frameCount, keys);   /* for problem reports: the buttons of every frame */
	/* hand-written C reads the register directly */
	*(u16 *)0x04000130 = frontend_keys();
	if (frameCount % 60 == 0) save_flush();
}

u16 frontend_keys(void) {
	return 0x3FF & ~keys;
}

/* --------------------------------------------------------------- start */

/* Debug window, Go on a bookmark: start the game again with --warp, so the
   warp begins from the title like a fresh start (debug.c) */
void frontend_restart_warp(const char *bookmark) {
	if (!frontendStarted) return;
	save_flush();
	settings_save();
	static char *args[64];
	int n = 0;
	for (int i = 0; mainArgv[i] && n < 60; i++) {
		if (!strcmp(mainArgv[i], "--warp") && mainArgv[i + 1]) { i++; continue; }
		args[n++] = mainArgv[i];
	}
	static char bm[200];
	snprintf(bm, sizeof bm, "%s", bookmark);
	args[n++] = "--warp";
#ifdef _WIN32
	/* (the argument has spaces) */
	static char quoted[210];
	snprintf(quoted, sizeof quoted, "\"%s\"", bm);
	args[n++] = quoted;
	args[n] = NULL;
	SetEnvironmentVariableA("MMZ_RELAUNCHED", NULL);
	char exe[MAX_PATH];
	GetModuleFileNameA(NULL, exe, MAX_PATH);
	_execv(exe, (const char *const *)args);
#else
	args[n++] = bm;
	args[n] = NULL;
	unsetenv("MMZ_RELAUNCHED");
	execv("/proc/self/exe", args);
	execv(mainArgv[0], args);
#endif
	fprintf(stderr, "cannot start again for the warp\n");
}


/* ------------------------------------------------------------ fill generator
 *
 * mmz --gen-fills: the wide view's gap fill (view.c) is worked out here,
 * offline, never while the game plays: every mission's checkpoints and the
 * base are warped to by headless copies of the program (MMZ_FILLGEN=1, a few
 * at a time), each adding the areas it enters to its own part file, and the
 * parts are joined into fills.bin (next to mmz.ini, or MMZ_FILLS). The file
 * holds tile numbers from the player's ROM, so it is made on the player's
 * machine (a release build runs this once, at first start) and never shipped.
 */
const char *fill_patch_path(void);
int fills_ok(void) {
	FILE *f = fopen(fill_patch_path(), "rb");
	if (!f) return 0;
	char m[8]; u32 c = 0;
	int ok = fread(m, 1, 8, f) == 8 && !memcmp(m, "MMZFILL8", 8) && fread(&c, 4, 1, f) == 1 && c == romCrc;
	fclose(f);
	return ok;
}
volatile int fillGenDone, fillGenTotal, fillGenState;   /* state: 0 idle, 1 running, 2 done, 3 failed */
static int fillGenBg;   /* running in the UI's thread: no window calls */
static int gen_fills(const char *romPath, const char *config, int jobs);
static const char *gRomPath, *gConfig;
static int fill_gen_thread(void *u) {
	(void)u;
	fillGenBg = 1;
	int r = gen_fills(gRomPath, gConfig, 4);
	fillGenState = r ? 3 : 2;
	return r;
}
/* the Settings button: work fills.bin out in the background (child processes) */
void fill_gen_start(void) {
	if (fillGenState == 1 || !gRomPath) return;
	fillGenDone = 0; fillGenTotal = 0; fillGenState = 1;
	SDL_Thread *t = SDL_CreateThread(fill_gen_thread, "fillgen", NULL);
	if (t) SDL_DetachThread(t); else fillGenState = 3;
}
static int gen_fills(const char *romPath, const char *config, int jobs) {
	char self[1024];
#ifdef _WIN32
	GetModuleFileNameA(NULL, self, sizeof self);
#else
	ssize_t sl = readlink("/proc/self/exe", self, sizeof self - 1);
	if (sl > 0) self[sl] = 0; else snprintf(self, sizeof self, "%s", mainArgv[0]);
#endif
	static char places[80][48];
	int np = 0;
	snprintf(places[np++], 48, "mmz:base");
	for (int m = 1; m <= 17; m++) for (int c = 0; c < 4; c++) snprintf(places[np++], 48, "mmz:m%d a0 v0 cp%d", m, c);
	const char *out = fill_patch_path();
	char tmpl[1100];
	if (jobs < 1) jobs = 1;
	fprintf(stderr, "fills: working out the wide view's gap fill for %d places (%d at a time) into %s\n", np, jobs, out);
	int next = 0, done = 0, running = 0;
	fillGenTotal = np; fillGenDone = 0;
#ifdef _WIN32
	intptr_t pid[16]; int slot[16];
#else
	pid_t pid[16]; int slot[16];
#endif
	while (done < np) {
		while (running < jobs && next < np) {
			char route[1100], part[1100];
			snprintf(route, sizeof route, "%s.route%d", out, next);
			snprintf(part, sizeof part, "%s.part%d", out, next);
			remove(part);
			FILE *r = fopen(route, "w");
			if (!r) { fprintf(stderr, "fills: cannot write %s\n", route); return 1; }
			fprintf(r, "0 warp %s\n10 cheat invincible 1\n10 cheat noenemies 1\n400 end\n", places[next]);
			fclose(r);
			const char *args[16]; int na = 0;
			args[na++] = self; args[na++] = "--headless"; args[na++] = "--route"; args[na++] = route;
			args[na++] = "--view"; args[na++] = "x3"; args[na++] = "--rom"; args[na++] = romPath;
			if (config) { args[na++] = "--config"; args[na++] = config; }
			args[na] = NULL;
#ifdef _WIN32
			char ev[1200]; snprintf(ev, sizeof ev, "MMZ_FILLS=%s", part); _putenv(ev); _putenv("MMZ_FILLGEN=1");
			static char q[16][1200];   /* (arguments with spaces) */
			for (int i = 0; i < na; i++) { snprintf(q[i], sizeof q[i], "\"%s\"", args[i]); args[i] = q[i]; }
			intptr_t h = _spawnv(_P_NOWAIT, self, args);
			_putenv("MMZ_FILLS="); _putenv("MMZ_FILLGEN=");
			if (h == -1) { fprintf(stderr, "fills: cannot start %s\n", self); return 1; }
#else
			pid_t h = fork();
			if (h < 0) { perror("fork"); return 1; }
			if (!h) {
				setenv("MMZ_FILLS", part, 1); setenv("MMZ_FILLGEN", "1", 1);
				int dn = open("/dev/null", O_WRONLY); if (dn >= 0) { dup2(dn, 1); dup2(dn, 2); }
				execv(self, (char *const *)args); _exit(127);
			}
#endif
			pid[running] = h; slot[running] = next; running++; next++;
		}
		/* one finished */
#ifdef _WIN32
		int st_; _cwait(&st_, pid[0], 0); int w = 0;
#else
		int st_; pid_t wp = wait(&st_); int w = 0;
		while (w < running && pid[w] != wp) w++;
		if (w == running) continue;
#endif
		char route[1100]; snprintf(route, sizeof route, "%s.route%d", out, slot[w]); remove(route);
		pid[w] = pid[running - 1]; slot[w] = slot[running - 1]; running--; done++;
		fprintf(stderr, "fills: %d/%d\n", done, np);
		fillGenDone = done;
		char title[64]; snprintf(title, sizeof title, "Mega Man Zero: preparing the wide view %d/%d", done, np);
		if (!fillGenBg && SDL_WasInit(SDL_INIT_VIDEO) && SDL_GL_GetCurrentWindow()) SDL_SetWindowTitle(SDL_GL_GetCurrentWindow(), title);
	}
	/* join the parts */
	snprintf(tmpl, sizeof tmpl, "%s.new", out);
	FILE *o = fopen(tmpl, "wb");
	if (!o) { fprintf(stderr, "fills: cannot write %s\n", tmpl); return 1; }
	fwrite("MMZFILL8", 1, 8, o); fwrite(&romCrc, 4, 1, o);
	long recs = 0;
	for (int i = 0; i < np; i++) {
		char part[1100]; snprintf(part, sizeof part, "%s.part%d", out, i);
		FILE *f = fopen(part, "rb");
		if (!f) continue;
		char m[12];
		if (fread(m, 1, 12, f) == 12) { char b[65536]; size_t k; while ((k = fread(b, 1, sizeof b, f)) > 0) fwrite(b, 1, k, o); recs++; }
		fclose(f); remove(part);
	}
	fclose(o);
	remove(out);
	if (rename(tmpl, out)) { fprintf(stderr, "fills: cannot write %s\n", out); return 1; }
	fprintf(stderr, "fills: %s written (%ld places had areas to fill)\n", out, recs);
	return 0;
}

int main(int argc, char **argv) {
	mainArgv = argv;
	dbg_init_env();
	report_install_crash_handler();
	const char *romArg = NULL, *configArg = NULL, *viewArg = NULL, *warpArg = NULL;
	int scale = 0, cpuArg = 0, genFills = 0, genJobs = 0;
	savePath = NULL;
	for (int i = 1; i < argc; i++) {
		if (!strcmp(argv[i], "--rom") && i + 1 < argc) romArg = argv[++i];
		else if (!strcmp(argv[i], "--save") && i + 1 < argc) savePath = argv[++i];
		else if (!strcmp(argv[i], "--config") && i + 1 < argc) configArg = argv[++i];
		else if (!strcmp(argv[i], "--scale") && i + 1 < argc) scale = atoi(argv[++i]);
		else if (!strcmp(argv[i], "--headless")) headless = 1;
		else if (!strcmp(argv[i], "--gen-fills")) { genFills = 1; if (i + 1 < argc && argv[i + 1][0] >= '1' && argv[i + 1][0] <= '9') genJobs = atoi(argv[++i]); }
		else if (!strcmp(argv[i], "--skip-intro")) skipIntro = 1;
		else if (!strcmp(argv[i], "--warp") && i + 1 < argc) warpArg = argv[++i];
		else if (!strcmp(argv[i], "--pause-at") && i + 1 < argc) debug.pauseAt = atol(argv[++i]);
		else if (!strcmp(argv[i], "--cpu-speed") && i + 1 < argc) cpuArg = atoi(argv[++i]);
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
			ui_no_startup_dialogs = 1;
		}
		else {
			fprintf(stderr, "usage: mmz [--rom FILE] [--save FILE] [--config FILE] [--scale N] [--view MODE] [--cpu-speed PERCENT] [--skip-intro]\n"
			                "           [--warp \"mmz:m9 a2 cp1 x1234 y567\"] [--pause-at FRAME]\n"
			                "       mmz --headless --route FILE [--wav FILE] [--rom FILE] [--save FILE]\n"
			                "       mmz --gen-fills [JOBS] [--rom FILE] [--config FILE]   (the wide view's gap fill, offline)\n");
			return 1;
		}
	}
	if (headless && !route) { fprintf(stderr, "--headless needs --route\n"); return 1; }
	settings_load(configArg);
	bookmarks_load();
	if (warpArg) {
		struct Location l;
		if (!loc_parse(warpArg, &l)) { fprintf(stderr, "--warp: not a bookmark (mmz:m<mission> ...): %s\n", warpArg); return 1; }
		warp_start(&l);
		ui_no_startup_dialogs = 1;
	}
	if (getenv("WARPDEBUG")) warp_verbose = atoi(getenv("WARPDEBUG")) > 1 ? 2 : 1;
	if (scale > 0) settings.scale = scale;
	if (cpuArg > 0) settings.cpuSpeed = cpuArg;
	hw_cpu_speed = settings.cpuSpeed < 100 ? 100 : settings.cpuSpeed > 1600 ? 1600 : settings.cpuSpeed;
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
	if (genFills) return gen_fills(romPath, configArg, genJobs ? genJobs : 4);
	/* gap fill is off by default; with it on and no fills.bin, Settings offers to make it (never a blocking run at start) */
	gRomPath = romPath; gConfig = configArg;
	if (getenv("MMZ_FILLGEN")) settings.fillGaps = 1;   /* the generator's children work the WFC fill out, whatever mmz.ini says */
	save_load();
	report_boot_save(SRAM);
	if (!headless) sdl_init(settings.scale > 0 ? settings.scale : 3);
	frontendStarted = 1;

	/* the state the BIOS leaves, and the start-up code (crt0) */
	*(u16 *)0x04000130 = 0x3FF;    /* KEYINPUT */
	*(u16 *)0x04000088 = 0x200;    /* SOUNDBIAS */
	*(u16 *)0x04000000 = 0x80;     /* DISPCNT: forced blank */
	biosBus = 0xE129F000;
	budget = INT64_MAX;
	if (getenv("MMZ_CYCLE_SCALE")) hw_cycle_scale = atoi(getenv("MMZ_CYCLE_SCALE"));
	if (getenv("MMZ_FASTFORWARD")) debug.fastForward = 1;   /* testing: as if Tab were held */
	if (getenv("MMZ_OVERLAY")) debug.overlay = 1;   /* testing: the position overlay on */
	if (getenv("MMZ_LAYERS")) debug.layerMask = strtol(getenv("MMZ_LAYERS"), NULL, 0);   /* bits: BG0-BG3, OBJ */
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
