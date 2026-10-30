/* Problem reports: a crash, or the player pressing the report key (F12, or
 * "Report a problem" in the settings).
 *
 * Everything needed to see the problem again goes into one zip in reports/
 * next to the game:
 *   report.txt       the player's message, version, system, settings, where
 *                    the game was (frame, mode, event), the recent log
 *   inputs.route     every change of the buttons since start, as a route:
 *                    `mmz --route inputs.route --save save_at_start.sav`
 *                    plays the session again (with the settings in mmz.ini)
 *   save_at_start.sav  the save as it was when the game started
 *   screenshot.bmp   the picture when the report was opened
 *   state/*.bin      EWRAM, IWRAM, I/O, palette, VRAM, OAM at that moment
 *   mmz.ini, mmz.log the settings and the log, if there is one
 * Then the GitHub "new issue" page opens with the details filled in; the zip
 * is attached by dragging it in (GitHub cannot take files through the link).
 *
 * A crash writes the same zip from the crash handler and leaves a note, so
 * the next start offers to report it.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>
#include <signal.h>
#include "lift.h"
#include "pc.h"
#include "settings.h"
#include "report.h"
#include <SDL.h>
#ifdef _WIN32
#include <windows.h>
#include <direct.h>
#include <process.h>
#define mkdir_p(p) _mkdir(p)
#else
#include <sys/stat.h>
#include <unistd.h>
#define mkdir_p(p) mkdir(p, 0755)
#endif

#ifndef MMZ_VERSION
#define MMZ_VERSION "dev"
#endif
#define REPO "RastrumQuill/mmz-port"

extern long frameCount;

/* ------------------------------------------------------------ recording */

/* button changes since start: (frame, keys) */
static struct Change { long frame; int keys; } *changes;
static long nChanges, capChanges, lastKeys = -1;
static u8 bootSave[0x8000];
static int haveBootSave;

void report_boot_save(const u8 *sram) { memcpy(bootSave, sram, sizeof bootSave); haveBootSave = 1; }

void report_input(long frame, int keys) {
	if (keys == lastKeys) return;
	lastKeys = keys;
	if (nChanges == capChanges) {
		long cap = capChanges ? capChanges * 2 : 4096;
		if (cap > (1 << 24)) return;   /* ~5 days of button presses: stop recording */
		struct Change *c = realloc(changes, cap * sizeof *c);
		if (!c) return;
		changes = c;
		capChanges = cap;
	}
	changes[nChanges].frame = frame;
	changes[nChanges++].keys = keys;
}

/* the recent log, kept whether or not the log file is on */
#define NOTES 200
static char notes[NOTES][160];
static int noteHead, noteCount;
void report_note(const char *fmt, ...) {
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(notes[noteHead], sizeof notes[0], fmt, ap);
	va_end(ap);
	noteHead = (noteHead + 1) % NOTES;
	if (noteCount < NOTES) noteCount++;
}

/* ------------------------------------------------------------ snapshot */

/* taken when the report key is pressed (before the report window is drawn),
   so typing the message does not change what is reported */
static struct {
	int taken;
	long frame;
	u8 mode;
	u16 event;
	int w, h;
	u32 *pixels;
	u8 ewram[0x40000], iwram[0x8000], io[0x400], pal[0x400], vram[0x18000], oam[0x400];
} snap;

void report_snapshot(void) {
	const u32 *src = view_active ? view_frame : ppu_frame;
	int w = view_active ? view_w : SCREEN_W, h = view_active ? view_h : SCREEN_H;
	free(snap.pixels);
	snap.pixels = malloc((size_t)w * h * 4);
	if (snap.pixels) memcpy(snap.pixels, src, (size_t)w * h * 4);
	snap.w = w;
	snap.h = h;
	snap.frame = frameCount;
	snap.mode = *(u8 *)0x020236E1;
	snap.event = *(u16 *)0x02022B6E;
	memcpy(snap.ewram, (void *)0x02000000, sizeof snap.ewram);
	memcpy(snap.iwram, (void *)0x03000000, sizeof snap.iwram);
	memcpy(snap.io, (void *)0x04000000, sizeof snap.io);
	memcpy(snap.pal, (void *)0x05000000, sizeof snap.pal);
	memcpy(snap.vram, (void *)0x06000000, sizeof snap.vram);
	memcpy(snap.oam, (void *)0x07000000, sizeof snap.oam);
	snap.taken = 1;
}

/* ------------------------------------------------------------ zip (stored) */

