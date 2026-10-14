/* Headless mGBA runner for testing builds.
 * runner ROM SCRIPT
 * SCRIPT lines: "F KEYS" hold KEYS (e.g. A,START,RIGHT or -) from frame F,
 *               "F shot FILE.png", "F dump ADDR LEN FILE", "F end" */
#include <mgba/core/core.h>
#include <mgba/core/log.h>
#define USE_PNG 1
#include <png.h>
#include <mgba-util/png-io.h>
#include <mgba-util/vfs.h>
#include <mgba/internal/arm/arm.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void nolog(struct mLogger *l, int c, enum mLogLevel lv, const char *f, va_list a) { (void)l; (void)c; (void)lv; (void)f; (void)a; }
static struct mLogger logger = { .log = nolog };

/* Read tracing: TRACE=LO-HI logs every data read in [LO, HI) with the PC. */
static uint32_t traceLo, traceHi;
static int traceCount;
static struct ARMMemory origMem;
static void traceHit(struct ARMCore *cpu, uint32_t addr, int size) {
	if (addr >= traceLo && addr < traceHi && traceCount < 2000) {
		traceCount++;
		fprintf(stderr, "read%d %08X pc %08X lr %08X\n", size, addr, cpu->gprs[ARM_PC], cpu->gprs[ARM_LR]);
	}
}
static uint32_t tLoad32(struct ARMCore *c, uint32_t a, int *cy) { traceHit(c, a, 32); return origMem.load32(c, a, cy); }
static uint32_t tLoad16(struct ARMCore *c, uint32_t a, int *cy) { traceHit(c, a, 16); return origMem.load16(c, a, cy); }
static uint32_t tLoad8(struct ARMCore *c, uint32_t a, int *cy) { traceHit(c, a, 8); return origMem.load8(c, a, cy); }
static uint32_t tLoadM(struct ARMCore *c, uint32_t a, int m, enum LSMDirection d, int *cy) {
	traceHit(c, a, 0);
	return origMem.loadMultiple(c, a, m, d, cy);
}

static int keymask(const char *s) {
	static const char *names[] = { "A", "B", "SELECT", "START", "RIGHT", "LEFT", "UP", "DOWN", "R", "L" };
	int m = 0;
	char buf[256];
	strncpy(buf, s, 255);
	buf[255] = 0;
	for (char *t = strtok(buf, ","); t; t = strtok(NULL, ",")) {
		for (int i = 0; i < 10; i++)
			if (!strcmp(t, names[i])) m |= 1 << i;
	}
	return m;
}

int main(int argc, char **argv) {
	if (argc < 3) { fprintf(stderr, "usage: runner ROM SCRIPT\n"); return 1; }
	mLogSetDefaultLogger(&logger);
	struct mCore *core = mCoreFind(argv[1]);
	if (!core) return 1;
	core->init(core);
	mCoreInitConfig(core, NULL);
	/* No per-game idle loop overrides: they name fixed code addresses, which
	   would make a relocated build run with different timing. */
	mCoreConfigSetValue(&core->config, "idleOptimization", getenv("IDLE") ? getenv("IDLE") : "ignore");
	mCoreConfigSetValue(&core->config, "useOverrides", "0");
	core->loadConfig(core, &core->config);
	unsigned w, h;
	core->desiredVideoDimensions(core, &w, &h);
	color_t *vbuf = calloc(w * h, sizeof(color_t));
	core->setVideoBuffer(core, vbuf, w);
	if (!mCoreLoadFile(core, argv[1])) return 1;
	core->reset(core);
	const char *tr = getenv("TRACE");
	if (tr) {
		sscanf(tr, "%x-%x", &traceLo, &traceHi);
		struct ARMCore *cpu = core->cpu;
		origMem = cpu->memory;
		cpu->memory.load32 = tLoad32;
		cpu->memory.load16 = tLoad16;
		cpu->memory.load8 = tLoad8;
		cpu->memory.loadMultiple = tLoadM;
	}
	FILE *sc = fopen(argv[2], "r");
	char line[512];
	int frame = 0, keys = 0;
	while (fgets(line, sizeof line, sc)) {
		int f; char cmd[64] = "", a1[256] = "", a2[64] = "", a3[256] = "";
		if (line[0] == '#' || sscanf(line, "%d %63s %255s %63s %255s", &f, cmd, a1, a2, a3) < 2) continue;
		while (frame < f) { core->setKeys(core, keys); core->runFrame(core); frame++; }
		if (!strcmp(cmd, "shot")) {
			struct VFile *vf = VFileOpen(a1, O_CREAT | O_TRUNC | O_WRONLY);
			png_structp png = PNGWriteOpen(vf);
			png_infop info = PNGWriteHeader(png, w, h);
			PNGWritePixels(png, w, h, w, vbuf);
			PNGWriteClose(png, info);
			vf->close(vf);
		} else if (!strcmp(cmd, "dump")) {
			unsigned addr = strtoul(a1, 0, 0), len = strtoul(a2, 0, 0);
			FILE *o = fopen(a3, "wb");
			for (unsigned i = 0; i < len; i++) fputc(core->busRead8(core, addr + i), o);
			fclose(o);
		} else if (!strcmp(cmd, "end")) {
			break;
		} else {
			keys = strcmp(cmd, "-") ? keymask(cmd) : 0;
		}
	}
	core->deinit(core);
	return 0;
}
