/* Function equivalence harness: lifted or hand-written C against the original game.
 *
 * harness EXEC32 ROM ROUTE OUT.tsv [MAX_PER_FUNC]
 *
 * Plays ROUTE (a tools/emu route file) in mGBA one instruction at a time.
 * When a C function is entered (and no other test is open), the machine
 * state is copied. When the function returns, the C version is run from the
 * copied state by EXEC32, a 32-bit process with the GBA memory mapped at its
 * own addresses (shared with this process, see shm.h), and its outputs are
 * compared with what the original did: r0, the registers it must preserve
 * (r4-r11, sp) and all of memory (EWRAM, IWRAM, palette, VRAM, OAM, SRAM and
 * the I/O registers that do not change on their own). Tests interrupted by an
 * IRQ, or longer than the step limit, are dropped.
 * Environment: SAVE=file (start from a save), SPACING=frames, VERBOSE=1.
 */
#include <mgba/core/core.h>
#include <mgba/core/log.h>
#include <mgba/internal/arm/arm.h>
#include <mgba/internal/gba/gba.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <mgba-util/vfs.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "shm.h"

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;

static u8 *shm;
static struct ShmCtrl *ctrl;
#define c_ewram (shm + SHM_EWRAM)
#define c_iwram (shm + SHM_IWRAM)
#define c_io (shm + SHM_IO)
#define c_pal (shm + SHM_PAL)
#define c_vram (shm + SHM_VRAM)
#define c_oam (shm + SHM_OAM)
#define c_sram (shm + SHM_SRAM)

/* the executor's function table */
struct Entry { u32 addr, isFunction; };
static struct Entry *table;
static int tableSize;
static int toExec, fromExec;
static pid_t execPid;

static void start_exec(const char *exe, const char *shmPath, const char *romPath) {
	int in[2], out[2];
	if (pipe(in) || pipe(out)) { perror("pipe"); exit(1); }
	execPid = fork();
	if (!execPid) {
		dup2(in[0], 0); dup2(out[1], 1);
		close(in[1]); close(out[0]);
		execl(exe, exe, shmPath, romPath, (char *)NULL);
		perror(exe);
		_exit(1);
	}
	close(in[0]); close(out[1]);
	toExec = in[1]; fromExec = out[0];
	if (read(fromExec, &tableSize, 4) != 4) { fprintf(stderr, "executor did not start\n"); exit(1); }
	table = malloc(sizeof *table * tableSize);
	size_t want = sizeof *table * tableSize, got = 0;
	while (got < want) {
		ssize_t n = read(fromExec, (char *)table + got, want - got);
		if (n <= 0) { fprintf(stderr, "executor table cut short\n"); exit(1); }
		got += n;
	}
}

/* run table entry idx in the executor; 0 if it crashed */
static int run_exec(int idx) {
	char ack;
	if (write(toExec, &idx, 4) != 4 || read(fromExec, &ack, 1) != 1) return 0;
	return 1;
}

/* ------------------------------------------------------------------ driver */

static void nolog(struct mLogger *l, int c, enum mLogLevel lv, const char *f, va_list ap) {
	(void)l; (void)c; (void)lv; (void)f; (void)ap;
}
static struct mLogger logger = { .log = nolog };

static int keymask(const char *s) {
	static const char *names[] = { "A", "B", "SELECT", "START", "RIGHT", "LEFT", "UP", "DOWN", "R", "L" };
	int m = 0;
	char buf[256];
	strncpy(buf, s, 255);
	buf[255] = 0;
	for (char *t = strtok(buf, ","); t; t = strtok(NULL, ","))
		for (int i = 0; i < 10; i++)
			if (!strcmp(t, names[i])) m |= 1 << i;
	return m;
}

struct Snap {
	u32 r[16];
	u8 ewram_[0x40000], iwram_[0x8000], io_[0x400], pal_[0x400], vram_[0x18000], oam_[0x400], sram_[0x8000];
};
static struct Snap snap;

static void grab(struct GBA *gba, u8 *e, u8 *i, u8 *o, u8 *p, u8 *v, u8 *m) {
	memcpy(e, gba->memory.wram, 0x40000);
	memcpy(i, gba->memory.iwram, 0x8000);
	memcpy(o, gba->memory.io, 0x400);
	memcpy(p, gba->video.palette, 0x400);
	memcpy(v, gba->video.vram, 0x18000);
	memcpy(m, gba->video.oam.raw, 0x400);
}