static u32 crcTable[256];
static u32 crc32(const u8 *p, size_t n) {
	if (!crcTable[1])
		for (u32 i = 0; i < 256; i++) {
			u32 c = i;
			for (int k = 0; k < 8; k++) c = c & 1 ? 0xEDB88320 ^ (c >> 1) : c >> 1;
			crcTable[i] = c;
		}
	u32 c = 0xFFFFFFFF;
	while (n--) c = crcTable[(c ^ *p++) & 0xFF] ^ (c >> 8);
	return ~c;
}

#define MAXENTRIES 24
static struct { char name[64]; u32 crc, size, offset; } entries[MAXENTRIES];
static int nEntries;
static FILE *zf;

static void put16(u32 v) { fputc(v, zf); fputc(v >> 8, zf); }
static void put32(u32 v) { put16(v); put16(v >> 16); }

static void zip_add(const char *name, const void *data, size_t size) {
	if (!zf || nEntries == MAXENTRIES) return;
	size_t len = strlen(name);
	snprintf(entries[nEntries].name, sizeof entries[0].name, "%s", name);
	entries[nEntries].crc = crc32(data, size);
	entries[nEntries].size = (u32)size;
	entries[nEntries].offset = (u32)ftell(zf);
	put32(0x04034B50); put16(10); put16(0); put16(0); put16(0); put16(0x21);
	put32(entries[nEntries].crc); put32((u32)size); put32((u32)size); put16((u32)len); put16(0);
	fwrite(name, 1, len, zf);
	fwrite(data, 1, size, zf);
	nEntries++;
}

static void zip_finish(void) {
	u32 dir = (u32)ftell(zf);
	for (int i = 0; i < nEntries; i++) {
		size_t len = strlen(entries[i].name);
		put32(0x02014B50); put16(20); put16(10); put16(0); put16(0); put16(0); put16(0x21);
		put32(entries[i].crc); put32(entries[i].size); put32(entries[i].size);
		put16((u32)len); put16(0); put16(0); put16(0); put16(0); put32(0); put32(entries[i].offset);
		fwrite(entries[i].name, 1, len, zf);
	}
	u32 dirSize = (u32)ftell(zf) - dir;
	put32(0x06054B50); put16(0); put16(0); put16(nEntries); put16(nEntries); put32(dirSize); put32(dir); put16(0);
	fclose(zf);
	zf = NULL;
}

/* a growing text buffer */
static char *tb;
static size_t tbLen, tbCap;
static void tprintf(const char *fmt, ...) {
	va_list ap;
	for (;;) {
		va_start(ap, fmt);
		int n = vsnprintf(tb ? tb + tbLen : NULL, tb ? tbCap - tbLen : 0, fmt, ap);
		va_end(ap);
		if (n < 0) return;
		if (tb && tbLen + n < tbCap) { tbLen += n; return; }
		size_t cap = tbCap ? tbCap * 2 : 65536;
		while (cap < tbLen + n + 1) cap *= 2;
		char *t = realloc(tb, cap);
		if (!t) return;
		tb = t;
		tbCap = cap;
	}
}

static void *read_file(const char *path, size_t *size) {
	FILE *f = fopen(path, "rb");
	if (!f) return NULL;
	fseek(f, 0, SEEK_END);
	long n = ftell(f);
	fseek(f, 0, SEEK_SET);
	void *p = n > 0 && n < (64 << 20) ? malloc(n) : NULL;
	if (p && fread(p, 1, n, f) != (size_t)n) { free(p); p = NULL; }
	fclose(f);
	*size = p ? (size_t)n : 0;
	return p;
}

static void add_bmp(void) {
	if (!snap.pixels) return;
	int w = snap.w, h = snap.h, row = w * 3 + 3 & ~3;
	size_t size = 54 + (size_t)row * h;
	u8 *b = calloc(1, size);
	if (!b) return;
	u32 hdr[13] = { (u32)size, 0, 54, 40, (u32)w, (u32)h, 1 | 24 << 16, 0, (u32)(row * h), 2835, 2835, 0, 0 };
	b[0] = 'B'; b[1] = 'M';
	memcpy(b + 2, hdr, sizeof hdr);
	for (int y = 0; y < h; y++)
		for (int x = 0; x < w; x++) {
			u32 c = snap.pixels[(h - 1 - y) * w + x];
			u8 *p = b + 54 + (size_t)y * row + x * 3;
			p[0] = c; p[1] = c >> 8; p[2] = c >> 16;
		}
	zip_add("screenshot.bmp", b, size);
	free(b);
}

static char reportDir[600], lastZip[700];

static const char *report_dir(void) {
	if (!reportDir[0]) {
		char *base = SDL_GetBasePath();
		snprintf(reportDir, sizeof reportDir, "%sreports", base ? base : "");
		SDL_free(base);
		mkdir_p(reportDir);
	}
	return reportDir;
}

static const char *kind_name(int kind) { return kind == REPORT_CRASH ? "crash" : "problem"; }

