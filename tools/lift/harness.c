/* Function equivalence harness: lifted C against the original game.
 *
 * harness ROM ROUTE OUT.tsv [MAX_PER_FUNC]
 *
 * Plays ROUTE (a tools/emu route file) in mGBA one instruction at a time.
 * When a lifted function is entered (and no other test is open), the machine
 * state is copied. When the function returns, the lifted C version is run
 * natively from the copied state, and its outputs are compared with what the
 * original did: r0, the registers it must preserve (r4-r11, sp) and all of
 * memory (EWRAM, IWRAM, palette, VRAM, OAM and the I/O registers that do not
 * change on their own). Tests interrupted by an IRQ, or longer than the step
 * limit, are dropped.
 */
#include <mgba/core/core.h>
#include <mgba/core/log.h>
#include <mgba/internal/arm/arm.h>
#include <mgba/internal/gba/gba.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lift.h"

struct Cpu cpu;
u32 lift_tail_lr;
int lift_tail;

/* ------------------------------------------------------------ native memory */

static u8 *rom;
static u32 romSize;
static u8 ewram[0x40000], iwram[0x8000], io[0x400], pal[0x400], vram[0x18000], oam[0x400], sram[0x8000];
static jmp_buf failJmp;
static char failReason[128];
static long budget;
static u32 biosBus;  /* what reads of the BIOS area return: the last BIOS opcode fetched */

static void fail(const char *why, u32 a) {
	snprintf(failReason, sizeof failReason, "%s %08X", why, a);
	if (getenv("VERBOSE")) {
		fprintf(stderr, "fail: %s;", failReason);
		for (int i = 0; i < 16; i++) fprintf(stderr, " r%d=%08X", i, cpu.r[i]);
		fprintf(stderr, "\n");
	}
	longjmp(failJmp, 1);
}

static u8 *ptr(u32 a, int write) {
	switch (a >> 24) {
	case 2: return &ewram[a & 0x3FFFF];
	case 3: return &iwram[a & 0x7FFF];
	case 4: if ((a & 0xFFFFFF) < 0x400) return &io[a & 0x3FF]; return NULL;
	case 5: return &pal[a & 0x3FF];
	case 6: { u32 o = a & 0x1FFFF; if (o >= 0x18000) o -= 0x8000; return &vram[o]; }
	case 7: return &oam[a & 0x3FF];
	case 0xE: case 0xF: return &sram[a & 0x7FFF];  /* cartridge SRAM (8-bit bus) */
	case 8: case 9: case 0xA: case 0xB: case 0xC: case 0xD:
		if (write) return NULL;
		if ((a & 0x1FFFFFF) < romSize) return &rom[a & 0x1FFFFFF];
		return NULL;
	}
	return NULL;
}

static void tick(void) {
	if (--budget < 0)
		fail("too long", cpu.r[15]);
}

static void unmapped(u32 a) {
	if (getenv("VERBOSE")) fprintf(stderr, "unmapped read %08X\n", a);
}
static u32 bios_read(u32 a, int size) {
	u32 v = ror32(biosBus, (a & 3) * 8);
	return size == 1 ? v & 0xFF : size == 2 ? v & 0xFFFF : v;
}
u32 lift_read8(u32 a) { u8 *p = ptr(a, 0); tick(); if (!p) { if (a < 0x4000) return bios_read(a, 1); unmapped(a); } return p ? *p : 0; }
u32 lift_read16(u32 a) { if ((a >> 25) == 7) return lift_read8(a) * 0x101; u8 *p = ptr(a, 0); tick(); if (!p) { if (a < 0x4000) return bios_read(a, 2); unmapped(a); } return p ? p[0] | p[1] << 8 : 0; }
u32 lift_read32(u32 a) { if ((a >> 25) == 7) return lift_read8(a) * 0x01010101; u8 *p = ptr(a, 0); tick(); if (!p) { if (a < 0x4000) return bios_read(a, 4); unmapped(a); } return p ? p[0] | p[1] << 8 | p[2] << 16 | (u32)p[3] << 24 : 0; }

static void dma_check(u32 reg);

