/* Runtime for the lifted code in a 32-bit process with the GBA memory mapped
 * at its own addresses: memory access (mirrors, I/O register bits, DMA, open
 * bus), BIOS calls and indirect calls. Used by exec32.c (the equivalence
 * check) and later by the PC port.
 */
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lift.h"

struct Cpu cpu;
u32 lift_tail_lr, lift_tail_lr2, lift_ret;
u32 lift_pc;
int lift_tail;
int lift_void;

/* ------------------------------------------------------------ native memory */

/* The GBA memory is mapped at its own addresses (see exec32.c), so game
 * pointers work as they are, in lifted and in hand-written C. */
#define ewram ((u8 *)0x02000000)
#define iwram ((u8 *)0x03000000)
#define io ((u8 *)0x04000000)
#define pal ((u8 *)0x05000000)
#define vram ((u8 *)0x06000000)
#define oam ((u8 *)0x07000000)
#define rom ((u8 *)0x08000000)
#define sram ((u8 *)0x0E000000)
u32 romSize;
jmp_buf failJmp;
char failReason[128];
long budget;
u32 biosBus;  /* what reads of the BIOS area return: the last BIOS opcode fetched */

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

/* Unmapped reads return the opcode the CPU prefetched: in Thumb the
 * halfword two instructions ahead, twice; in ARM the word two ahead. */
static u32 open_bus(u32 a) {
	u32 pc = lift_pc & ~1u, v;
	u8 *p;
	if (lift_pc & 1) {
		p = ptr(pc + 4, 0);
		u32 h = p ? p[0] | p[1] << 8 : 0;
		v = h | h << 16;
	} else {
		p = ptr(pc + 8, 0);
		v = p ? p[0] | p[1] << 8 | p[2] << 16 | (u32)p[3] << 24 : 0;
	}
	return ror32(v, (a & 3) * 8);
}
/* Reads past the end of the cartridge: the bus returns the address halved
 * (as mGBA does). 1 when a is such an address. */
static int rom_oob(u32 a) {
	return (a >> 24) >= 8 && (a >> 24) <= 0xD && (a & 0x1FFFFFF) >= romSize;
}
static u32 rom_oob_read(u32 a, int size) {
	if (size == 1) return ((a >> 1) >> ((a & 1) * 8)) & 0xFF;
	if (size == 2) return (a >> 1) & 0xFFFF;
	return (((a & ~3u) >> 1) & 0xFFFF) | ((((a & ~3u) + 2) >> 1) << 16);
}
static void unmapped(u32 a) {
	if (getenv("VERBOSE")) fprintf(stderr, "unmapped read %08X at %08X\n", a, lift_pc);
}
static u32 bios_read(u32 a, int size) {
	u32 v = ror32(biosBus, (a & 3) * 8);
	return size == 1 ? v & 0xFF : size == 2 ? v & 0xFFFF : v;
}
u32 lift_read8(u32 a) { u8 *p = ptr(a, 0); tick(); if (!p) { if (a < 0x4000) return bios_read(a, 1); if (rom_oob(a)) return rom_oob_read(a, 1); unmapped(a); return open_bus(a) & 0xFF; } return *p; }
u32 lift_read16(u32 a) { if ((a >> 25) == 7) return lift_read8(a) * 0x101; u8 *p = ptr(a, 0); tick(); if (!p) { if (a < 0x4000) return bios_read(a, 2); if (rom_oob(a)) return rom_oob_read(a, 2); unmapped(a); return open_bus(a) & 0xFFFF; } return p ? p[0] | p[1] << 8 : 0; }
u32 lift_read32(u32 a) { if ((a >> 25) == 7) return lift_read8(a) * 0x01010101; u8 *p = ptr(a, 0); tick(); if (!p) { if (a < 0x4000) return bios_read(a, 4); if (rom_oob(a)) return rom_oob_read(a, 4); unmapped(a); return open_bus(a); } return p ? p[0] | p[1] << 8 | p[2] << 16 | (u32)p[3] << 24 : 0; }

static void dma_check(u32 reg);

/* Bits of each I/O halfword that can be written (0: not plain storage). */
static u16 io_mask(u32 o) {
	switch (o & 0x3FE) {
	case 0x000: return 0xFFF7;  /* DISPCNT */
	case 0x008: case 0x00A: return 0xDFFF; case 0x00C: case 0x00E: return 0xFFFF;  /* BGxCNT */
	case 0x010: case 0x012: case 0x014: case 0x016:
	case 0x018: case 0x01A: case 0x01C: case 0x01E: return 0x01FF;  /* BGxHOFS, BGxVOFS */
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
static void bios_lz77(u32 src, u32 dst, int toVram) {
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
	if (toVram) {
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
	for (u32 o = 0; o + sizeof code <= (romSize < 0x200000 ? romSize : 0x200000); o += 2) {
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