/* I/O registers written by a timed (H-blank/V-blank) DMA during the test */
static u8 dmaTarget[0x400];
static void mark_dma_targets(const u8 *ioSnap) {
	memset(dmaTarget, 0, sizeof dmaTarget);
	for (int ch = 0; ch < 4; ch++) {
		u32 b = 0xB0 + ch * 12;
		u16 cnt = ioSnap[b + 10] | ioSnap[b + 11] << 8;
		if (!(cnt & 0x8000) || ((cnt >> 12) & 3) == 0) continue;
		u32 dst = ioSnap[b + 4] | ioSnap[b + 5] << 8 | ioSnap[b + 6] << 16 | (u32)ioSnap[b + 7] << 24;
		u32 n = ioSnap[b + 8] | ioSnap[b + 9] << 8;
		u32 size = (cnt & 0x400 ? 4 : 2) * (n ? n : 0x4000);
		if ((dst >> 24) == 4)
			for (u32 k = dst & 0x3FF; k < (dst & 0x3FF) + size && k < 0x400; k++) dmaTarget[k] = 1;
	}
}

/* I/O registers that change by themselves or are not plain storage */
static int io_ignored(u32 o) {
	return dmaTarget[o] || o == 0x004 || o == 0x005 || o == 0x006 || o == 0x007 || (o >= 0x084 && o < 0x086) ||
	       (o >= 0x0A0 && o < 0x0A8) || (o >= 0x100 && o < 0x110) || (o >= 0x130 && o < 0x132) ||
	       o == 0x202 || o == 0x203 || (o >= 0x0B0 && o < 0x0E0);
}