/* Bits of each I/O halfword that can be written (0: not plain storage). */
static u16 io_mask(u32 o) {
	switch (o & 0x3FE) {
	case 0x000: return 0xFFF7;  /* DISPCNT */
	case 0x008: case 0x00A: return 0xDFFF; case 0x00C: case 0x00E: return 0xFFFF;  /* BGxCNT */
	case 0x048: case 0x04A: return 0x3F3F;  /* WININ, WINOUT */
	case 0x050: return 0x3FFF;  /* BLDCNT */
	case 0x052: return 0x1F1F;  /* BLDALPHA */
	case 0x060: return 0x007F; case 0x062: case 0x068: return 0xFFC0; case 0x064: case 0x06C: return 0x4700;
	case 0x070: return 0x00E0; case 0x072: return 0xE000; case 0x074: return 0x4000;
	case 0x078: return 0xFF00; case 0x07C: return 0x40FF;
	case 0x080: return 0xFF77; case 0x082: return 0x770F; case 0x084: return 0x0080;
	case 0x088: return 0xC3FE;
	case 0x200: return 0x3FFF; case 0x204: return 0x5FFF; case 0x208: return 0x0001;
	}
	return 0xFFFF;
}
static void io_store16(u32 o, u32 v) {
	u16 m = io_mask(o);
	u16 old = io[o] | io[o + 1] << 8;
	u16 n = (old & ~m) | (v & m);
	io[o] = n; io[o + 1] = n >> 8;
}

void lift_write8(u32 a, u32 v) {
	u32 r = a >> 24;
	if (r == 7 || (r == 6 && (a & 0x1FFFF) >= 0x10000))
		return;                        /* byte writes to OAM and OBJ VRAM are ignored */
	if (r == 5 || r == 6) {            /* palette and BG VRAM: the byte goes to both halves */
		lift_write16(a & ~1u, (v & 0xFF) * 0x101);
		return;
	}
	if (r == 4) {
		u32 o = a & 0x3FE;
		if ((a & 0xFFFFFF) < 0x400) {
			u16 old = io[o] | io[o + 1] << 8;
			io_store16(o, (a & 1) ? (old & 0xFF) | (v & 0xFF) << 8 : (old & 0xFF00) | (v & 0xFF));
			dma_check(o + 0x04000000);
		}
		return;
	}
	u8 *p = ptr(a, 1);
	if (p) *p = v;
}
void lift_write16(u32 a, u32 v) {
	if ((a >> 25) == 7) { sram[a & 0x7FFF] = ror32(v, (a & 1) * 8); return; }
	if ((a >> 24) == 4) {
		if ((a & 0xFFFFFF) < 0x400) { io_store16(a & 0x3FE, v); dma_check(a); }
		return;
	}
	u8 *p = ptr(a, 1);
	if (p) { p[0] = v; p[1] = v >> 8; }
	if ((a >> 24) == 4) dma_check(a);
}
void lift_write32(u32 a, u32 v) {
	if ((a >> 25) == 7) { sram[a & 0x7FFF] = ror32(v, (a & 3) * 8); return; }
	if ((a >> 24) == 4) {
		if ((a & 0xFFFFFF) < 0x400) { io_store16(a & 0x3FE, v); io_store16((a & 0x3FE) + 2, v >> 16); dma_check(a); dma_check(a + 2); }
		return;
	}
	u8 *p = ptr(a, 1);
	if (p) { p[0] = v; p[1] = v >> 8; p[2] = v >> 16; p[3] = v >> 24; }
	if ((a >> 24) == 4) { dma_check(a); dma_check(a + 2); }
}

/* Immediate DMA transfers happen when the control register is written. */
static void dma_check(u32 reg) {
	u32 o = reg & 0x3FF;
	if (o < 0xB0 || o > 0xDE || (o - 0xBA) % 12)
		return;
	u32 base = 0x040000B0 + (o - 0xBA);
	u16 cnt = io[o] | io[o + 1] << 8;
	if (!(cnt & 0x8000) || ((cnt >> 12) & 3) != 0)
		return;
	u32 src = io[base - 0x04000000] | io[base - 0x04000000 + 1] << 8 | io[base - 0x04000000 + 2] << 16 | (u32)io[base - 0x04000000 + 3] << 24;
	u32 dst = io[base - 0x04000000 + 4] | io[base - 0x04000000 + 5] << 8 | io[base - 0x04000000 + 6] << 16 | (u32)io[base - 0x04000000 + 7] << 24;
	u32 count = io[base - 0x04000000 + 8] | io[base - 0x04000000 + 9] << 8;
	int ch = (o - 0xBA) / 12;
	if (count == 0) count = ch == 3 ? 0x10000 : 0x4000;
	int word = cnt & 0x400;
	int w = word ? 4 : 2;
	int dctl = (cnt >> 5) & 3, sctl = (cnt >> 7) & 3;
	src &= word ? ~3u : ~1u;
	dst &= word ? ~3u : ~1u;
	for (u32 i = 0; i < count; i++) {
		if (word) lift_write32(dst, lift_read32(src));
		else lift_write16(dst, lift_read16(src));
		if (sctl == 0) src += w; else if (sctl == 1) src -= w;
		if (dctl == 0 || dctl == 3) dst += w; else if (dctl == 1) dst -= w;
	}
	if (!(cnt & 0x200)) { cnt &= 0x7FFF; io[o] = cnt; io[o + 1] = cnt >> 8; }
}