static void key_names(int k, char *out, size_t n) {
	static const char *names[] = { "A", "B", "SELECT", "START", "RIGHT", "LEFT", "UP", "DOWN", "R", "L" };
	out[0] = 0;
	if (!k) { snprintf(out, n, "-"); return; }
	for (int i = 0; i < 10; i++)
		if (k & 1 << i) {
			size_t l = strlen(out);
			snprintf(out + l, n - l, "%s%s", l ? "," : "", names[i]);
		}
}

static const char *system_name(void) {
	static char s[128];
	snprintf(s, sizeof s, "%s, %d CPUs, %d MB RAM, SDL %d.%d.%d", SDL_GetPlatform(), SDL_GetCPUCount(),
	         SDL_GetSystemRAM(), SDL_MAJOR_VERSION, SDL_MINOR_VERSION, SDL_PATCHLEVEL);
	return s;
}

const char *report_write(int kind, const char *message) {
	if (!snap.taken) report_snapshot();
	char stamp[32];
	time_t t = time(NULL);
	strftime(stamp, sizeof stamp, "%Y%m%d-%H%M%S", localtime(&t));
	snprintf(lastZip, sizeof lastZip, "%s/mmz-%s-%s.zip", report_dir(), kind_name(kind), stamp);
	zf = fopen(lastZip, "wb");
	if (!zf) return NULL;
	nEntries = 0;

	tbLen = 0;
	tprintf("Mega Man Zero PC port %s report\n\n", kind_name(kind));
	tprintf("message: %s\n\n", message && *message ? message : "(none)");
	tprintf("version: %s\nsystem: %s\n", MMZ_VERSION, system_name());
	tprintf("frame: %ld  mode: %02X  event: %04X  frames recorded: %ld (button changes)\n", snap.frame, snap.mode,
	        snap.event, nChanges);
	tprintf("view: %s %dx%d (active %d), cpu %d%%, scale %d, fullscreen %d\n", kViewNames[settings.viewMode], view_w,
	        view_h, view_active, hw_cpu_speed, settings.scale, settings.fullscreen);
	tprintf("\nto replay: mmz --route inputs.route --save save_at_start.sav (with this mmz.ini)\n");
	tprintf("\nrecent log:\n");
	for (int i = 0; i < noteCount; i++) tprintf("  %s\n", notes[(noteHead - noteCount + i + NOTES) % NOTES]);
	zip_add("report.txt", tb, tbLen);

	tbLen = 0;
	tprintf("# inputs since start (%s %s report). replay: mmz --route inputs.route --save save_at_start.sav\n",
	        kind_name(kind), stamp);
	for (long i = 0; i < nChanges; i++) {
		char k[64];
		key_names(changes[i].keys, k, sizeof k);
		tprintf("%ld %s\n", changes[i].frame, k);
	}
	tprintf("%ld shot report_end.png\n%ld end\n", snap.frame, snap.frame + 1);
	zip_add("inputs.route", tb, tbLen);

	if (haveBootSave) zip_add("save_at_start.sav", bootSave, sizeof bootSave);
	add_bmp();
	zip_add("state/ewram.bin", snap.ewram, sizeof snap.ewram);
	zip_add("state/iwram.bin", snap.iwram, sizeof snap.iwram);
	zip_add("state/io.bin", snap.io, sizeof snap.io);
	zip_add("state/palette.bin", snap.pal, sizeof snap.pal);
	zip_add("state/vram.bin", snap.vram, sizeof snap.vram);
	zip_add("state/oam.bin", snap.oam, sizeof snap.oam);
	size_t n;
	void *p = read_file(settings_path(), &n);
	if (p) { zip_add("mmz.ini", p, n); free(p); }
	char lp[700], *base = SDL_GetBasePath();
	snprintf(lp, sizeof lp, "%smmz.log", base ? base : "");
	SDL_free(base);
	p = read_file(lp, &n);
	if (p) { zip_add("mmz.log", p, n); free(p); }
	zip_finish();
	snap.taken = 0;
	return lastZip;
}

/* ------------------------------------------------------------ GitHub */

static void url_append(char *u, size_t n, const char *s) {
	size_t l = strlen(u);
	for (; *s && l + 4 < n; s++) {
		unsigned char c = *s;
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || strchr("-_.~", c))
			u[l++] = c;
		else
			l += snprintf(u + l, n - l, "%%%02X", c);
	}
	u[l] = 0;
}