int main(int argc, char **argv) {
	if (argc < 5) { fprintf(stderr, "usage: harness EXEC32 ROM ROUTE OUT.tsv [MAX_PER_FUNC]\n"); return 1; }
	const char *exe = argv[1];
	argv++; argc--;
	int maxPer = argc > 4 ? atoi(argv[4]) : 2;
	char shmPath[64];
	snprintf(shmPath, sizeof shmPath, "/dev/shm/mmz_harness_%d", (int)getpid());
	int sfd = open(shmPath, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (sfd < 0 || ftruncate(sfd, SHM_SIZE)) { perror(shmPath); return 1; }
	shm = mmap(NULL, SHM_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, sfd, 0);
	if (shm == MAP_FAILED) { perror("mmap"); return 1; }
	ctrl = (struct ShmCtrl *)(shm + SHM_CTRL);
	signal(SIGPIPE, SIG_IGN);
	start_exec(exe, shmPath, argv[1]);
	mLogSetDefaultLogger(&logger);
	struct mCore *core = mCoreFind(argv[1]);
	core->init(core);
	mCoreInitConfig(core, NULL);
	mCoreConfigSetValue(&core->config, "idleOptimization", "ignore");
	core->loadConfig(core, &core->config);
	unsigned w, h;
	core->desiredVideoDimensions(core, &w, &h);
	color_t *vbuf = calloc(w * h, sizeof(color_t));
	core->setVideoBuffer(core, vbuf, w);
	if (!mCoreLoadFile(core, argv[1])) return 1;
	/* SAVE=path: start from that save file (a temporary copy, so it is not changed) */
	if (getenv("SAVE")) {
		char tmp[] = "/tmp/mmzsaveXXXXXX";
		int fd = mkstemp(tmp);
		FILE *in = fopen(getenv("SAVE"), "rb");
		char buf[65536];
		size_t n = in ? fread(buf, 1, sizeof buf, in) : 0;
		if (in) fclose(in);
		if (fd >= 0) { write(fd, buf, n); close(fd); }
		struct VFile *svf = VFileOpen(tmp, O_RDWR);
		if (svf) core->loadSave(core, svf);
	}
	core->reset(core);

	struct ARMCore *arm = core->cpu;
	struct GBA *gba = core->board;
	int *tested = calloc(tableSize, sizeof(int));
	int *passed = calloc(tableSize, sizeof(int));
	/* SPACING=N: test a function again only N frames after its last test, so
	   the tests spread over the route instead of all being the first calls */
	long spacing = getenv("SPACING") ? atol(getenv("SPACING")) : 0;
	long *nextFrame = calloc(tableSize, sizeof(long));
	char (*why)[128] = calloc(tableSize, 128);
	/* entry index by ROM halfword */
	int *entryAt = malloc(sizeof(int) * (0x200000));
	for (int i = 0; i < 0x200000; i++) entryAt[i] = -1;
	for (int i = 0; i < tableSize; i++) {
		u32 a = table[i].addr;
		if ((a & 1) && table[i].isFunction && a >= 0x08000000 && a < 0x08400000) entryAt[(a - 0x08000000) >> 1] = i;
	}

	FILE *sc = fopen(argv[2], "r");
	char line[512];
	int keys = 0;
	long frame = 0;
	int open = -1;
	u32 openLR = 0, openSP = 0;
	long openSteps = 0;
	int sawIrq = 0;
	int savedI = 0;
	u32 snapBios = 0;
	long nTests = 0, nPass = 0, timeouts = 0;
	while (fgets(line, sizeof line, sc)) {
		int f; char cmd[64] = "";
		if (line[0] == '#' || sscanf(line, "%d %63s", &f, cmd) < 2) continue;
		while (frame < f) {
			core->setKeys(core, keys);
			u32 startFrame = gba->video.frameCounter;
			while (gba->video.frameCounter == startFrame) {
				core->step(core);
				int thumb = arm->cpsr.t;
				u32 pc = arm->gprs[ARM_PC] - (thumb ? 2 : 4);
				if (open >= 0) {
					openSteps++;
					if (arm->cpsr.priv == MODE_IRQ) sawIrq = 1;
					if (openSteps > 400000) { arm->cpsr.i = savedI; arm->irqh.readCPSR(arm); tested[open] = maxPer; snprintf(why[open], 128, "no return within the step limit"); timeouts++; open = -1; continue; }
					if (thumb && (pc & ~1u) == (openLR & ~1u) && (u32)arm->gprs[ARM_SP] == openSP + 0) {
						/* the original returned: run the lifted version from the snapshot */
						int idx = open;
						open = -1;
						arm->cpsr.i = savedI;
						arm->irqh.readCPSR(arm);
						if (sawIrq) continue;
						memcpy(c_ewram, snap.ewram_, 0x40000); memcpy(c_iwram, snap.iwram_, 0x8000);
						memcpy(c_io, snap.io_, 0x400); memcpy(c_pal, snap.pal_, 0x400);
						memcpy(c_vram, snap.vram_, 0x18000); memcpy(c_oam, snap.oam_, 0x400);
						memcpy(c_sram, snap.sram_, 0x8000);
						memcpy(ctrl->r, snap.r, sizeof ctrl->r);
						ctrl->biosBus = snapBios;
						tested[idx]++;
						nTests++;
						char msg[128] = "";
						if (!run_exec(idx)) {
							snprintf(msg, sizeof msg, "executor crashed");
							int st; waitpid(execPid, &st, 0);
							close(toExec); close(fromExec); free(table);
							int oldSize = tableSize;
							start_exec(exe, shmPath, argv[1]);
							if (tableSize != oldSize) { fprintf(stderr, "executor table changed\n"); return 1; }
						} else if (ctrl->status) {
							snprintf(msg, sizeof msg, "%s", ctrl->reason);
						} else {
							u32 *cr = ctrl->r;
							static u8 e2[0x40000], i2[0x8000], o2[0x400], p2[0x400], v2[0x18000], m2[0x400];
							grab(gba, e2, i2, o2, p2, v2, m2);
							if (!ctrl->ignoreR0 && cr[0] != (u32)arm->gprs[0]) {
								snprintf(msg, sizeof msg, "r0 %08X != %08X", cr[0], arm->gprs[0]);
								if (getenv("VERBOSE")) fprintf(stderr, "%08X %s; entry r0-r3 %08X %08X %08X %08X\n", table[idx].addr, msg, snap.r[0], snap.r[1], snap.r[2], snap.r[3]);
							}
							for (int r = 4; r <= 11 && !*msg; r++)
								if (cr[r] != (u32)arm->gprs[r]) snprintf(msg, sizeof msg, "r%d %08X != %08X", r, cr[r], arm->gprs[r]);
							if (!*msg && cr[13] != (u32)arm->gprs[13]) snprintf(msg, sizeof msg, "sp %08X != %08X", cr[13], arm->gprs[13]);
							#define CMP(arr, ref, base, name, size) \
								for (u32 k = 0; k < (size) && !*msg; k++) \
									if (arr[k] != ref[k] && !(base + k < (u32)arm->gprs[13] && base + k >= (u32)arm->gprs[13] - 0x100) \
									    && !(base + k >= 0x03007FA0 && base + k < 0x03007FE0)) { \
										snprintf(msg, sizeof msg, "%s %08X: %02X != %02X", #name, base + k, arr[k], ref[k]); \
										if (getenv("VERBOSE")) { \
											fprintf(stderr, "%08X %s\n  lifted:", table[idx].addr, msg); \
											for (u32 q = k & ~15u; q < (k & ~15u) + 32 && q < (size); q++) fprintf(stderr, " %02X", arr[q]); \
											fprintf(stderr, "\n  orig:  "); \
											for (u32 q = k & ~15u; q < (k & ~15u) + 32 && q < (size); q++) fprintf(stderr, " %02X", ref[q]); \
											fprintf(stderr, "\n  before:"); \
											for (u32 q = k & ~15u; q < (k & ~15u) + 32 && q < (size); q++) fprintf(stderr, " %02X", snap.name##_[q]); \
											fprintf(stderr, "\n  regs:  "); \
											for (int q = 0; q < 4; q++) fprintf(stderr, " r%d=%08X", q, snap.r[q]); \
											fprintf(stderr, "\n"); \
										} \
									}
							CMP(c_ewram, e2, 0x02000000, ewram, 0x40000)
							CMP(c_iwram, i2, 0x03000000, iwram, 0x8000)
							CMP(c_pal, p2, 0x05000000, pal, 0x400)
							CMP(c_vram, v2, 0x06000000, vram, 0x18000)
							CMP(c_oam, m2, 0x07000000, oam, 0x400)
							if (gba->memory.savedata.data) { u8 *s2 = gba->memory.savedata.data; CMP(c_sram, s2, 0x0E000000, sram, 0x8000) }
							for (u32 k = 0; k < 0x400 && !*msg; k++)
								if (!io_ignored(k) && c_io[k] != o2[k]) snprintf(msg, sizeof msg, "io %08X: %02X != %02X", 0x04000000 + k, c_io[k], o2[k]);
						}
						if (*msg) snprintf(why[idx], 128, "%s", msg);
						else { passed[idx]++; nPass++; }
					}
					continue;
				}
				if (!thumb || pc < 0x08000000 || pc >= 0x08400000) continue;
				int idx = entryAt[(pc - 0x08000000) >> 1];
				if (idx < 0 || tested[idx] >= maxPer || frame < nextFrame[idx]) continue;
				nextFrame[idx] = frame + spacing;
				/* open a test */
				memcpy(snap.r, arm->gprs, sizeof snap.r);
				grab(gba, snap.ewram_, snap.iwram_, snap.io_, snap.pal_, snap.vram_, snap.oam_);
				if (gba->memory.savedata.data) memcpy(snap.sram_, gba->memory.savedata.data, 0x8000);
				/* KEYINPUT is made when it is read; give the C what a read returns now */
				u16 keyinput = 0x3FF & ~keys;
				snap.io_[0x130] = keyinput; snap.io_[0x131] = keyinput >> 8;
				open = idx;
				openLR = arm->gprs[ARM_LR];
				openSP = arm->gprs[ARM_SP];
				openSteps = 0;
				sawIrq = arm->cpsr.priv == MODE_IRQ;
				/* no interrupts while the test runs, so the original's result is its own */
				snapBios = gba->memory.biosPrefetch;
				savedI = arm->cpsr.i;
				mark_dma_targets(snap.io_);
				arm->cpsr.i = 1;
			}
			frame++;
			if (getenv("TRACEOPEN") && frame % 500 == 0) fprintf(stderr, "frame %ld open %d steps %ld tests %ld\n", frame, open, openSteps, nTests);
		}
		if (!strcmp(cmd, "end")) break;
		if (!strcmp(cmd, "poke")) {
			char a1[64], a2[64];
			if (sscanf(line, "%*d %*s %63s %63s", a1, a2) == 2)
				core->rawWrite8(core, strtoul(a1, 0, 0), -1, strtoul(a2, 0, 0));
			continue;
		}
		if (strcmp(cmd, "shot") && strcmp(cmd, "dump") && strcmp(cmd, "poke")) keys = strcmp(cmd, "-") ? keymask(cmd) : 0;
	}
	FILE *out = fopen(argv[3], "w");
	int funcsTested = 0, funcsOk = 0;
	for (int i = 0; i < tableSize; i++) {
		if (!tested[i]) continue;
		if (!passed[i] && !strcmp(why[i], "no return within the step limit")) {
			fprintf(out, "%08X\t0\t0\t%s\n", table[i].addr, why[i]);
			continue;
		}
		funcsTested++;
		if (passed[i] == tested[i]) funcsOk++;
		fprintf(out, "%08X\t%d\t%d\t%s\n", table[i].addr, tested[i], passed[i], why[i]);
	}
	fclose(out);
	kill(execPid, SIGTERM);
	unlink(shmPath);
	printf("frames %ld, tests %ld passed %ld, timeouts %ld; functions tested %d, all passed %d\n", frame, nTests, nPass, timeouts, funcsTested, funcsOk);
	return 0;
}