/* ------------------------------------------------------------- BIOS calls */

static u32 bios_sqrt(u32 num) {
	u32 res = 0, bit = 1u << 30;
	while (bit > num) bit >>= 2;
	while (bit) {
		if (num >= res + bit) { num -= res + bit; res = (res >> 1) + bit; }
		else res >>= 1;
		bit >>= 2;
	}
	return res;
}
static s32 bios_atan(s32 i) {
	s32 a = -((i * i) >> 14);
	s32 b = ((0xA9 * a) >> 14) + 0x390;
	b = ((b * a) >> 14) + 0x91C;
	b = ((b * a) >> 14) + 0xFB6;
	b = ((b * a) >> 14) + 0x16AA;
	b = ((b * a) >> 14) + 0x2081;
	b = ((b * a) >> 14) + 0x3651;
	b = ((b * a) >> 14) + 0xA2F9;
	return (i * b) >> 16;
}
static u32 bios_atan2(s32 x, s32 y) {
	if (!y) return x >= 0 ? 0 : 0x8000;
	if (!x) return y >= 0 ? 0x4000 : 0xC000;
	if (y >= 0) {
		if (x >= 0) { if (x >= y) return (u16)bios_atan((y << 14) / x); }
		else if (-x >= y) return (u16)(bios_atan((y << 14) / x) + 0x8000);
		return (u16)(0x4000 - bios_atan((x << 14) / y));
	} else {
		if (x <= 0) { if (-x > -y) return (u16)(bios_atan((y << 14) / x) + 0x8000); }
		else if (x >= -y) return (u16)(bios_atan((y << 14) / x) + 0x10000);
		return (u16)(0xC000 - bios_atan((x << 14) / y));
	}
}
static void bios_lz77(u32 src, u32 dst, int vram) {
	/* VRAM only takes halfword writes: decompress to a buffer, then copy */
	static u8 buf[0x40000];
	u32 size = lift_read32(src) >> 8, written = 0;
	src += 4;
	if (size > sizeof buf) fail("lz77 size", size);
	while (written < size) {
		u32 flags = lift_read8(src++);
		for (int i = 0; i < 8 && written < size; i++, flags <<= 1) {
			if (flags & 0x80) {
				u32 b0 = lift_read8(src), b1 = lift_read8(src + 1);
				u32 len = (b0 >> 4) + 3, disp = (((b0 & 0xF) << 8) | b1) + 1;
				src += 2;
				while (len-- && written < size) {
					buf[written] = written >= disp ? buf[written - disp] : 0;
					written++;
				}
			} else {
				buf[written++] = lift_read8(src++);
			}
		}
	}
	if (vram) {
		for (u32 k = 0; k + 1 < size + 1; k += 2) lift_write16(dst + k, buf[k] | (k + 1 < size ? buf[k + 1] << 8 : 0));
	} else {
		for (u32 k = 0; k < size; k++) lift_write8(dst + k, buf[k]);
	}
}

void lift_swi(u32 n) {
	u32 *r = cpu.r;
	biosBus = 0xE3A02004;  /* the opcode the BIOS prefetches when an SWI returns */
	switch (n) {
	case 0x08: r[0] = bios_sqrt(r[0]); break;
	case 0x0A: r[0] = bios_atan2((s16)r[0], (s16)r[1]); break;
	case 0x0B: {
		u32 cnt = r[2] & 0x1FFFFF, s = r[0], d = r[1];
		int fixed = r[2] & (1 << 24);
		if (r[2] & (1 << 26)) {
			s &= ~3u; d &= ~3u;
			for (u32 i = 0; i < cnt; i++) { lift_write32(d, lift_read32(s)); d += 4; if (!fixed) s += 4; }
		} else {
			s &= ~1u; d &= ~1u;
			for (u32 i = 0; i < cnt; i++) { lift_write16(d, lift_read16(s)); d += 2; if (!fixed) s += 2; }
		}
		break;  /* like mGBA, CpuSet leaves r0/r1 alone (callers treat them as clobbered) */
	}
	case 0x0C: {
		u32 cnt = ((r[2] & 0x1FFFFF) + 7) & ~7u, s = r[0] & ~3u, d = r[1] & ~3u;
		int fixed = r[2] & (1 << 24);
		for (u32 i = 0; i < cnt; i++) { lift_write32(d, lift_read32(s)); d += 4; if (!fixed) s += 4; }
		r[0] = s; r[1] = d;
		break;
	}
	case 0x11: bios_lz77(r[0], r[1], 0); break;
	case 0x12: bios_lz77(r[0], r[1], 1); break;
	default: fail("swi", n);
	}
}