void report_open_issue(int kind, const char *message, const char *zip) {
	static char url[8192];
	char title[160], details[1024];
	const char *msg = message && *message ? message : "";
	snprintf(title, sizeof title, "%s: %.100s", kind == REPORT_CRASH ? "Crash" : "Problem",
	         *msg ? msg : (kind == REPORT_CRASH ? "the game crashed" : "(describe the problem)"));
	char *nl = strchr(title, '\n');
	if (nl) *nl = 0;
	snprintf(details, sizeof details, "version %s; %s; frame %ld, mode %02X, event %04X; view %s %dx%d, cpu %d%%",
	         MMZ_VERSION, system_name(), snap.frame ? snap.frame : frameCount, snap.mode, snap.event,
	         kViewNames[settings.viewMode], view_w, view_h, hw_cpu_speed);
	snprintf(url, sizeof url, "https://github.com/" REPO "/issues/new?template=%s.yml&title=",
	         kind == REPORT_CRASH ? "crash" : "bug");
	url_append(url, sizeof url, title);
	strncat(url, "&what=", sizeof url - strlen(url) - 1);
	char what[3000];
	snprintf(what, sizeof what, "%s", msg);
	url_append(url, sizeof url, what);
	strncat(url, "&details=", sizeof url - strlen(url) - 1);
	url_append(url, sizeof url, details);
	strncat(url, "&report=", sizeof url - strlen(url) - 1);
	const char *base = zip ? strrchr(zip, '/') : NULL;
	char att[300];
	snprintf(att, sizeof att, "Attach %s from the game's reports folder here (drag it into this box).",
	         base ? base + 1 : "the report zip");
	url_append(url, sizeof url, att);
	SDL_OpenURL(url);
	/* the folder too, so the zip is easy to drag in */
	char folder[700];
	snprintf(folder, sizeof folder, "file:///%s", report_dir());
	SDL_OpenURL(folder);
}

/* ------------------------------------------------------------ crashes */

static char pendingPath[700];
static const char *pending_path(void) {
	if (!pendingPath[0]) snprintf(pendingPath, sizeof pendingPath, "%s/pending_crash.txt", report_dir());
	return pendingPath;
}

static volatile sig_atomic_t inCrash;
static void crash_write(const char *what) {
	if (inCrash) _exit(3);
	inCrash = 1;
	char msg[200];
	snprintf(msg, sizeof msg, "(the game crashed: %s at frame %ld)", what, frameCount);
	report_note("crash: %s", what);
	const char *zip = report_write(REPORT_CRASH, msg);   /* best effort: the process is broken */
	FILE *f = fopen(pending_path(), "w");
	if (f) { fprintf(f, "%s\n%s\n", zip ? zip : "", msg); fclose(f); }
}

#ifdef _WIN32
static LONG WINAPI win_crash(EXCEPTION_POINTERS *e) {
	char what[96];
	snprintf(what, sizeof what, "exception %08lX at %p", e->ExceptionRecord->ExceptionCode,
	         e->ExceptionRecord->ExceptionAddress);
	crash_write(what);
	return EXCEPTION_EXECUTE_HANDLER;
}
#else
static void posix_crash(int sig, siginfo_t *si, void *ctx) {
	(void)ctx;
	char what[96];
	snprintf(what, sizeof what, "signal %d (address %p)", sig, si ? si->si_addr : NULL);
	crash_write(what);
	signal(sig, SIG_DFL);
	raise(sig);
}
#endif

void report_install_crash_handler(void) {
	if (getenv("MMZ_NO_CRASH_REPORT")) return;
#ifdef _WIN32
	SetUnhandledExceptionFilter(win_crash);
#else
	static char altstack[1 << 16];   /* the crash may be a stack overflow */
	stack_t ss = { .ss_sp = altstack, .ss_size = sizeof altstack };
	sigaltstack(&ss, NULL);
	struct sigaction sa;
	memset(&sa, 0, sizeof sa);
	sa.sa_sigaction = posix_crash;
	sa.sa_flags = SA_SIGINFO | SA_ONSTACK;
	int sigs[] = { SIGSEGV, SIGBUS, SIGILL, SIGFPE, SIGABRT };
	for (unsigned i = 0; i < sizeof sigs / sizeof sigs[0]; i++) sigaction(sigs[i], &sa, NULL);
#endif
}

/* a crash from the last run, not reported yet: its zip and message (or NULL) */
const char *report_pending_crash(char *msg, size_t n) {
	static char zip[700];
	FILE *f = fopen(pending_path(), "r");
	if (!f) return NULL;
	if (!fgets(zip, sizeof zip, f)) zip[0] = 0;
	if (!fgets(msg, (int)n, f)) msg[0] = 0;
	fclose(f);
	zip[strcspn(zip, "\r\n")] = 0;
	msg[strcspn(msg, "\r\n")] = 0;
	return zip;
}

void report_clear_pending_crash(void) { remove(pending_path()); }

const char *report_folder(void) { return report_dir(); }