static int find(u32 a) {
	int lo = 0, hi = gLiftTableSize - 1;
	while (lo <= hi) {
		int m = (lo + hi) / 2;
		if ((gLiftTable[m].addr & ~1u) == (a & ~1u)) return m;
		if ((gLiftTable[m].addr & ~1u) < (a & ~1u)) lo = m + 1; else hi = m - 1;
	}
	return -1;
}

/* Code the game copied into RAM: find the ROM code with the same bytes and
 * run its lifted version. */
static int find_copied(u32 a) {
	static u32 cacheFrom[64], cacheTo[64];
	static int cacheN;
	for (int k = 0; k < cacheN; k++)
		if (cacheFrom[k] == a) return find(cacheTo[k]);
	u8 code[24];
	u8 *p = ptr(a & ~1u, 0);
	if (!p) return -1;
	memcpy(code, p, sizeof code);
	for (u32 o = 0; o + sizeof code <= 0xC8E24; o += 2) {
		if (!memcmp(rom + o, code, sizeof code)) {
			u32 src = (0x08000000 + o) | (a & 1);
			int i = find(src);
			if (i >= 0 && cacheN < 64) { cacheFrom[cacheN] = a; cacheTo[cacheN++] = src; }
			return i;
		}
	}
	return -1;
}

void lift_call(u32 a) {
	int i = find(a);
	if (i < 0 && (a >> 24) >= 2 && (a >> 24) <= 3) i = find_copied(a);
	if (i < 0) fail("call to", a);
	gLiftTable[i].fn();
}

void lift_fail(u32 a) { fail("lift_fail at", a); }

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
	if (argc < 4) { fprintf(stderr, "usage: harness ROM ROUTE OUT.tsv [MAX_PER_FUNC]\n"); return 1; }
	int maxPer = argc > 4 ? atoi(argv[4]) : 2;
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
	core->reset(core);
	FILE *rf = fopen(argv[1], "rb");
	fseek(rf, 0, SEEK_END);
	romSize = ftell(rf);
	rewind(rf);
	rom = malloc(romSize);
	fread(rom, 1, romSize, rf);
	fclose(rf);

	struct ARMCore *arm = core->cpu;
	struct GBA *gba = core->board;
	int *tested = calloc(gLiftTableSize, sizeof(int));
	int *passed = calloc(gLiftTableSize, sizeof(int));
	char (*why)[128] = calloc(gLiftTableSize, 128);
	/* entry index by ROM halfword */
	int *entryAt = malloc(sizeof(int) * (0x200000));
	for (int i = 0; i < 0x200000; i++) entryAt[i] = -1;
	for (int i = 0; i < gLiftTableSize; i++) {
		u32 a = gLiftTable[i].addr;
		if ((a & 1) && gLiftTable[i].isFunction && a >= 0x08000000 && a < 0x08400000) entryAt[(a - 0x08000000) >> 1] = i;
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
						memcpy(ewram, snap.ewram_, sizeof ewram); memcpy(iwram, snap.iwram_, sizeof iwram);
						memcpy(io, snap.io_, sizeof io); memcpy(pal, snap.pal_, sizeof pal);
						memcpy(vram, snap.vram_, sizeof vram); memcpy(oam, snap.oam_, sizeof oam);
						memcpy(sram, snap.sram_, sizeof sram);
						memcpy(cpu.r, snap.r, sizeof cpu.r);
						lift_tail = 0;
						biosBus = snapBios;
						budget = 50000000;
						tested[idx]++;
						nTests++;
						char msg[128] = "";
						if (setjmp(failJmp)) {
							snprintf(msg, sizeof msg, "%s", failReason);
						} else {
							gLiftTable[idx].fn();
							static u8 e2[0x40000], i2[0x8000], o2[0x400], p2[0x400], v2[0x18000], m2[0x400];
							grab(gba, e2, i2, o2, p2, v2, m2);
							if (cpu.r[0] != (u32)arm->gprs[0]) {
								snprintf(msg, sizeof msg, "r0 %08X != %08X", cpu.r[0], arm->gprs[0]);
								if (getenv("VERBOSE")) fprintf(stderr, "%08X %s; entry r0-r3 %08X %08X %08X %08X\n", gLiftTable[idx].addr, msg, snap.r[0], snap.r[1], snap.r[2], snap.r[3]);
							}
							for (int r = 4; r <= 11 && !*msg; r++)
								if (cpu.r[r] != (u32)arm->gprs[r]) snprintf(msg, sizeof msg, "r%d %08X != %08X", r, cpu.r[r], arm->gprs[r]);
							if (!*msg && cpu.r[13] != (u32)arm->gprs[13]) snprintf(msg, sizeof msg, "sp %08X != %08X", cpu.r[13], arm->gprs[13]);
							#define CMP(arr, ref, base, name) \
								for (u32 k = 0; k < sizeof arr && !*msg; k++) \
									if (arr[k] != ref[k] && !(base + k < (u32)arm->gprs[13] && base + k >= (u32)arm->gprs[13] - 0x100) \
									    && !(base + k >= 0x03007FA0 && base + k < 0x03007FE0)) { \
										snprintf(msg, sizeof msg, "%s %08X: %02X != %02X", #name, base + k, arr[k], ref[k]); \
										if (getenv("VERBOSE")) { \
											fprintf(stderr, "%08X %s\n  lifted:", gLiftTable[idx].addr, msg); \
											for (u32 q = k & ~15u; q < (k & ~15u) + 32 && q < sizeof arr; q++) fprintf(stderr, " %02X", arr[q]); \
											fprintf(stderr, "\n  orig:  "); \
											for (u32 q = k & ~15u; q < (k & ~15u) + 32 && q < sizeof arr; q++) fprintf(stderr, " %02X", ref[q]); \
											fprintf(stderr, "\n  before:"); \
											for (u32 q = k & ~15u; q < (k & ~15u) + 32 && q < sizeof arr; q++) fprintf(stderr, " %02X", snap.name##_[q]); \
											fprintf(stderr, "\n  regs:  "); \
											for (int q = 0; q < 4; q++) fprintf(stderr, " r%d=%08X", q, snap.r[q]); \
											fprintf(stderr, "\n"); \
										} \
									}
							CMP(ewram, e2, 0x02000000, ewram)
							CMP(iwram, i2, 0x03000000, iwram)
							CMP(pal, p2, 0x05000000, pal)
							CMP(vram, v2, 0x06000000, vram)
							CMP(oam, m2, 0x07000000, oam)
							if (gba->memory.savedata.data) { u8 *s2 = gba->memory.savedata.data; CMP(sram, s2, 0x0E000000, sram) }
							for (u32 k = 0; k < sizeof io && !*msg; k++)
								if (!io_ignored(k) && io[k] != o2[k]) snprintf(msg, sizeof msg, "io %08X: %02X != %02X", 0x04000000 + k, io[k], o2[k]);
						}
						if (*msg) snprintf(why[idx], 128, "%s", msg);
						else { passed[idx]++; nPass++; }
					}
					continue;
				}
				if (!thumb || pc < 0x08000000 || pc >= 0x08400000) continue;
				int idx = entryAt[(pc - 0x08000000) >> 1];
				if (idx < 0 || tested[idx] >= maxPer) continue;
				/* open a test */
				memcpy(snap.r, arm->gprs, sizeof snap.r);
				grab(gba, snap.ewram_, snap.iwram_, snap.io_, snap.pal_, snap.vram_, snap.oam_);
				if (gba->memory.savedata.data) memcpy(snap.sram_, gba->memory.savedata.data, 0x8000);
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
		if (strcmp(cmd, "shot") && strcmp(cmd, "dump")) keys = strcmp(cmd, "-") ? keymask(cmd) : 0;
	}
	FILE *out = fopen(argv[3], "w");
	int funcsTested = 0, funcsOk = 0;
	for (int i = 0; i < gLiftTableSize; i++) {
		if (!tested[i]) continue;
		if (!passed[i] && !strcmp(why[i], "no return within the step limit")) {
			fprintf(out, "%08X\t0\t0\t%s\n", gLiftTable[i].addr, why[i]);
			continue;
		}
		funcsTested++;
		if (passed[i] == tested[i]) funcsOk++;
		fprintf(out, "%08X\t%d\t%d\t%s\n", gLiftTable[i].addr, tested[i], passed[i], why[i]);
	}
	fclose(out);
	printf("frames %ld, tests %ld passed %ld, timeouts %ld; functions tested %d, all passed %d\n", frame, nTests, nPass, timeouts, funcsTested, funcsOk);
	return 0;
}
