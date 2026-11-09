/* The wide view: a native renderer driven by the game's state (docs/renderer.md).
 *
 * The game runs with its own 240x160 camera; the PC picture is any size
 * around it, drawn at V-blank from the game state of this frame only:
 *
 * - The stage layers (gStage.layers, 0x02004FF0) are world-space tilemaps:
 *   layer 0 from the stage's live metatile buffer (patches included),
 *   layers 1/2 from their chunk layouts. A layer's pixel for any output
 *   pixel follows the game's own scroll rule (bg.x/y = pos * scale >> 8 +
 *   offset + shake, the GBA screen's top-left in the layer).
 * - Each chunk is drawn with its own graphics sets, decoded from the ROM
 *   (per area, per set pair); live video memory / palette only where the pair
 *   is the loaded one (so animations play) and for what the sets do not own.
 * - What is drawn is the camera's room: the area's chunks reachable from the
 *   camera's chunk without a level step the camera stops at (sub_080066F8),
 *   clipped by active camera limits. Outside it: black. It changes only by
 *   a cut (door, teleport, area change).
 * - Nothing depends on what was visited or loaded before, or on the view
 *   size; menus and cutscenes fall back to the GBA picture.
 * - The HUD (BG0) goes to the view's edges. Sprites come from sprites.c's
 *   world-space list (every piece the game's draw callbacks make for any
 *   screen-sized cell the view can cover), each placed by its world
 *   position relative to the screen its renderer drew for (= the GBA rect);
 *   composited with the BG layers per priority / window / blend as the PPU.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lift.h"
#include "pc.h"
#include "ui.h"
#include "settings.h"
#include <SDL.h>

#define io ((u8 *)0x04000000)
#define pal ((u8 *)0x05000000)
#define vram ((u8 *)0x06000000)
#define oam ((u8 *)0x07000000)
#define PAL16(i) (*(u16 *)(pal + (i) * 2))
/* the BG tiles and palettes the native layers are drawn from: live video
   memory, or (the frame the game starts loading another set pair) a copy of
   the frame before (see chunk_sources) */
static const u8 *bgv = (const u8 *)0x06000000, *bgp = (const u8 *)0x05000000;
#define BGPAL16(i) (*(const u16 *)(bgp + (i) * 2))

#define STAGE_LAYERS 0x02004FF0u
#define TRANSPARENT 0x8000

int view_w = SCREEN_W, view_h = SCREEN_H;   /* the view size asked for */
/* the screen-sized cells around the GBA screen the view needs sprites from
   (sprites.c), counted from the GBA screen */
int view_cells_left, view_cells_right, view_cells_up, view_cells_down;
int view_active;                            /* the last frame was drawn wide */
u32 *view_frame;                            /* view_w x view_h, 0x00RRGGBB */
u8 *view_layers;                            /* view_w x view_h: top | second << 4 (as ppu_layers; 5 backdrop) */

/* the registers each GBA line was drawn with (DISPCNT to BLDY) */
#define REGS 0x56
static u8 lineRegs[SCREEN_H][REGS];
#define R16(line, o) (*(u16 *)(lineRegs[line] + (o)))

void view_record_line(int line) {
	memcpy(lineRegs[line], io, REGS);
}
extern long frameCount;

static int rom_ptr(u32 a) {
	extern u32 romSize;
	return a >= 0x08000000 && a - 0x08000000 < romSize;
}

/* ------------------------------------------------------------ game state */
#define CHUNK_AREA ((const u8 *)0x082921ECu)   /* [row * 128 + column]: area (low nibble), >= 0xF0 none */
#define AREA_TABLE 0x08293BECu                 /* area -> descriptors by area variant */
#define CUR_AREA (*(u16 *)0x0200520C)
#define AREA_STATES (*(u32 *)0x02005208)
#define GFX_SET_A (*(u16 *)0x02005430)         /* loaded set of slot 0: area << 8 | set */
#define GFX_SET_B (*(u16 *)0x02005432)
#define CAMERA_X (*(s32 *)0x02005200)          /* gStage.camera, global, 24.8, the screen's centre */
#define CAMERA_Y (*(s32 *)0x02005204)
#define MT_STRIDE (*(u16 *)0x0200543C)         /* gStage.metatileStride */
#define MT ((const u16 *)0x02005440)           /* gStage.metatiles: the current area's, area-local, live */
#define BGREGS ((const u16 *)0x02004F30)       /* gBgRegs: dispcnt, -, bgcnt[4], bgofs[4] */
#define GCAMERA ((const u8 *)0x02022C44)       /* gCamera: mode +0x18, left/right/top/bottom +0x5C (24.8) */
#define GAME_MODE (*(u8 *)0x020236E1)          /* 3: playing a stage, 4: Zero defeated; 1 pause, 6 continue */
#define EVENT_FLAGS (*(u16 *)0x02022B6E)       /* bit 0: an event script (cutscene) runs */

static const u8 *area_desc(int area) {
	u32 list = *(u32 *)(uintptr_t)(AREA_TABLE + area * 4);
	return (const u8 *)(uintptr_t)*(u32 *)(uintptr_t)(list + ((AREA_STATES >> (area * 2)) & 3) * 4);
}

static inline int floordiv(s32 a, s32 b) { return a >= 0 ? a / b : -((-a + b - 1) / b); }

/* the layerMap level (sub_08006B4C) of a global chunk in an area; 15 outside it */
static int chunk_level(int gx, int gy, int area) {
	if (gx < 0 || gy < 0 || gx >= 128 || gy >= 128) return 15;
	u8 a = CHUNK_AREA[gy * 128 + gx];
	if (a > 0xEF || (a & 15) != area) return 15;
	const u8 *d = area_desc(area);
	s32 left = *(s32 *)(d + 0x6C), top = *(s32 *)(d + 0x70);
	const u8 *map = (const u8 *)(uintptr_t)*(u32 *)(d + 0x7C);
	if (!map) return 0;
	u16 shift = *(const u16 *)map;
	return ((const u16 *)(map + 8))[((gy - top) << shift) + (gx - left)] >> 12;
}
/* the graphics-set byte of a global chunk in its area, or -1 */
static int chunk_sets(int cx, int cy, int area) {
	const u8 *d = area_desc(area);
	s32 left = *(s32 *)(d + 0x6C), top = *(s32 *)(d + 0x70);
	const u8 *g = (const u8 *)(uintptr_t)*(u32 *)(d + 0x74);
	int col = cx - left, row = cy - top;
	if (col < 0 || row < 0 || col >= g[2] || row >= g[3]) return -1;
	return g[4 + (row << g[0]) + col];
}
/* ------------------------------------------------------- graphics sets
 *
 * A stage area's chunks each need two graphics sets (tiles and palettes), but
 * video memory holds one of each kind at a time: the ones around the GBA
 * screen (0x02005430 / 0x02005432, loaded by sub_08006D3C). For chunks that
 * need others, the view makes its own copy of video memory and the palettes
 * with those sets loaded the way the game loads them, and draws from that.
 */
#define GFX_SETS 0x086B0000u   /* per area's graphics table: set descriptors of 0x14 bytes */
static void lz77(const u8 *src, u8 *dst, u32 cap) {
	u32 n = src[1] | src[2] << 8 | src[3] << 16, o = 0;
	src += 4;
	while (o < n) {
		u8 flags = *src++;
		for (int b = 0; b < 8 && o < n; b++, flags <<= 1) {
			if (flags & 0x80) {
				u32 len = (src[0] >> 4) + 3, disp = ((src[0] & 15) << 8 | src[1]) + 1;
				src += 2;
				for (u32 k = 0; k < len && o < n; k++, o++)
					if (o < cap) dst[o] = o >= disp ? dst[o - disp] : 0;
			} else {
				if (o < cap) dst[o] = *src;
				src++;
				o++;
			}
		}
	}
}

static void copy_in(u8 *buf, u32 cap, u32 off, const u8 *src, u32 n) {
	if (off >= cap) return;
	if (n > cap - off) n = cap - off;
	memcpy(buf + off, src, n);
}

/* a set's tiles (sub_080014E8, with the base sub_08006D3C gives) */
static void load_set_tiles(const u8 *d, u8 *vr) {
	u32 size = *(const u32 *)(d + 4) & 0x3FFFFF;
	if (!size) return;
	u16 h6 = *(const u16 *)(d + 6), h8 = *(const u16 *)(d + 8), hA = *(const u16 *)(d + 10);
	u32 dst = 0x4000 + (hA & 0x7F8) * (h6 >> 6);
	const u8 *src = d + *(const s32 *)d;
	if (hA & 2) {
		if (dst < 0x10000) lz77(src, vr + dst, 0x10000 - dst);
	} else if (hA & 1) {
		for (s32 left = size; left > 0 && h8; left -= h8, src += h8, dst += ((hA >> 3) & 0xFF) << 8)
			copy_in(vr, 0x10000, dst, src, h8);
	} else {
		copy_in(vr, 0x10000, dst, src, size);
	}
}

/* a set's palettes (sub_0800179C) */
static void load_set_pal(const u8 *d, u16 *pl) {
	u16 size = *(const u16 *)(d + 4);
	if (!size) return;
	u32 off = d[7] * 0x20;
	const u8 *src = d + *(const s32 *)d;
	if (!d[6]) copy_in((u8 *)pl, 512, off, src, size);
	else if (off < 512) { static u8 tmp[0x8000]; lz77(src, tmp, sizeof tmp); copy_in((u8 *)pl, 512, off, tmp, 512 - off); }
}

static const u8 *set_desc(int area, int set) {
	const u8 *d = area_desc(area);
	u32 te = GFX_SETS + *(const s32 *)d * 4;
	return (const u8 *)(uintptr_t)(te + *(const s32 *)(uintptr_t)te + set * 0x14);
}
/* the BG's tilemap entry in video memory at a BG pixel */
static u16 vram_entry(int bg, int line, int px, int py) {
	u16 cnt = R16(line, 0x08 + bg * 2);
	int size = cnt >> 14, w = (size & 1) ? 512 : 256, h = (size & 2) ? 512 : 256;
	int x = px & (w - 1), y = py & (h - 1);
	int block = (x >> 8) + (y >> 8) * (w >> 8);
	u32 ea = ((cnt >> 8) & 0x1F) * 0x800 + block * 0x800 + (((y >> 3) & 31) * 32 + ((x >> 3) & 31)) * 2;
	return *(u16 *)(vram + (ea & 0xFFFF));
}

/* where the GBA line's top-left is in the layer's world (the register can
   differ from the layer's position per line, by up to half the map) */
static s32 wrap_delta(int reg, s32 pos) {
	int d = (reg - (int)(pos & 511)) & 511;
	return d >= 256 ? d - 512 : d;
}

/* ------------------------------------------------------- line effects
 *
 * Some stage layers scroll a BG per GBA line (H-blank DMA, a 160-line table):
 * a slant, a 1-pixel shimmer band, the area 4 water. Replayed line by line
 * they cover only the GBA rows and step at the GBA's lines when scaled up.
 * Instead the effect is recognised by the layer's draw handler and worked out
 * for every row of the view from the same formulas (src/stage_layer_fx.c,
 * src/stage_area_code.c in the decomp): it continues above and below the GBA
 * screen and the water's surface stays where it is in the world. It is used
 * only when the GBA lines show the table the formula predicts (the phase is
 * found from them), so a changed effect falls back to the lines.
 */
#define SINE ((const s16 *)0x080C8E24u)
enum { FX_NONE, FX_SLANT, FX_BAND, FX_WAVE, FX_WATER };
struct Fx {
	int kind;
	int x, y;          /* the BG's offsets without the effect */
	int start;         /* FX_SLANT / FX_BAND: the first line of the band */
	u16 phase;         /* the wave phase the table was made with */
	int surface;       /* FX_WATER: the screen row of the surface */
	int below;         /* FX_WATER: rows the camera is below 0x190 - 160 */
	int delay;         /* line i shows the table's entry i - delay (0 or 1) */
};
static struct Fx fx[4];
int view_line_fx = 1;   /* 0: replay the GBA lines (debug: MMZ_LINE_FX=0) */

static int floor4(int i) { return i >= 0 ? i >> 2 : -((-i + 3) >> 2); }
static int fx_wave(u16 phase, int i) { return SINE[(phase - i * 16) & 0xFF] >> 8; }

/* the BG's offsets for screen row i (0 = the GBA screen's top; any row) */
static void fx_regs(const struct Fx *f, int i, int *h, int *v) {
	/* (some frames show the table a line late: H-blank DMA started a line after the table's first entry) */
	i -= f->delay;
	*h = f->x; *v = f->y;
	switch (f->kind) {
	case FX_SLANT: if (i < f->start) *h = f->x - floor4(i); else *v = f->y + fx_wave(f->phase, i); break;
	case FX_BAND:  if (i >= f->start) *v = f->y + fx_wave(f->phase, i); break;
	case FX_WAVE:  *v = f->y + fx_wave(f->phase, i); break;
	case FX_WATER:
		if (i <= f->surface) {
			int j = f->surface - i, amp = j >> 3;
			if (amp > 8) amp = 8;
			/* (the GBA alternates lines by an eighth of a period, a two-line
			   interlace; the view uses their middle) */
			*h = f->x + ((SINE[(f->phase + i + 0x100 + f->below + 16) & 0xFF] * amp) >> 8);
		}
		break;
	}
}

/* the GBA lines agree with the effect at this phase? (the water: the lines
   it does not move, and the ones at the surface) */
static int fx_matches(const struct Fx *f, int bg) {
	for (int i = 1; i < SCREEN_H; i++) {   /* (line 0: the registers as set in V-blank) */
		int h, v;
		int e = i - f->delay;
		if (f->kind == FX_WATER && e <= f->surface && f->surface - e >= 8) continue;
		fx_regs(f, i, &h, &v);
		if (((R16(i, 0x10 + bg * 4) ^ h) & 0x1FF) || ((R16(i, 0x12 + bg * 4) ^ v) & 0x1FF)) return 0;
	}
	return 1;
}

static int fx_find_phase(struct Fx *f, int bg, u16 p) {
	static const int lag[] = { 0, -3, 3, -6, 6 };
	for (int d = 0; d < 2; d++)
		for (int k = 0; k < 5; k++) {
			f->delay = d;
			f->phase = p + lag[k];
			f->x = R16(1, 0x10 + bg * 4) & 0x1FF;
			if (f->kind == FX_SLANT) f->x += floor4(1 - d);
			if (f->kind == FX_WAVE) f->y = R16(1, 0x12 + bg * 4) - fx_wave(f->phase, 1 - d);
			if (fx_matches(f, bg)) return lag[k];
		}
	return 99;
}

static void find_fx(void) {
	static int envChecked, frame;
	frame++;
	if (!envChecked) { envChecked = 1; if (getenv("MMZ_LINE_FX")) view_line_fx = atoi(getenv("MMZ_LINE_FX")); }
	memset(fx, 0, sizeof fx);
	if (!view_line_fx || (R16(0, 0) & 7) != 0) return;
	for (int k = 0; k < 3; k++) {
		const u8 *s = (const u8 *)(uintptr_t)(STAGE_LAYERS + k * 0x70);
		u32 draw = *(u32 *)(s + 0x04) & ~1u;
		u16 p60 = *(u16 *)(s + 0x60), p62 = *(u16 *)(s + 0x62);
		struct Fx f = { 0 };
		int bg = 3;
		if (draw == 0x0800A1D0u) { f.kind = FX_SLANT; f.start = 0x8F; }
		else if (draw == 0x0800A3D8u) { f.kind = FX_BAND; f.start = 0x8E; bg = 2; }
		else if (draw == 0x0800A620u) { f.kind = FX_BAND; f.start = 0x8F; }
		else if (draw == 0x0800C0B4u || draw == 0x0800C134u) f.kind = FX_WAVE;
		else continue;
		f.y = R16(1, 0x12 + bg * 4) & 0x1FF;
		int lag = fx_find_phase(&f, bg, p60);
		if (lag == 99) continue;
		fx[bg] = f;
		if (draw == 0x0800C134u) {
			/* BG2: the water (unk_62 is its phase, made in the same frame as unk_60) */
			struct Fx w = { FX_WATER };
			w.below = *(s32 *)(s + 0x38) - (0x190 - SCREEN_H);
			w.surface = SCREEN_H - w.below;
			w.x = R16(SCREEN_H - 1, 0x10) & 0x1FF;
			w.y = R16(0, 0x12) & 0x1FF;
			w.phase = p62 + lag;
			w.delay = f.delay;
			if (fx_matches(&w, 2)) fx[2] = w;
		}
	}
	if (dbgo.logFx) {
		static int last[4] = { -1, -1, -1, -1 };
		for (int bg = 1; bg < 4; bg++)
			if (fx[bg].kind != last[bg]) {
				last[bg] = fx[bg].kind;
				fprintf(stderr, "fx: frame %d bg%d kind %d x %d y %d phase %d surface %d\n", frame, bg, fx[bg].kind, fx[bg].x, fx[bg].y, fx[bg].phase, fx[bg].surface);
			}
	}
}


/* ------------------------------------------------- graphics set cache
 *
 * A set pair's tiles and palettes decoded from the ROM into their own
 * ranges of a video memory / palette image (Stage_LoadGfxSets' layout). The
 * pair is loaded twice, over 0x00 and over 0xFF: where both agree the sets
 * own the byte (own[]), elsewhere the live video memory is read (common
 * tiles and palettes, the same for every chunk). Cleared on an area change;
 * the content depends only on the ROM.
 */
#define MAX_CACHE 32
struct GfxCache { int key; u8 tv[0x10000]; u8 own[0x10000]; u16 tp[256]; u8 palOwn[256]; };
static struct GfxCache gcache[MAX_CACHE];
static int nCache, cacheArea = -1;

static int cache_get(int area, int hi, int lo) {
	int key = area << 8 | hi << 4 | lo;
	for (int i = 0; i < nCache; i++)
		if (gcache[i].key == key) return i;
	if (nCache == MAX_CACHE) return -1;
	struct GfxCache *c = &gcache[nCache];
	static u8 b[0x10000];
	static u16 pb[256];
	memset(c->tv, 0, sizeof c->tv); memset(b, 0xFF, sizeof b);
	for (int i = 0; i < 256; i++) { c->tp[i] = 0; pb[i] = 0xFFFF; }
	const u8 *dh = set_desc(area, hi), *dl = set_desc(area, lo);
	load_set_tiles(dh, c->tv); load_set_tiles(dl, c->tv);
	load_set_tiles(dh, b); load_set_tiles(dl, b);
	load_set_pal(dh + 0xC, c->tp); load_set_pal(dl + 0xC, c->tp);
	load_set_pal(dh + 0xC, pb); load_set_pal(dl + 0xC, pb);
	for (int i = 0; i < 0x10000; i++) c->own[i] = c->tv[i] == b[i];
	for (int i = 0; i < 256; i++) c->palOwn[i] = c->tp[i] == pb[i];
	c->key = key;
	return nCache++;
}

/* a chunk's own set pair (14: the right chunk's set, 15: the one below's), or -1 */
static int chunk_pair(int cx, int cy, int area) {
	int b = chunk_sets(cx, cy, area);
	if (b < 0) return -1;
	int hi = b >> 4, lo = b & 15;
	if (hi >= 14) { int n = chunk_sets(cx + (hi == 14), cy + (hi == 15), area); hi = n >= 0 ? n >> 4 : -1; }
	if (lo >= 14) { int n = chunk_sets(cx + (lo == 14), cy + (lo == 15), area); lo = n >= 0 ? n & 15 : -1; }
	if (hi < 0 || lo < 0 || hi >= 14 || lo >= 14) return -1;
	return hi << 4 | lo;
}

/* ------------------------------------------------------------ layers */
struct Layer {
	int on;                       /* drawn natively this frame */
	int idx, bg;                  /* stage layer 0-2, the BG it is on */
	s32 x, y;                     /* the GBA screen's top-left in the layer (bg.x / bg.y) */
	const u16 *tiles;             /* metatile -> 4 tilemap entries */
	const u16 *chunks;            /* chunk -> 150 metatiles */
	const u8 *map;                /* layout: stride, null, w, h, chunks */
	int stride, null, w, h;
	int backdrop;                 /* parallax (scale != 1:1): repeats sideways, top/bottom rows go on */
	int live;                     /* layer 0: the stage's metatile buffer */
	int mtCols, mtRows;
	u32 charBase;
	int gbaOn;                    /* its BG is on for the GBA screen (else: only where the chunk's handler has it) */
	int prio;                     /* BG priority while its BG is off on the GBA (the area's setting) */
};
static struct Layer layers[4];    /* by BG */
static int stageBg[4];            /* BGs a stage layer is on (drawn natively or not) */
static int vramRepeat[4];         /* a BG not drawn natively: its tilemap repeats over the view */
int view_stage_mask;

/* layers whose draw handler does not keep the BG's tilemap as the level
   (effects that fill it with something else): the GBA's BG, repeated */
static int handler_native(u32 draw, u32 update) {
	draw &= ~1u; update &= ~1u;
	if (!draw) return 0;
	if (draw == 0x0800AA44u || draw == 0x0800AC90u) return 0;   /* m3 effect layer, tile-animation layer */
	if (update == 0x0800A474u || update == 0x0800A870u) return 0;   /* still screens (metatile 0x79C / 0x80 fill) */
	return 1;
}

static int areaCur;
static s32 areaPxL, areaPxT;      /* the area's top-left, global pixels */
static int areaW, areaH;          /* chunks */

extern int view_labels;
static int label_layers(int cx, int cy);

static int find_layers(void) {
	memset(layers, 0, sizeof layers);
	memset(stageBg, 0, sizeof stageBg);
	memset(vramRepeat, 0, sizeof vramRepeat);
	view_stage_mask = 0;
	u16 dispcnt = BGREGS[0];
	if ((dispcnt & 7) != 0) return 0;
	areaCur = CUR_AREA & 0x7F;
	if (areaCur > 11) return 0;
	const u8 *d = area_desc(areaCur);
	const u8 *g = (const u8 *)(uintptr_t)*(u32 *)(d + 0x74);
	if (!rom_ptr((u32)(uintptr_t)d) || !rom_ptr((u32)(uintptr_t)g)) return 0;
	areaPxL = *(s32 *)(d + 0x6C) * 240; areaPxT = *(s32 *)(d + 0x70) * 160;
	areaW = g[2]; areaH = g[3];
	int ok0 = 0;
	for (int k = 0; k < 3; k++) {
		const u8 *s = (const u8 *)(uintptr_t)(STAGE_LAYERS + k * 0x70);
		u32 td = *(u32 *)(s + 0x20), ch = *(u32 *)(s + 0x24), mp = *(u32 *)(s + 0x28);
		int bg = (*(u32 *)(s + 0x54) >> 4) & 0xF;
		if (bg < 1 || bg > 3 || s[0x0D] != areaCur) continue;
		stageBg[bg] = 1; view_stage_mask |= 1 << bg;
		vramRepeat[bg] = 1;
		/* a layer whose BG is off on the GBA screen (the handler of the layer map
		   cell under the screen's top-left has none) is still drawn where the
		   chunks' own handlers have it (Stage_UpdateLayer): a cave's background
		   shows in the wide view before the GBA screen reaches it */
		/* on: the game has it on and so had this frame's GBA picture (the frame
		   the game turns a BG on, its tiles are loaded after the picture: its
		   registers and tiles are the next frame's) */
		int gbaOn = (dispcnt & (0x100 << bg)) && (R16(0, 0) & (0x100 << bg));
		/* (a layer off on the GBA screen is not drawn: its tiles are loaded only
		   when its handler turns it on, and its priority is unknown until then;
		   drawn from what video memory holds it showed flat bands and garbage
		   (m1's corridor). MMZ_OFF_LAYERS=1: drawn anyway, to work on it) */
		static int offLayers = -1;
		if (offLayers < 0) offLayers = getenv("MMZ_OFF_LAYERS") != NULL;
		if (!gbaOn && !offLayers && !view_labels) continue;
		if (!rom_ptr(td) || !rom_ptr(ch) || !rom_ptr(mp)) continue;
		if (gbaOn && !handler_native(*(u32 *)(s + 4), *(u32 *)s)) continue;
		struct Layer L = { 0 };
		L.gbaOn = gbaOn;
		/* the label: BGCNT as the layer's setup writes it (s+0x58 | s+0x5C | 0x6044, sub_08007850) */
		u16 cnt = (u16)(*(u32 *)(s + 0x58) | *(u32 *)(s + 0x5C) | 0x6044);
		/* priority: the game's register once it has the BG on. Before that the
		   area's setup value (cnt) is not what the layer's handler ends up
		   with (m1 cave BG3: setup 1, handler 3), so a layer not on yet goes
		   behind everything (3) */
		L.prio = (dispcnt & (0x100 << bg)) ? BGREGS[2 + bg] & 3 : 3;
		L.idx = k; L.bg = bg;
		L.backdrop = *(s32 *)(s + 0x44) != 0x100 || *(s32 *)(s + 0x48) != 0x100;
		/* the position the GBA picture was drawn with (the registers latched for
		   this picture; the struct may already hold the next frame's) */
		L.x = *(s32 *)(s + 0x14); L.y = *(s32 *)(s + 0x18);
		if (gbaOn) {
			L.x += wrap_delta(R16(0, 0x10 + bg * 4) & 0x1FF, L.x);
			L.y += wrap_delta(R16(0, 0x12 + bg * 4) & 0x1FF, L.y);
		} else {   /* (its draw handler does not run: the game's scroll rule, from the screen's position) */
			const s32 *pos = (const s32 *)(s + 0x34), *sc = (const s32 *)(s + 0x44), *of = (const s32 *)(s + 0x4C);
			L.x = (pos[0] * sc[0] >> 8) + of[0]; L.y = (pos[1] * sc[1] >> 8) + of[1];
		}
		L.tiles = (const u16 *)(uintptr_t)td;
		L.chunks = (const u16 *)(uintptr_t)ch;
		L.map = (const u8 *)(uintptr_t)mp;
		L.stride = L.map[0]; L.null = L.map[1]; L.w = L.backdrop ? L.map[2] : L.map[0]; L.h = L.map[3];
		if (!L.w || !L.h || L.w > L.stride) continue;
		L.live = k == 0 && !L.backdrop;
		L.mtCols = MT_STRIDE; L.mtRows = areaH * 10;
		/* (the game's own stride: an area up to the layout's 64 chunks wide, such as m3's 42) */
		if (L.live && (L.mtCols <= 0 || L.mtCols > 64 * 15 || (long)L.mtCols * L.mtRows > 0x10000)) continue;
		L.charBase = gbaOn ? ((BGREGS[2 + bg] >> 2) & 3) * 0x4000 : ((cnt >> 2) & 3) * 0x4000;   /* (BGCNT 0x6044 | prio | base when the handler turns it on) */
		L.on = 1;
		layers[bg] = L;
		vramRepeat[bg] = 0;
		if (!gbaOn) continue;
		if (k == 0) ok0 = 1;
	}
	return ok0;
}

static const struct Layer *layer0(void) {
	for (int b = 1; b < 4; b++) if (layers[b].on && layers[b].idx == 0) return &layers[b];
	return NULL;
}

/* the tilemap entry of a layer at a layer pixel (0: nothing there) */
static int native_entry(const struct Layer *L, s32 lx, s32 ly, u16 *out, int *fy) {
	u16 mt;
	if (L->live) {
		if (lx < 0 || ly < 0) return 0;
		int col = lx >> 4, row = ly >> 4;
		if (col >= L->mtCols || row >= L->mtRows) return 0;
		mt = MT[row * L->mtCols + col];
		/* labels: a part of the area the game has not built into its buffer
		   yet (0) is the level data's (the area's own layout) */
		if (!mt && view_labels && L->w) {
			s32 W = L->w * 240, H = L->h * 160;
			if (lx < W && ly < H) {
				int cid = L->map[4 + (ly / 160) * L->stride + lx / 240];
				if (cid != L->null) mt = L->chunks[cid * 150 + ((ly % 160) >> 4) * 15 + ((lx % 240) >> 4)];
			}
		}
	} else {
		s32 W = L->w * 240, H = L->h * 160;
		if (L->backdrop) {
			lx %= W; if (lx < 0) lx += W;
			if (ly < 0) ly = 0;
			if (ly >= H) ly = H - 1;
		} else if (lx < 0 || ly < 0 || lx >= W || ly >= H) return 0;
		int cid = L->map[4 + (ly / 160) * L->stride + lx / 240];
		if (cid == L->null) return 0;
		mt = L->chunks[cid * 150 + ((ly % 160) >> 4) * 15 + ((lx % 240) >> 4)];
	}
	*fy = ly & 7;
	*out = L->tiles[mt * 4 + ((ly >> 3) & 1) * 2 + ((lx >> 3) & 1)];
	return 1;
}

/* ------------------------------------------------------------ rooms
 *
 * The camera's room: chunks of the current area reachable from the camera's
 * chunk without crossing a level step > 1 or a level-15 chunk (where the
 * camera stops, sub_080066F8 / sub_080066AC). Worked out when the area or
 * variant changes or the camera's chunk leaves the room (a cut).
 */
static u8 room[128][128];
static u32 roomKey = ~0u;
static int roomX0, roomY0, roomX1 = -1, roomY1 = -1;   /* bounding box, chunks, inclusive */
static s32 extL, extT, extR, extB;                     /* drawn region: room box clipped by camera limits, global px */
static s32 gbaGX, gbaGY;                               /* the GBA screen's top-left, global px */

static void room_build(int sx, int sy) {
	static int qx[128 * 128], qy[128 * 128];
	memset(room, 0, sizeof room);
	roomX0 = roomY0 = 1 << 30; roomX1 = roomY1 = -1;
	int n = 0, h = 0;
	if (chunk_level(sx, sy, areaCur) != 15) { room[sy][sx] = 1; qx[n] = sx; qy[n++] = sy; }
	while (h < n) {
		int x = qx[h], y = qy[h++], lv = chunk_level(x, y, areaCur);
		if (x < roomX0) roomX0 = x; if (x > roomX1) roomX1 = x;
		if (y < roomY0) roomY0 = y; if (y > roomY1) roomY1 = y;
		static const int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k], ny = y + dy[k];
			if (nx < 0 || ny < 0 || nx >= 128 || ny >= 128 || room[ny][nx]) continue;
			int l2 = chunk_level(nx, ny, areaCur);
			if (l2 == 15 || l2 > lv + 1 || l2 < lv - 1) continue;
			room[ny][nx] = 1; qx[n] = nx; qy[n++] = ny;
		}
	}
	/* level-15 chunks of the area next to the room (the camera never centres
	   there, but they hold the walls / ground the GBA screen shows at the
	   room's edge): drawn, not walked through, not in the box */
	for (int i = 0; i < n; i++)
		for (int k = 0; k < 8; k++) {
			static const int ex[8] = { 1, -1, 0, 0, 1, 1, -1, -1 }, ey[8] = { 0, 0, 1, -1, 1, -1, 1, -1 };
			int nx = qx[i] + ex[k], ny = qy[i] + ey[k];
			if (nx < 0 || ny < 0 || nx >= 128 || ny >= 128 || room[ny][nx]) continue;
			u8 a = CHUNK_AREA[ny * 128 + nx];
			if (a > 0xEF || (a & 15) != areaCur || chunk_level(nx, ny, areaCur) != 15) continue;
			room[ny][nx] = 2;
		}
}

static int room_update(void) {
	u32 key = (u32)areaCur << 8 ^ ((AREA_STATES >> (areaCur * 2)) & 3);
	int cx = floordiv(CAMERA_X >> 8, 240), cy = floordiv(CAMERA_Y >> 8, 160);
	int changed = 0;
	if (key != roomKey || cx < 0 || cy < 0 || cx >= 128 || cy >= 128 || room[cy][cx] != 1) {
		/* from the camera's chunk, else a chunk under the GBA screen */
		int pts[5][2] = { { cx, cy }, { floordiv(gbaGX, 240), floordiv(gbaGY, 160) }, { floordiv(gbaGX + 239, 240), floordiv(gbaGY, 160) },
		                  { floordiv(gbaGX, 240), floordiv(gbaGY + 159, 160) }, { floordiv(gbaGX + 239, 240), floordiv(gbaGY + 159, 160) } };
		int built = 0;
		for (int i = 0; i < 5 && !built; i++)
			if (chunk_level(pts[i][0], pts[i][1], areaCur) != 15) { room_build(pts[i][0], pts[i][1]); built = 1; }
		if (!built) { memset(room, 0, sizeof room); roomX1 = roomY1 = -1; }
		if (key != roomKey && cacheArea != areaCur) { nCache = 0; cacheArea = areaCur; }
		roomKey = key;
		changed = 1;
		if (dbgo.logView) fprintf(stderr, "room: frame %ld area %d camera chunk %d,%d box %d..%d x %d..%d\n", frameCount, areaCur, cx, cy, roomX0, roomX1, roomY0, roomY1);
	}
	if (roomX1 < 0) { extL = gbaGX; extT = gbaGY; extR = gbaGX + SCREEN_W; extB = gbaGY + SCREEN_H; return changed; }
	extL = roomX0 * 240; extT = roomY0 * 160; extR = (roomX1 + 1) * 240; extB = (roomY1 + 1) * 160;
	/* active camera limits (modes 4/5: the screen kept inside them) */
	u8 mode = GCAMERA[0x18];
	if (mode == 4 || mode == 5) {
		s32 l = *(const s32 *)(GCAMERA + 0x5C) >> 8, r = *(const s32 *)(GCAMERA + 0x60) >> 8;
		s32 t = *(const s32 *)(GCAMERA + 0x64) >> 8, b = *(const s32 *)(GCAMERA + 0x68) >> 8;
		if (r - l >= SCREEN_W && b - t >= SCREEN_H) {
			if (l > extL) extL = l; if (r < extR) extR = r;
			if (t > extT) extT = t; if (b < extB) extB = b;
		}
	}
	/* (the GBA screen is always inside: shakes and edges) */
	if (extL > gbaGX) extL = gbaGX; if (extR < gbaGX + SCREEN_W) extR = gbaGX + SCREEN_W;
	if (extT > gbaGY) extT = gbaGY; if (extB < gbaGY + SCREEN_H) extB = gbaGY + SCREEN_H;
	return changed;
}

static inline int in_extent(s32 gx, s32 gy) {
	if (gx < extL || gx >= extR || gy < extT || gy >= extB) return 0;
	int cx = gx / 240, cy = gy / 160;
	return cx >= 0 && cy >= 0 && cx < 128 && cy < 128 && room[cy][cx];
}

/* the stage layers a chunk's layer map cell has handlers for (bit k: layer k),
   as Stage_UpdateLayer would set them up with the screen's top-left there */
static int chunk_layers(int gx, int gy, int area) {
	const u8 *d = area_desc(area);
	s32 left = *(s32 *)(d + 0x6C), top = *(s32 *)(d + 0x70);
	const u8 *map = (const u8 *)(uintptr_t)*(u32 *)(d + 0x7C);
	const u8 *hs = (const u8 *)(uintptr_t)*(u32 *)(d + 0x78);
	const u8 *g = (const u8 *)(uintptr_t)*(u32 *)(d + 0x74);
	if (!map || !rom_ptr((u32)(uintptr_t)hs)) return 7;
	int col = gx - left, row = gy - top;
	if (col < 0 || row < 0 || col >= g[2] || row >= g[3]) return 7;
	u16 cell = ((const u16 *)(map + 8))[(row << *(const u16 *)map) + col];
	int m = 0;
	for (int k = 0; k < 3; k++) {
		const u32 *h = (const u32 *)(hs + 12 * ((cell >> ((2 - k) * 4)) & 15));
		if ((h[0] || h[1]) && handler_native(h[1], h[0])) m |= 1 << k;
	}
	return m;
}
static u8 chunkLayers[128][128];

/* ------------------------------------------------------------ labels
 *
 * Every chunk of the area is labelled once (per area and progress flags)
 * with the background it belongs to: the stage layers its layer map cell
 * has handlers for and its graphics set pair, both from the level data.
 * A chunk with no layers or no pair of its own (an edge or door chunk)
 * takes its nearest labelled neighbour's in the same row/column; one with
 * none is flagged empty. The layers' BG, priority, char base and scroll
 * rule come from the layer setup (find_layers). The renderer draws a
 * chunk's labelled background outside the GBA screen whatever video memory
 * holds or the game has on. Written to MMZ_LABELS_TSV (names/ids only).
 */
#define PROGRESS ((const u8 *)0x02022AD0)
struct Label { u8 layers; short pair; u8 how; };   /* how: 0 own, 1 neighbour, 2 empty */
static struct Label labels[128][128];
static u32 labelKey = ~0u;
static int chunk_in_area(int cx, int cy) { u8 a = CHUNK_AREA[cy * 128 + cx]; return a <= 0xEF && (a & 15) == areaCur && chunk_sets(cx, cy, areaCur) >= 0; }
static u32 progress_key(void) {
	u32 h = 2166136261u;
	for (int i = 0; i < 0x1C; i++) h = (h ^ PROGRESS[i]) * 16777619u;
	h = (h ^ (AREA_STATES >> (areaCur * 2) & 3)) * 16777619u;
	h = (h ^ (u32)(uintptr_t)area_desc(areaCur)) * 16777619u;   /* (the mission: area numbers repeat across missions) */   /* the area's state (above/below ground etc.: which area descriptor) */
	return h;
}
static void labels_build(void) {
	u32 key = (u32)(CUR_AREA & 0xFF) << 24 ^ progress_key();
	if (key == labelKey) return;
	if (labelKey != ~0u && (labelKey >> 24) == (key >> 24))
		fprintf(stderr, "labels: frame %ld area %d progress/area-state flags changed (%08X -> %08X): relabelled\n", frameCount, areaCur, labelKey, key);
	labelKey = key;
	for (int cy = 0; cy < 128; cy++)
		for (int cx = 0; cx < 128; cx++) {
			struct Label *L = &labels[cy][cx];
			int inArea = chunk_in_area(cx, cy);
			L->layers = inArea ? chunk_layers(cx, cy, areaCur) & 7 : 0;
			L->pair = inArea ? chunk_pair(cx, cy, areaCur) : -1;
			if (L->layers == 7 && !inArea) L->layers = 0;
			L->how = 0;
		}
	static struct Label tmp[128][128];
	memcpy(tmp, labels, sizeof tmp);
	int nOwn = 0, nNb = 0, nEmpty = 0;
	for (int cy = 0; cy < 128; cy++)
		for (int cx = 0; cx < 128; cx++) {
			struct Label *L = &labels[cy][cx];
			if (!chunk_in_area(cx, cy)) continue;
			/* a level-15 chunk (the camera never stands there: a room's edge) has
			   no handler cell of its own that the game uses; it is shown with the
			   camera in the chunk next to it */
			int edge = chunk_level(cx, cy, areaCur) == 15;
			if (L->layers && L->pair >= 0 && !edge) { nOwn++; continue; }
			static const int d[4][2] = { { 0, -1 }, { 0, 1 }, { -1, 0 }, { 1, 0 } };
			int got = 0;
			for (int r = 1; r < 4 && !got; r++)
				for (int k = 0; k < 4 && !got; k++) {
					int nx = cx + d[k][0] * r, ny = cy + d[k][1] * r;
					if (nx < 0 || ny < 0 || nx >= 128 || ny >= 128) continue;
					const struct Label *n = &tmp[ny][nx];
					if (n->layers && n->pair >= 0 && chunk_level(nx, ny, areaCur) != 15) {
						L->layers = n->layers;
						if (L->pair < 0) L->pair = n->pair;
						L->how = 1; got = 1;
					}
				}
			if (got) nNb++; else { L->how = 2; nEmpty++; }
		}
	fprintf(stderr, "labels: frame %ld area %d key %08X own %d neighbour %d empty %d\n", frameCount, areaCur, key, nOwn, nNb, nEmpty);
	const char *path = getenv("MMZ_LABELS_TSV");
	if (path) {
		FILE *f = fopen(path, "a");
		if (f) {
			for (int cy = 0; cy < 128; cy++)
				for (int cx = 0; cx < 128; cx++) {
					if (!chunk_in_area(cx, cy)) continue;
					const struct Label *L = &labels[cy][cx];
					static const char *how[3] = { "own", "neighbour", "empty" };
					fprintf(f, "%d\t%08X:%06X\t%d\t%d\t%d\t", areaCur, (u32)(uintptr_t)area_desc(areaCur), key & 0xFFFFFF, cx, cy, L->layers);
					fprintf(f, L->pair >= 0 ? "%X%X\t" : "-\t", L->pair >> 4, L->pair & 15);
					fprintf(f, "%s", how[L->how]);
					for (int b = 1; b < 4; b++)
						if (layers[b].on) fprintf(f, "\tL%d:bg%d:p%d:c%X:s%d", layers[b].idx, b, layers[b].prio, (unsigned)layers[b].charBase >> 14, layers[b].backdrop);
					fputc('\n', f);
				}
			fclose(f);
		}
	}
}
static int label_layers(int cx, int cy) {
	if (cx < 0 || cy < 0 || cx >= 128 || cy >= 128) return 0;
	return labels[cy][cx].layers;
}


/* per chunk this frame: -1 not drawn, 0 live video memory (the loaded pair), 1 + n cache n */
static signed char chunkSrc[128][128];
static signed char chunkRom[128][128];   /* 1 + cache n: the chunk's pair decoded from the ROM, or -1 */
int view_labels = 1;   /* draw each chunk's labelled background (MMZ_LABELS=0: the old live-VRAM rule) */
static void chunk_sources(s32 vl, s32 vt, int w, int h) {
	/* the loaded pair (0x02005430) names the new sets the frame the game
	   loads them, after this frame's GBA picture was drawn: video memory is
	   half old, half new. That frame is drawn from a copy of the frame
	   before's video memory and palettes, with the pair it had (else one
	   frame of the whole view shows the wrong tiles: m1's corridor) */
	static u8 snapV[0x10000], snapP[0x200];
	static u32 lastSets = ~0u;
	u32 sets = (u32)GFX_SET_A << 16 | GFX_SET_B;
	int loading = lastSets != ~0u && sets != lastSets;
	u16 setA = loading ? lastSets >> 16 : GFX_SET_A, setB = loading ? lastSets & 0xFFFF : GFX_SET_B;
	bgv = loading ? snapV : (const u8 *)0x06000000;
	bgp = loading ? snapP : (const u8 *)0x05000000;
	if (!loading) { memcpy(snapV, vram, sizeof snapV); memcpy(snapP, pal, sizeof snapP); }
	lastSets = sets;
	{ static int init; if (!init) { init = 1; const char *e = getenv("MMZ_LABELS"); if (e) view_labels = atoi(e); } }
	if (view_labels) labels_build();
	for (int cy = floordiv(vt, 160); cy <= floordiv(vt + h - 1, 160); cy++)
		for (int cx = floordiv(vl, 240); cx <= floordiv(vl + w - 1, 240); cx++) {
			if (cx < 0 || cy < 0 || cx >= 128 || cy >= 128) continue;
			int src = -1;
			if (room[cy][cx]) {
				int p = chunk_pair(cx, cy, areaCur);
				if (p >= 0) {
					if (setA == (areaCur << 8 | p >> 4) && setB == (areaCur << 8 | (p & 15))) src = 0;
					else { int c = cache_get(areaCur, p >> 4, p & 15); src = c >= 0 ? 1 + c : -1; }
				}
			}
			chunkSrc[cy][cx] = src;
			{ int p = room[cy][cx] && view_labels ? labels[cy][cx].pair : -1; int c = p >= 0 ? cache_get(areaCur, p >> 4, p & 15) : -1; chunkRom[cy][cx] = c >= 0 ? 1 + c : -1; }
			chunkLayers[cy][cx] = src >= 0 ? chunk_layers(cx, cy, areaCur) : 0;
		}
}
/* -------------------------------------------------------------------- HUD
 *
 * The HUD layer (BG0) is split into its separate elements (tiles that touch
 * each other), and each is moved towards the view's edges by where it is on
 * the GBA screen: in the left (right) half to the left (right) edge, in the
 * top (bottom) half to the top (bottom) edge. Elements across the middle,
 * such as text boxes (which go with portrait sprites), stay where they are.
 */
int view_hud_edges = 1;
static u16 *hudBuf;
static inline u16 tile_pixel(u16 e, u32 charBase, int fx, int fy);              /* BG0 in view coordinates, view_w x view_h */

static int tile_empty(u16 e, u32 charBase) {
	u32 a = charBase + (e & 0x3FF) * 32;
	if (a + 32 > 0x10000) return 1;
	for (int i = 0; i < 32; i++)
		if (vram[a + i]) return 0;
	return 1;
}

static void draw_hud(int w, int h, int ox, int oy) {
	hudBuf = realloc(hudBuf, (size_t)w * h * 2);
	for (size_t i = 0; i < (size_t)w * h; i++) hudBuf[i] = TRANSPARENT;
	u16 cnt = R16(0, 0x08);
	u32 charBase = ((cnt >> 2) & 3) * 0x4000;
	int hofs = R16(0, 0x10) & 0x1FF, vofs = R16(0, 0x12) & 0x1FF;
	/* the visible tiles (31x21 with the scroll's fraction) */
	enum { TW = 31, TH = 21 };
	u16 ent[TH][TW];
	signed char comp[TH][TW];
	int fx = hofs & 7, fy = vofs & 7;
	for (int ty = 0; ty < TH; ty++)
		for (int tx = 0; tx < TW; tx++) {
			ent[ty][tx] = vram_entry(0, 0, (hofs & ~7) + tx * 8, (vofs & ~7) + ty * 8);
			comp[ty][tx] = tile_empty(ent[ty][tx], charBase) ? -1 : 0;
		}
	/* elements: 4-connected groups of tiles, with their bounds */
	int bl[64], br[64], bt[64], bb[64], n = 0;
	static int stackX[TW * TH], stackY[TW * TH];
	for (int ty = 0; ty < TH; ty++)
		for (int tx = 0; tx < TW; tx++) {
			if (comp[ty][tx] != 0 || n == 63) continue;
			int id = ++n, sp = 0, x0 = tx, x1 = tx, y0 = ty, y1 = ty;
			comp[ty][tx] = id;
			stackX[sp] = tx; stackY[sp++] = ty;
			while (sp) {
				int x = stackX[--sp], y = stackY[sp];
				if (x < x0) x0 = x;
				if (x > x1) x1 = x;
				if (y < y0) y0 = y;
				if (y > y1) y1 = y;
				static const int nx[4] = { 1, -1, 0, 0 }, ny[4] = { 0, 0, 1, -1 };
				for (int k = 0; k < 4; k++) {
					int ax = x + nx[k], ay = y + ny[k];
					if (ax < 0 || ay < 0 || ax >= TW || ay >= TH || comp[ay][ax] != 0) continue;
					comp[ay][ax] = id;
					stackX[sp] = ax; stackY[sp++] = ay;
				}
			}
			bl[id] = x0 * 8 - fx; br[id] = (x1 + 1) * 8 - fx; bt[id] = y0 * 8 - fy; bb[id] = (y1 + 1) * 8 - fy;
		}
	/* boxes that keep what is in them in place: wide elements (text boxes)
	   and the windows (dialogs) */
	int boxL[66], boxR[66], boxT[66], boxB[66], nb = 0;
	for (int id = 1; id <= n; id++)
		if (br[id] - bl[id] >= SCREEN_W / 2) { boxL[nb] = bl[id]; boxR[nb] = br[id]; boxT[nb] = bt[id]; boxB[nb++] = bb[id]; }
	u16 dispcnt = R16(80, 0);
	for (int k = 0; k < 2; k++)
		if (dispcnt & (0x2000 << k)) {
			u16 wh = R16(80, 0x40 + k * 2), wv = R16(80, 0x44 + k * 2);
			boxL[nb] = wh >> 8; boxR[nb] = wh & 0xFF; boxT[nb] = wv >> 8; boxB[nb] = wv & 0xFF;
			/* a text box: wide, but not most of the screen (the game also
			   puts windows around the HP bar and over the whole field) */
			int bw = boxR[nb] - boxL[nb], bh = boxB[nb] - boxT[nb];
			if (bw >= SCREEN_W / 2 && bh > 0 && bw * bh < SCREEN_W * SCREEN_H * 3 / 4) nb++;
		}
	int dx[64], dy[64];
	for (int id = 1; id <= n; id++) {
		int sx = 0, sy = 0, held = 0;
		for (int k = 0; k < nb; k++)
			if (bl[id] < boxR[k] && br[id] > boxL[k] && bt[id] < boxB[k] && bb[id] > boxT[k]) held = 1;
		/* narrow elements (the life gauge and its icons) always go to the
		   edges: windows some stages use for effects would hold them */
		if (br[id] - bl[id] < 24) held = 0;
		if (view_hud_edges && !held) {
			/* by the element's centre (the life gauge is tall) */
			int mx = (bl[id] + br[id]) / 2, my = (bt[id] + bb[id]) / 2;
			int wide = br[id] - bl[id] >= SCREEN_W / 2;   /* across the screen: stays left-right */
			if (!wide && mx < SCREEN_W / 2) sx = -ox;
			else if (!wide) sx = w - SCREEN_W - ox;
			if (my < SCREEN_H / 2) sy = -oy;
			else sy = h - SCREEN_H - oy;
		}
		dx[id] = sx;
		dy[id] = sy;
	}
	/* draw the tiles, inside the GBA screen's area, moved */
	for (int ty = 0; ty < TH; ty++)
		for (int tx = 0; tx < TW; tx++) {
			int id = comp[ty][tx];
			if (id <= 0) continue;
			for (int y = 0; y < 8; y++) {
				int gy = ty * 8 - fy + y;
				if (gy < 0 || gy >= SCREEN_H) continue;
				int vy = gy + oy + dy[id];
				if (vy < 0 || vy >= h) continue;
				for (int x = 0; x < 8; x++) {
					int gx = tx * 8 - fx + x;
					if (gx < 0 || gx >= SCREEN_W) continue;
					int vx = gx + ox + dx[id];
					if (vx < 0 || vx >= w) continue;
					hudBuf[(size_t)vy * w + vx] = tile_pixel(ent[ty][tx], charBase, x, y);
				}
			}
		}
}

/* 1 if the HUD (BG0) has a pixel at this GBA screen position */
static int hud_pixel(int x, int y) {
	if (!(R16(y, 0) & 0x100)) return 0;
	u16 cnt = R16(y, 0x08);
	int px = x + (R16(y, 0x10) & 0x1FF), py = y + (R16(y, 0x12) & 0x1FF);
	return !(tile_pixel(vram_entry(0, y, px, py), ((cnt >> 2) & 3) * 0x4000, px & 7, py & 7) & TRANSPARENT);
}


/* ---------------------------------------------------------------- drawing */

static void render_row(int vy);
/* row buffers: one set per drawing thread */
static __thread u16 *bgRow[4];
static __thread u16 *objColor;
static __thread u8 *objPrio, *objSemi, *objWin;
static __thread int rowCap;

static void ensure_buffers(int w) {
	if (w <= rowCap) return;
	for (int i = 0; i < 4; i++) bgRow[i] = realloc(bgRow[i], w * 2);
	objColor = realloc(objColor, w * 2);
	objPrio = realloc(objPrio, w);
	objSemi = realloc(objSemi, w);
	objWin = realloc(objWin, w);
	rowCap = w;
}

static inline u16 tile_pixel(u16 e, u32 charBase, int fx, int fy) {
	if (e & 0x400) fx = 7 - fx;
	if (e & 0x800) fy = 7 - fy;
	u32 a = charBase + (e & 0x3FF) * 32 + fy * 4 + (fx >> 1);
	if (a >= 0x10000) return TRANSPARENT;
	u8 idx = (bgv[a] >> ((fx & 1) * 4)) & 15;
	return idx ? BGPAL16((e >> 12) * 16 + idx) & 0x7FFF : TRANSPARENT;
}

/* a pixel with a chunk's own graphics: src 0 live, 1 + n cache n */
static inline u16 nat_pixel(int src, u16 e, u32 charBase, int fx, int fy) {
	if (src <= 0) return tile_pixel(e, charBase, fx, fy);
	const struct GfxCache *c = &gcache[src - 1];
	if (e & 0x400) fx = 7 - fx;
	if (e & 0x800) fy = 7 - fy;
	u32 a = charBase + (e & 0x3FF) * 32 + fy * 4 + (fx >> 1);
	if (a >= 0x10000) return TRANSPARENT;
	u8 idx = ((c->own[a] ? c->tv[a] : bgv[a]) >> ((fx & 1) * 4)) & 15;
	if (!idx) return TRANSPARENT;
	int pi = (e >> 12) * 16 + idx;
	return (c->palOwn[pi] ? c->tp[pi] : BGPAL16(pi)) & 0x7FFF;
}

/* a stage layer's view row: each pixel where the game's scroll rule puts it,
   with the graphics of the chunk at the pixel's place in the world (layer
   0's position: the sets the game loads with its camera there) */
static void draw_native_row(const struct Layer *L, int vy, int ox, int oy, u16 *out, int w) {
	int l = vy - oy;
	s32 ly = L->y + l, lx0 = L->x - ox;
	if (fx[L->bg].kind) {
		int hh, vv;
		fx_regs(&fx[L->bg], l, &hh, &vv);
		ly = L->y + wrap_delta(vv & 0x1FF, L->y) + l;
		lx0 = L->x + wrap_delta(hh & 0x1FF, L->x) - ox;
	}
	s32 gy = gbaGY + l;
	int cy = floordiv(gy, 160);
	int inGbaRow = l >= 0 && l < SCREEN_H;
	for (int vx = 0; vx < w;) {
		s32 gx = gbaGX + (vx - ox);
		int cx = floordiv(gx, 240);
		/* a run: same 8-pixel tile column of the layer and the same chunk */
		s32 lx = lx0 + vx;
		int run = 8 - (lx & 7);
		int toChunk = (cx + 1) * 240 - gx;
		if (run > toChunk) run = toChunk;
		if (inGbaRow && vx < ox && vx + run > ox) run = ox - vx;
		if (inGbaRow && vx < ox + SCREEN_W && vx + run > ox + SCREEN_W) run = ox + SCREEN_W - vx;
		int src = cx >= 0 && cy >= 0 && cx < 128 && cy < 128 ? chunkSrc[cy][cx] : -1;
		/* on the GBA screen: the loaded sets, as the game shows it, and the
		   layer as the GBA has it; a layer off on the GBA screen only where the
		   chunk's handlers have it (a handler is picked by the screen's top-left,
		   so a layer that is on is not cut at chunks whose own handler differs) */
		int onGba = inGbaRow && vx >= ox && vx < ox + SCREEN_W;
		if (onGba && src > 0) src = 0;
		/* labels: outside the GBA screen, the chunk's labelled background from
		   the ROM-decoded pair, whatever video memory holds */
		if (view_labels && !onGba && src >= 0 && chunkRom[cy][cx] > 0) src = chunkRom[cy][cx];
		if (src >= 0 && !onGba && view_labels && !(label_layers(cx, cy) >> L->idx & 1)) src = -1;
		else if (src >= 0 && !L->gbaOn && (onGba || !(chunkLayers[cy][cx] >> L->idx & 1))) src = -1;
		u16 e; int ty;
		if (src < 0 || !native_entry(L, lx, ly, &e, &ty)) {
			for (int k = 0; k < run && vx < w; k++) out[vx++] = TRANSPARENT;
			continue;
		}
		int fxp = lx & 7;
		for (int k = 0; k < run && vx < w; k++) out[vx++] = nat_pixel(src, e, L->charBase, fxp++, ty);
	}
}
/* a text BG's row from video memory (backgrounds behind the stage): its
   tilemap repeats, as the GBA's does when it scrolls, so it covers the view;
   rows outside the GBA screen use the nearest GBA line's scroll */
static void draw_vram_row(int bg, int line, int vy, int oy, int ox, u16 *out, int w) {
	int l = vy - oy;
	/* a stage layer the level data could not draw this frame (it is being
	   rebuilt): its tilemap holds only what is around the GBA screen */
	int gbaOnly = 0;
	if (gbaOnly && (l < 0 || l >= SCREEN_H)) { for (int x = 0; x < w; x++) out[x] = TRANSPARENT; return; }
	u16 cnt = R16(line, 0x08 + bg * 2);
	if (cnt & 0x80) { for (int x = 0; x < w; x++) out[x] = TRANSPARENT; return; }   /* (256-colour layers: not in stages) */
	u32 charBase = ((cnt >> 2) & 3) * 0x4000;
	int hofs = R16(line, 0x10 + bg * 4) & 0x1FF, vofs = R16(line, 0x12 + bg * 4) & 0x1FF;
	/* rows beyond the GBA screen repeat its first or last line (games scroll
	   such layers line by line for gradients) */
	int py = (l < 0 ? 0 : l >= SCREEN_H ? SCREEN_H - 1 : l) + vofs;
	if (vramRepeat[bg]) py = l + vofs;   /* (it repeats up and down too) */
	if (fx[bg].kind) { fx_regs(&fx[bg], l, &hofs, &vofs); py = l + vofs; }
	for (int vx = 0; vx < w; vx++) {
		if (gbaOnly && (vx < ox || vx >= ox + SCREEN_W)) { out[vx] = TRANSPARENT; continue; }
		int px = vx - ox + hofs;
		u16 e = vram_entry(bg, line, px, py);
		out[vx] = tile_pixel(e, charBase, px & 7, py & 7);
	}
}

/* a BG's pixels on GBA line l, from video memory, into the view row at ox */
static void gba_vram_span(int bg, int l, int ox, u16 *out, int w) {
	u16 cnt = R16(l, 0x08 + bg * 2);
	if (cnt & 0x80) return;
	u32 charBase = ((cnt >> 2) & 3) * 0x4000;
	int hofs = R16(l, 0x10 + bg * 4) & 0x1FF, vofs = R16(l, 0x12 + bg * 4) & 0x1FF;
	int py = l + vofs;
	for (int x = 0; x < SCREEN_W; x++) {
		int vx = x + ox;
		if (vx < 0 || vx >= w) continue;
		int px = x + hofs;
		out[vx] = tile_pixel(vram_entry(bg, l, px, py), charBase, px & 7, py & 7);
	}
}

static const u8 sObjSize[3][4][2] = {
	{ { 8, 8 }, { 16, 16 }, { 32, 32 }, { 64, 64 } },
	{ { 16, 8 }, { 32, 8 }, { 32, 16 }, { 64, 32 } },
	{ { 8, 16 }, { 8, 32 }, { 16, 32 }, { 32, 64 } },
};


/* the sprites on a view row; OAM positions are relative to the GBA screen */
static void draw_sprite_row(int line, int vy, int ox, int oy, int w) {
	u16 dispcnt = R16(line, 0);
	int oneD = dispcnt & 0x40;
	for (int x = 0; x < w; x++) { objColor[x] = TRANSPARENT; objPrio[x] = 4; objSemi[x] = 0; objWin[x] = 0; }
	int ry = vy - oy;   /* the row in GBA screen coordinates */
	/* the extended list (sprites.c) when there is one, else OAM */
	int count = view_sprite_count >= 0 ? view_sprite_count : 128;
	for (int i = 0; i < count; i++) {
		u16 a0, a1, a2;
		int sx, sy;
		if (view_sprite_count >= 0) {
			const struct ExtSprite *e = &view_sprites[i];
			a0 = e->a0; a1 = e->a1; a2 = e->a2;
			sx = e->x; sy = e->y;
		} else {
			a0 = *(u16 *)(oam + i * 8); a1 = *(u16 *)(oam + i * 8 + 2); a2 = *(u16 *)(oam + i * 8 + 4);
			sy = a0 & 0xFF;
			if (sy >= 160 + 32) sy -= 256;       /* above the screen */
			sx = a1 & 0x1FF;
			if (sx >= 240 + 64) sx -= 512;       /* left of the screen */
		}
		int affine = a0 & 0x100;
		if (!affine && (a0 & 0x200)) continue;
		int mode = (a0 >> 10) & 3, shape = a0 >> 14;
		if (mode == 3 || shape == 3) continue;
		int sw = sObjSize[shape][a1 >> 14][0], sh = sObjSize[shape][a1 >> 14][1];
		int bw = sw, bh = sh;
		if (affine && (a0 & 0x200)) { bw *= 2; bh *= 2; }
		int iy = ry - sy;
		if (iy < 0 || iy >= bh) continue;
		int bpp8 = a0 & 0x2000;
		u32 tileBase = a2 & 0x3FF;
		int prio = (a2 >> 10) & 3, palBank = a2 >> 12;
		s32 pa = 256, pb = 0, pc = 0, pd = 256;
		if (affine) {
			int m = (a1 >> 9) & 31;
			pa = *(s16 *)(oam + m * 32 + 6); pb = *(s16 *)(oam + m * 32 + 14);
			pc = *(s16 *)(oam + m * 32 + 22); pd = *(s16 *)(oam + m * 32 + 30);
		}
		for (int bx = 0; bx < bw; bx++) {
			int px = sx + bx + ox;
			if (px < 0 || px >= w) continue;
			int tx, ty;
			if (affine) {
				int dx = bx - bw / 2, dy = iy - bh / 2;
				tx = ((pa * dx + pb * dy) >> 8) + sw / 2;
				ty = ((pc * dx + pd * dy) >> 8) + sh / 2;
				if (tx < 0 || ty < 0 || tx >= sw || ty >= sh) continue;
			} else {
				tx = (a1 & 0x1000) ? sw - 1 - bx : bx;
				ty = (a1 & 0x2000) ? sh - 1 - iy : iy;
			}
			u32 tileNum = oneD ? tileBase + ((ty >> 3) * (sw >> 3) + (tx >> 3)) * (bpp8 ? 2 : 1)
			                   : tileBase + (ty >> 3) * 32 + (tx >> 3) * (bpp8 ? 2 : 1);
			tileNum &= 0x3FF;
			u16 c;
			if (bpp8) {
				u8 idx = vram[0x10000 + tileNum * 32 + (ty & 7) * 8 + (tx & 7)];
				if (!idx) continue;
				c = PAL16(256 + idx) & 0x7FFF;
			} else {
				u8 idx = (vram[0x10000 + tileNum * 32 + (ty & 7) * 4 + ((tx & 7) >> 1)] >> ((tx & 1) * 4)) & 15;
				if (!idx) continue;
				c = PAL16(256 + palBank * 16 + idx) & 0x7FFF;
			}
			if (mode == 2) { objWin[px] = 1; continue; }
			if ((objColor[px] & TRANSPARENT) || prio < objPrio[px]) {
				objColor[px] = c; objPrio[px] = prio; objSemi[px] = mode == 1;
			}
		}
	}
}

static u16 blend(u16 a, u16 b, int eva, int evb) {
	int r = ((a & 31) * eva + (b & 31) * evb) >> 4;
	int g = (((a >> 5) & 31) * eva + ((b >> 5) & 31) * evb) >> 4;
	int bl = (((a >> 10) & 31) * eva + ((b >> 10) & 31) * evb) >> 4;
	return (r > 31 ? 31 : r) | (g > 31 ? 31 : g) << 5 | (bl > 31 ? 31 : bl) << 10;
}
static u16 brighten(u16 a, int evy) {
	int r = a & 31, g = (a >> 5) & 31, b = (a >> 10) & 31;
	r += ((31 - r) * evy) >> 4; g += ((31 - g) * evy) >> 4; b += ((31 - b) * evy) >> 4;
	return r | g << 5 | b << 10;
}
static u16 darken(u16 a, int evy) {
	int r = a & 31, g = (a >> 5) & 31, b = (a >> 10) & 31;
	r -= (r * evy) >> 4; g -= (g * evy) >> 4; b -= (b * evy) >> 4;
	return r | g << 5 | b << 10;
}
static u32 to_rgb(u16 c) {
	u32 r = c & 31, g = (c >> 5) & 31, b = (c >> 10) & 31;
	return ((r << 3) | (r >> 2)) << 16 | ((g << 3) | (g >> 2)) << 8 | ((b << 3) | (b >> 2));
}
static int in_range(int v, int a, int b, int max) {
	if (b > max || a > b) b = max;
	return v >= a && v < b;
}

/* Is view pixel (x, vy) inside window k (0/1) as the game set it on GBA line
   `line`? A window over the GBA screen's whole width (or height) covers the
   whole view that way: stages open one over the full screen for effects (rain,
   fog, light) and would otherwise show them in a 240x160 box. Smaller windows
   (dialogs, the HP bar) stay where the game put them. */
static int win_hit(int k, int line, int x, int vy, int ox, int oy) {
	u16 wh = R16(line, 0x40 + k * 2), wv = R16(line, 0x44 + k * 2);
	int l = wh >> 8, r = wh & 0xFF, t = wv >> 8, b = wv & 0xFF;
	int fullX = l == 0 && r >= SCREEN_W, fullY = t == 0 && b >= SCREEN_H;
	int sx = x - ox, ly = vy - oy;
	int inX = fullX || (sx >= 0 && sx < SCREEN_W && in_range(sx, l, r, SCREEN_W));
	int inY = fullY || (ly >= 0 && ly < SCREEN_H && in_range(ly, t, b, SCREEN_H));
	return inX && inY;
}

/* Draws the view; 0 if this frame is not a stage (the GBA picture is shown). */
static int cells(int pixels, int cell) { return pixels > 0 ? (pixels + cell - 1) / cell : 0; }

/* Enemy spawning and culling (the spawn manager, sub_0800E02C) reach as far
   beyond the view as they reach beyond the GBA screen in the original. */
int port_imm_SPAWN_RANGE_X = 12, port_imm_SPAWN_RANGE_Y = 10, port_imm_SPAWN_WINDOW_Y = 19;
int port_imm_CULL_RANGE_X = 0xD0, port_imm_CULL_WINDOW_X = 0x19FFF, port_imm_CULL_RANGE_Y = 0xC0, port_imm_CULL_WINDOW_Y = 0x17FFF;

static void set_ranges(int w, int h) {
	int ex = w > SCREEN_W ? (w - SCREEN_W) / 2 : 0, ey = h > SCREEN_H ? (h - SCREEN_H) / 2 : 0;
	port_imm_SPAWN_RANGE_X = 12 + (ex + 15) / 16;
	port_imm_SPAWN_RANGE_Y = 10 + (ey + 15) / 16;
	port_imm_SPAWN_WINDOW_Y = 2 * port_imm_SPAWN_RANGE_Y - 1;
	port_imm_CULL_RANGE_X = 0xD0 + ex;
	port_imm_CULL_WINDOW_X = (0xD0 + ex) * 256 * 2 - 1;
	port_imm_CULL_RANGE_Y = 0xC0 + ey;
	port_imm_CULL_WINDOW_Y = (0xC0 + ey) * 256 * 2 - 1;
}

/* ------------------------------------------------------------ threads
 *
 * The view's rows are drawn by several threads (each row only reads the
 * frame's state). */
static int rw, rh, rox, roy;   /* the frame being drawn */
int view_level_only;   /* the GBA screen's part from the level data too (viewcheck) */
int view_gba_pasted;   /* the last frame has the GBA picture pasted in (not drawable) */

#define MAX_THREADS 8
static int nThreads;               /* workers besides the game's thread */
static SDL_sem *startSem, *doneSem;
static SDL_atomic_t nextRow;

static void render_some(void) {
	for (int vy; (vy = SDL_AtomicAdd(&nextRow, 1)) < rh;) render_row(vy);
}

static int worker(void *arg) {
	(void)arg;
	for (;;) {
		SDL_SemWait(startSem);
		render_some();
		SDL_SemPost(doneSem);
	}
	return 0;
}

static void render_rows(int w, int h, int ox, int oy) {
	static int started;
	if (!started) {
		started = 1;
		int cpus = SDL_GetCPUCount();
		nThreads = cpus > 1 ? (cpus - 1 < MAX_THREADS ? cpus - 1 : MAX_THREADS) : 0;
		if (getenv("MMZ_THREADS")) nThreads = atoi(getenv("MMZ_THREADS"));
		startSem = SDL_CreateSemaphore(0);
		doneSem = SDL_CreateSemaphore(0);
		for (int i = 0; i < nThreads; i++) SDL_DetachThread(SDL_CreateThread(worker, "view", NULL));
	}
	rw = w; rh = h; rox = ox; roy = oy;
	SDL_AtomicSet(&nextRow, 0);
	for (int i = 0; i < nThreads; i++) SDL_SemPost(startSem);
	render_some();
	for (int i = 0; i < nThreads; i++) SDL_SemWait(doneSem);
}


static int hud_pixel(int x, int y);
int view_native_only;   /* (debug) the GBA screen's part outside the room from the model too, not the GBA picture */

static void render_row(int vy) {
	int w = rw, ox = rox, oy = roy;
	ensure_buffers(w);
	int line = vy - oy;
	int inRow = line >= 0 && line < SCREEN_H;
	if (line < 0) line = 0;
	if (line >= SCREEN_H) line = SCREEN_H - 1;
	u32 *dst = view_frame + (size_t)vy * w;
	u8 *lay = view_layers + (size_t)vy * w;
	u16 dispcnt = R16(line, 0);
	if (dispcnt & 0x80) { for (int x = 0; x < w; x++) { dst[x] = 0xFFFFFF; lay[x] = 0x55; } return; }
	int bgOn[4];
	for (int bg = 0; bg < 4; bg++) {
		bgOn[bg] = ((dispcnt & (0x100 << bg)) || layers[bg].on) && (debug.layerMask & (1 << bg));
		if (!bgOn[bg]) continue;
		if (layers[bg].on) draw_native_row(&layers[bg], vy, ox, oy, bgRow[bg], w);
		else if (bg == 0) memcpy(bgRow[0], hudBuf + (size_t)vy * w, w * 2);
		else draw_vram_row(bg, line, vy, oy, ox, bgRow[bg], w);
	}
	int objOn = (dispcnt & 0x1000) && (debug.layerMask & 0x10);
	if (objOn || (dispcnt & 0x8000)) draw_sprite_row(line, vy, ox, oy, w);
	int windows = dispcnt & 0xE000;
	u16 winin = R16(line, 0x48), winout = R16(line, 0x4A);
	u16 bldcnt = R16(line, 0x50), bldalpha = R16(line, 0x52);
	int effect = (bldcnt >> 6) & 3;
	int eva = bldalpha & 31, evb = (bldalpha >> 8) & 31, evy = R16(line, 0x54) & 31;
	if (eva > 16) eva = 16;
	if (evb > 16) evb = 16;
	if (evy > 16) evy = 16;
	int bgPrio[4];
	for (int bg = 0; bg < 4; bg++) bgPrio[bg] = layers[bg].on && !(dispcnt & (0x100 << bg)) ? layers[bg].prio : R16(line, 0x08 + bg * 2) & 3;   /* (a BG off in this line's picture: its latched BGCNT is stale) */
	u16 backdrop = PAL16(0) & 0x7FFF;
	s32 gy = gbaGY + (vy - oy);
	for (int x = 0; x < w; x++) {
		int inGba = inRow && x >= ox && x < ox + SCREEN_W;
		s32 gx = gbaGX + (x - ox);
		if (!in_extent(gx, gy)) {
			/* outside the room: black; on the GBA screen (the next area's
			   edge the game draws, a door's far side) the GBA picture */
			if (inGba && !view_native_only && !hud_pixel(x - ox, vy - oy)) { dst[x] = ppu_frame[(vy - oy) * SCREEN_W + x - ox]; lay[x] = 0x66; }
			else { dst[x] = 0; lay[x] = 0x77; }
			continue;
		}
		int ctl = 0x3F;
		if (windows) {
			if ((dispcnt & 0x2000) && win_hit(0, line, x, vy, ox, oy)) ctl = winin & 0x3F;
			else if ((dispcnt & 0x4000) && win_hit(1, line, x, vy, ox, oy)) ctl = (winin >> 8) & 0x3F;
			else if ((dispcnt & 0x8000) && objWin[x]) ctl = (winout >> 8) & 0x3F;
			else ctl = winout & 0x3F;
		}
		int layer[2] = { 5, 5 };
		u16 color[2] = { backdrop, backdrop };
		int n = 0;
		for (int p = 0; p < 4 && n < 2; p++) {
			if (objOn && (ctl & 0x10) && !(objColor[x] & TRANSPARENT) && objPrio[x] == p) { layer[n] = 4; color[n] = objColor[x]; n++; }
			for (int bg = 0; bg < 4 && n < 2; bg++)
				if (bgOn[bg] && bgPrio[bg] == p && (ctl & (1 << bg)) && !(bgRow[bg][x] & TRANSPARENT)) { layer[n] = bg; color[n] = bgRow[bg][x]; n++; }
		}
		u16 c = color[0];
		if (ctl & 0x20) {
			int secondTarget = bldcnt & (0x100 << layer[1]);
			if (layer[0] == 4 && objSemi[x] && secondTarget) c = blend(color[0], color[1], eva, evb);
			else if (bldcnt & (1 << layer[0])) {
				if (effect == 1 && secondTarget) c = blend(color[0], color[1], eva, evb);
				else if (effect == 2) c = brighten(color[0], evy);
				else if (effect == 3) c = darken(color[0], evy);
			}
		}
		dst[x] = to_rgb(c);
		lay[x] = layer[0] | layer[1] << 4;
	}
}

/* ------------------------------------------------------------ fit
 *
 * Square pixels; the view's height fits the room's height, its width
 * follows the window's shape; never above the size asked for. The target
 * changes only with the room, and the size eases only then.
 */
int view_asked_w, view_asked_h;
#define FIT_UNFILLED 4   /* % of the view outside the GBA screen the fit lets stay unfilled */
int view_fit_w, view_fit_h;   /* 0: no fit */
int view_fit_gba;             /* a room no bigger than the GBA screen one way and two the other: the GBA picture */
/* the room's extent across a span of the world: rows (cols) of room chunks in
   the columns (rows) the span covers, clipped to the drawn region, px.
   A room is often not a rectangle (a corridor with a shaft at its end): its
   bounding box says nothing about how tall the world is around the camera. */
static void local_span(int vertical, s32 a0, int n, s32 *lo, s32 *hi) {
	int c0 = vertical ? floordiv(a0, 240) : floordiv(a0, 160), c1 = vertical ? floordiv(a0 + n - 1, 240) : floordiv(a0 + n - 1, 160);
	int m0 = 1 << 30, m1 = -1;
	for (int c = c0; c <= c1; c++) {
		if (c < 0 || c >= 128) continue;
		for (int k = 0; k < 128; k++)
			if (vertical ? room[k][c] : room[c][k]) { if (k < m0) m0 = k; if (k > m1) m1 = k; }
	}
	if (m1 < 0) { *lo = vertical ? gbaGY : gbaGX; *hi = *lo + (vertical ? SCREEN_H : SCREEN_W); return; }
	*lo = m0 * (vertical ? 160 : 240); *hi = (m1 + 1) * (vertical ? 160 : 240);
	if (vertical) { if (*lo < extT) *lo = extT; if (*hi > extB) *hi = extB; if (*lo > gbaGY) *lo = gbaGY; if (*hi < gbaGY + SCREEN_H) *hi = gbaGY + SCREEN_H; }
	else { if (*lo < extL) *lo = extL; if (*hi > extR) *hi = extR; if (*lo > gbaGX) *lo = gbaGX; if (*hi < gbaGX + SCREEN_W) *hi = gbaGX + SCREEN_W; }
}
/* the left edge of a view w wide: the GBA screen centred, kept in [lo, hi) where that is wider */
static s32 place_axis(s32 g, int screen, int w, s32 lo, s32 hi) {
	s32 a = g - (w - screen) / 2;
	if (hi - lo >= w) { if (a < lo) a = lo; if (a > hi - w) a = hi - w; }
	else a = lo + (hi - lo - w) / 2;
	if (a > g) a = g;
	if (a + w < g + screen) a = g + screen - w;
	return a;
}

/* pixels of a view (left, top, w, h) that nothing would be drawn in: outside
   the drawn region or the room, or in a chunk whose graphics sets are unknown */
static int drawable(int cx, int cy) {
	if (cx < 0 || cy < 0 || cx >= 128 || cy >= 128 || !room[cy][cx]) return 0;
	return chunk_pair(cx, cy, areaCur) >= 0 && chunk_layers(cx, cy, areaCur);   /* (no layer: black) */
}
static long view_unfilled(s32 left, s32 top, int w, int h) {
	long filled = 0;
	s32 r = left + w, b = top + h;
	for (int cy = floordiv(top, 160); cy <= floordiv(b - 1, 160); cy++)
		for (int cx = floordiv(left, 240); cx <= floordiv(r - 1, 240); cx++) {
			if (!drawable(cx, cy)) continue;
			s32 x0 = cx * 240, x1 = x0 + 240, y0 = cy * 160, y1 = y0 + 160;
			if (x0 < left) x0 = left; if (x0 < extL) x0 = extL; if (x1 > r) x1 = r; if (x1 > extR) x1 = extR;
			if (y0 < top) y0 = top; if (y0 < extT) y0 = extT; if (y1 > b) y1 = b; if (y1 > extB) y1 = extB;
			if (x1 > x0 && y1 > y0) filled += (long)(x1 - x0) * (y1 - y0);
		}
	return (long)w * h - filled;
}
/* one axis of the placement: of the places that keep the GBA screen inside
   the view, the one with the fewest unfilled pixels, then the one nearest
   the GBA screen centred (a column at the view's edge that reaches further
   down must not pull the whole view into the black under its neighbours) */
static s32 place_best(int vertical, s32 other, int w, int h) {
	s32 g = vertical ? gbaGY : gbaGX;
	int n = vertical ? h : w, screen = vertical ? SCREEN_H : SCREEN_W;
	s32 c = g - (n - screen) / 2, best = c;
	long bc = -1;
	int span = n - screen, step = span > 64 ? 4 : 1;
	for (int k = 0; k <= span; k += step) {
		s32 a = g + screen - n + k;
		if (k + step > span) a = g;   /* (the last place: the GBA screen at the start) */
		long u = vertical ? view_unfilled(other, a, w, h) : view_unfilled(a, other, w, h);
		s32 d = a > c ? a - c : c - a, bd = best > c ? best - c : c - best;
		if (bc < 0 || u < bc || (u == bc && d < bd)) { bc = u; best = a; }
	}
	return best;
}
/* the view's placement for a size: sideways, up/down, sideways again */
static void place_view(int w, int h, s32 *left, s32 *top) {
	s32 l = place_axis(gbaGX, SCREEN_W, w, extL, extR);
	s32 t = place_best(1, l, w, h);
	l = place_best(0, t, w, h);
	t = place_best(1, l, w, h);
	*left = l; *top = t;
}

static void fit_target(void) {
	view_fit_w = view_fit_h = view_fit_gba = 0;
	if (roomX1 < 0) return;
	int bw = (roomX1 - roomX0 + 1) * 240, bh = (roomY1 - roomY0 + 1) * 160;
	if (settings.fitRooms && ((bw <= 2 * 240 && bh <= 160) || (bw <= 240 && bh <= 2 * 160))) view_fit_gba = 1;
	if (!settings.fitRooms) return;
	/* the world's height around the camera: the room's rows under the widest
	   view asked for, placed as it would be (square pixels: the view's height
	   fits that, its width follows the window's shape); the span is the
	   current view's, so a taller part at the far edge of the widest view
	   does not zoom out over a strip of black */
	/* the tallest view (of the window's shape, at most the size asked for)
	   that, placed at its best, leaves at most FIT_UNFILLED of what is
	   outside the GBA screen unfilled */
	int aw = view_asked_w > SCREEN_W ? view_asked_w : view_w, ah = view_asked_h > SCREEN_H ? view_asked_h : view_h;
	view_fit_w = bw;
	view_fit_h = SCREEN_H;
	for (int h = ah; h > SCREEN_H; h -= 16) {
		int w = (int)((long)h * aw / ah);
		if (w < SCREEN_W) w = SCREEN_W;
		s32 l, t;
		place_view(w, h, &l, &t);
		long out = (long)w * h - SCREEN_W * SCREEN_H;
		if (view_unfilled(l, t, w, h) * 100 <= out * FIT_UNFILLED) { view_fit_h = h; break; }
	}
}

void view_fit_apply(int *w, int *h) {
	static float cw, ch;
	int tw = *w, th = *h;
	view_asked_w = *w; view_asked_h = *h;
	if (view_fit_h > 0 && view_fit_h < th && tw > SCREEN_W && th > SCREEN_H) {
		/* fit the room's height; the width follows the window's shape */
		float ew = view_fit_h * (float)tw / th;
		float minw = SCREEN_W > SCREEN_H * (float)tw / th ? SCREEN_W : SCREEN_H * (float)tw / th;
		if (ew < minw) ew = minw;
		tw = (int)ew;
		th = (int)(ew * *h / *w);
	}
	if (dbgo.logFit && frameCount % 300 == 0)
		fprintf(stderr, "fit: frame %ld asked %dx%d target %dx%d -> %dx%d\n", frameCount, *w, *h, view_fit_w, view_fit_h, tw, th);
	if (cw <= 0) { cw = tw; ch = th; }
	cw += (tw - cw) * 0.15f;
	ch += (th - ch) * 0.15f;
	if (cw - tw < 1 && tw - cw < 1) cw = tw;
	if (ch - th < 1 && th - ch < 1) ch = th;
	*w = ((int)cw + 1) & ~1;
	*h = ((int)ch + 1) & ~1;
}

/* ------------------------------------------------------------ the view's place
 *
 * The GBA screen's place in the view (ox, oy) is a smooth function of the
 * game camera: the screen centred, the view clamped to the room (sideways in
 * its box, up/down in the rows of the columns shown, sideways again in the
 * rows shown) -- continuous in the camera, so it follows it pixel for pixel
 * and never re-chooses (the old fewest-unfilled search flipped between
 * places: jitter). Where the target steps (a column of another height comes
 * in, camera limits change, the view's size changes) the offset eases there
 * (speed <= EASE_MAX px/frame, changing by <= 1 px/frame each frame). Only a
 * game snap (the camera stepping > 24 px: doors, teleports, Stage_Init; an
 * area change; frames not drawn) moves it at once; each snap and ease is
 * logged ("view: snap" / "view: ease").
 */
#define EASE_MAX 4
/* one axis of the target: of the places that keep the GBA screen inside the
   view, the fewest unfilled pixels (the room's actual extent under the view,
   not its bounding box); on a tie the previous offset (prev, the GBA
   screen's place in the view; < 0: none) so the view follows the camera
   pixel for pixel, else the one nearest the GBA screen centred */
static s32 place_min(int vertical, s32 other, int w, int h, int prev) {
	s32 g = vertical ? gbaGY : gbaGX;
	int n = vertical ? h : w, screen = vertical ? SCREEN_H : SCREEN_W;
	/* the tie-break: the GBA screen centred (the black split where the room's extent does not tell) */
	s32 c = g - (n - screen) / 2, best = c;
	long bc = -1;
	for (int k = 0; k <= n - screen; k++) {
		s32 a = g + screen - n + k;
		long u = vertical ? view_unfilled(other, a, w, h) : view_unfilled(a, other, w, h);
		s32 d = a > c ? a - c : c - a, bd = best > c ? best - c : c - best;
		int isPrev = prev >= 0 && g - a == prev, bPrev = prev >= 0 && g - best == prev;
		if (bc < 0 || u < bc || (u == bc && (d < bd || (d == bd && isPrev && !bPrev)))) { bc = u; best = a; }
	}
	return best;
}
/* the eased place kept inside [lo, hi) where that is wider than the view, the GBA screen inside the view */
static float clamp_box(float off, s32 g, int n, s32 lo, s32 hi, int screen) {
	if (hi - lo >= n) {
		if (g - off < lo) off = g - lo;
		if (g - off + n > hi) off = g + n - hi;
	}
	if (off < 0) off = 0;
	if (off > n - screen) off = n - screen;
	return off;
}
static void view_offset(int w, int h, int *pox, int *poy) {
	static float off[2], vel[2];
	static long lastFrame = -10;
	static int lastArea = -1, lastW, lastH, easing[2];
	static s32 lastG[2];
	static int lastT[2];
	static s32 lastExt[4];
	static long snapFrame = -100;
	int keep = frameCount == lastFrame + 1 && areaCur == lastArea && w == lastW && h == lastH;
	int px = keep ? lastT[0] : -1, py = keep ? lastT[1] : -1;
	s32 l = place_axis(gbaGX, SCREEN_W, w, extL, extR);
	s32 t = place_min(1, l, w, h, py);
	l = place_min(0, t, w, h, px);
	t = place_min(1, l, w, h, py);
	int T[2] = { gbaGX - l, gbaGY - t }, n[2] = { w, h }, sc[2] = { SCREEN_W, SCREEN_H };
	s32 g[2] = { gbaGX, gbaGY };
	int roomCut = extL != lastExt[0] && extR != lastExt[2] && extT != lastExt[1] && extB != lastExt[3];   /* (a new room: all four edges move) */
	int snap = (lastW <= SCREEN_W && lastH <= SCREEN_H) ||   /* (the view's first wide frame) */
	           frameCount != lastFrame + 1 || areaCur != lastArea || g[0] - lastG[0] > 24 || lastG[0] - g[0] > 24 || g[1] - lastG[1] > 24 || lastG[1] - g[1] > 24;
	/* the frames right after a cut settle at once (the room / camera limits are set up a frame after the game's snap) */
	if (snap) snapFrame = frameCount;
	else if (frameCount - snapFrame <= 2 && (T[0] != lastT[0] || T[1] != lastT[1])) snap = 1;
	if (snap && lastFrame >= 0) fprintf(stderr, "view: snap frame %ld area %d camera %+d,%+d\n", frameCount, areaCur, (int)(g[0] - lastG[0]), (int)(g[1] - lastG[1]));
	for (int a = 0; a < 2 && !(roomCut && !snap); a++) {   /* (a new room: hold this frame; the game's cut follows it) */
		if (snap) { off[a] = T[a]; vel[a] = 0; easing[a] = 0; continue; }
		/* a size change keeps the GBA screen's centre where it was on the view's scale */
		if (n[a] != (a ? lastH : lastW)) off[a] += (n[a] - (a ? lastH : lastW)) / 2.0f;
		/* the target moving with the camera (the view held at a room edge: offset change = camera step) is
		   followed pixel for pixel, easing or not; only a step of the target eases */
		if (keep) {
			int dT = T[a] - lastT[a], dg = g[a] - lastG[a];
			if ((dT < 0 ? -dT : dT) <= (dg < 0 ? -dg : dg) + 1) off[a] += dT;
		}
		float err = T[a] - off[a];
		/* a step that uncovers more of the room is taken at once (easing there only shows black the target
		   does not); a step that shows more black eases */
		if (err > 0.5f || err < -0.5f) {
			s32 cl = g[0] - (int)(off[0] + 0.5f), ct = g[1] - (int)(off[1] + 0.5f);
			long uc = view_unfilled(cl, ct, w, h), ut = a ? view_unfilled(cl, g[1] - T[1], w, h) : view_unfilled(g[0] - T[0], ct, w, h);
			if (ut < uc) {
				fprintf(stderr, "view: snap frame %ld axis %c reveal %d -> %d\n", frameCount, "xy"[a], (int)off[a], T[a]);
				off[a] = T[a]; vel[a] = 0; easing[a] = 0; err = 0;
			}
		}
		if (!easing[a] && (err > 0.5f || err < -0.5f)) {
			easing[a] = 1;
			fprintf(stderr, "view: ease frame %ld axis %c from %d to %d\n", frameCount, "xy"[a], (int)off[a], T[a]);
		}
		if (easing[a]) {
			float want = err * 0.15f;
			if (want > EASE_MAX) want = EASE_MAX; if (want < -EASE_MAX) want = -EASE_MAX;
			if (want > vel[a] + 1) want = vel[a] + 1; if (want < vel[a] - 1) want = vel[a] - 1;
			vel[a] = want;
			off[a] += vel[a];
			if ((err >= 0 && off[a] >= T[a]) || (err <= 0 && off[a] <= T[a]) || (err < 1 && err > -1 && vel[a] < 1 && vel[a] > -1)) {
				off[a] = T[a]; vel[a] = 0; easing[a] = 0;
				fprintf(stderr, "view: ease frame %ld axis %c done at %d\n", frameCount, "xy"[a], T[a]);
			}
		} else off[a] = T[a];
		/* the GBA screen stays inside the view, the view inside the room's span under it (widened to take in
		   the target): easing never shows more black than the clamp allows. (Not the room's bounding box: a
		   corridor's box holds a shaft far off, and clamping to it pushes the GBA screen off-centre.) */
		{
			s32 lo, hi, aT = g[a] - T[a];
			local_span(a, g[!a] - (int)(off[!a] + 0.5f), n[!a], &lo, &hi);
			if (aT < lo) lo = aT; if (aT + n[a] > hi) hi = aT + n[a];
			off[a] = clamp_box(off[a], g[a], n[a], lo, hi, sc[a]);
		}
	}
	lastT[0] = T[0]; lastT[1] = T[1];
	lastExt[0] = extL; lastExt[1] = extT; lastExt[2] = extR; lastExt[3] = extB;
	lastFrame = frameCount; lastArea = areaCur; lastW = w; lastH = h; lastG[0] = g[0]; lastG[1] = g[1];
	*pox = (int)(off[0] + (off[0] >= 0 ? 0.5f : -0.5f));
	*poy = (int)(off[1] + (off[1] >= 0 ? 0.5f : -0.5f));
}

/* ------------------------------------------------------------ frame */
static int lastOx, lastOy;
static s32 lastGbaX, lastGbaY;
int view_ext_left, view_ext_right, view_ext_up, view_ext_down;
int view_gameplay;   /* this frame is a stage with no cutscene running */
int view_gba_pasted;
int view_level_only;

void view_gba_origin(int *ox, int *oy) { *ox = lastOx; *oy = lastOy; }
void view_gba_global(int *x, int *y) { *x = lastGbaX; *y = lastGbaY; }

int view_render(void) {
	set_ranges(view_w, view_h);
	view_active = 0;
	view_gba_pasted = 0;
	/* the cells sprites are listed from (sprites.c): every place the GBA
	   rect can take in a view of this size (ox 0..w-240, oy 0..h-160), so
	   the list depends on the view size only, not on this frame's placement,
	   and stays ready through frames drawn from the GBA picture */
	{
		int wide = view_w > SCREEN_W || view_h > SCREEN_H;
		int ex = view_w > SCREEN_W ? view_w - SCREEN_W : 0, ey = view_h > SCREEN_H ? view_h - SCREEN_H : 0;
		view_cells_left = wide ? cells(ex + 64, 240) : 0;
		view_cells_right = cells(ex, 240);
		view_cells_up = wide ? cells(ey + 64, 160) : 0;
		view_cells_down = cells(ey, 160);
		/* (testing) MMZ_SPRITES_GBA_ONLY: sprites only from the GBA screen, cut at its edge (motioncheck must flag it) */
		static int gbaOnly = -1;
		if (gbaOnly < 0) gbaOnly = getenv("MMZ_SPRITES_GBA_ONLY") != NULL;
		if (gbaOnly) view_cells_left = view_cells_right = view_cells_up = view_cells_down = 0;
	}
	view_ext_left = view_ext_right = view_ext_up = view_ext_down = 0;
	int ok = find_layers();
	find_fx();
	if (dbgo.logView && !ok && frameCount % 60 == 0) {   /* why the level is not drawn (the GBA picture is shown) */
		u16 dc = BGREGS[0];
		fprintf(stderr, "F%ld no layers: dispcnt %04X area %d", frameCount, dc, CUR_AREA & 0x7F);
		for (int k = 0; k < 3; k++) {
			const u8 *s = (const u8 *)(uintptr_t)(STAGE_LAYERS + k * 0x70);
			fprintf(stderr, " | L%d bg %d area %d update %08X draw %08X td %08X ch %08X mp %08X", k, (*(u32 *)(s + 0x54) >> 4) & 0xF, s[0x0D], *(u32 *)s, *(u32 *)(s + 4), *(u32 *)(s + 0x20), *(u32 *)(s + 0x24), *(u32 *)(s + 0x28));
		}
		fprintf(stderr, "\n");
	}
	view_gameplay = ok && !(EVENT_FLAGS & 1) && (GAME_MODE == 3 || GAME_MODE == 4);
	if (!view_gameplay) return 0;   /* menus, cutscenes, area loads: the GBA picture */
	const struct Layer *L0 = layer0();
	gbaGX = areaPxL + L0->x; gbaGY = areaPxT + L0->y;
	room_update();
	fit_target();   /* (also while the fit has the view at the GBA's size: it grows again from here) */
	if (view_w == SCREEN_W && view_h == SCREEN_H) return 0;
	if (view_fit_gba) return 0;
	int w = view_w, h = view_h;
	view_frame = realloc(view_frame, (size_t)w * h * 4);
	view_layers = realloc(view_layers, (size_t)w * h);
	/* the GBA screen centred, the view kept inside the room where it is bigger:
	   sideways in the room's box, then up/down in the room's rows under that
	   span (not its bounding box: a corridor's room may hold a shaft far off),
	   then sideways again in the room's columns over the rows shown */
	s32 left, top;
	int ox, oy;
	view_offset(w, h, &ox, &oy);
	left = gbaGX - ox; top = gbaGY - oy;
	if (dbgo.logView) fprintf(stderr, "F%ld area %d gba %d,%d ext %d..%d x %d..%d ox %d oy %d layers %d%d%d\n", frameCount, areaCur, gbaGX, gbaGY,
	                          extL, extR, extT, extB, ox, oy, layers[1].on, layers[2].on, layers[3].on);
	if (dbgo.logView) for (int b = 1; b < 4; b++) if (layers[b].on) fprintf(stderr, "  L%d bg%d gbaOn %d prio %d cb %X live-cnt %04X td %p\n", layers[b].idx, b, layers[b].gbaOn, layers[b].prio, (unsigned)layers[b].charBase, BGREGS[2 + b], (const void *)layers[b].tiles);
	view_ext_left = ox; view_ext_right = w - ox - SCREEN_W;
	view_ext_up = oy; view_ext_down = h - oy - SCREEN_H;
	lastOx = ox; lastOy = oy;
	lastGbaX = gbaGX; lastGbaY = gbaGY;
	chunk_sources(left, top, w, h);
	draw_hud(w, h, ox, oy);
	render_rows(w, h, ox, oy);
	/* labelcheck: outside the GBA screen every drawn stage layer pixel must
	   be one of its chunk's labelled layers (motioncheck fails on these) */
	if (view_labels) {
		long bad = 0;
		for (int y = 0; y < h; y += 4)
			for (int x = 0; x < w; x += 4) {
				if (x >= ox && x < ox + SCREEN_W && y >= oy && y < oy + SCREEN_H) continue;
				int bg = view_layers[(size_t)y * w + x] & 15;
				if (bg < 1 || bg > 3 || !layers[bg].on) continue;
				int cx = floordiv(left + x, 240), cy = floordiv(top + y, 160);
				if (!(label_layers(cx, cy) >> layers[bg].idx & 1)) bad++;
			}
		if (bad) fprintf(stderr, "labelcheck: frame %ld area %d %ld samples drawn off-label\n", frameCount, areaCur, bad);
	}
	view_active = 1;
	return 1;
}

/* viewchunks: the chunks the last frame covers and where each is drawn from */
void view_chunk_report(void) {
	extern char dbg_check_result[400];
	if (!view_active) { snprintf(dbg_check_result, 400, "viewchunks: frame %ld: no wide view", frameCount); fprintf(stderr, "%s\n", dbg_check_result); return; }
	int n[3] = { 0 };
	s32 vl = lastGbaX - lastOx, vt = lastGbaY - lastOy;
	for (int cy = floordiv(vt, 160); cy <= floordiv(vt + view_h - 1, 160); cy++)
		for (int cx = floordiv(vl, 240); cx <= floordiv(vl + view_w - 1, 240); cx++) {
			if (cx < 0 || cy < 0 || cx >= 128 || cy >= 128) continue;
			int s = chunkSrc[cy][cx];
			n[s < 0 ? 0 : s == 0 ? 1 : 2]++;
			fprintf(stderr, "viewchunks: chunk %d,%d room %d src %d sets %02X pair %02X level %d layers %d\n", cx, cy, room[cy][cx], s,
			        chunk_sets(cx, cy, areaCur) & 0xFF, chunk_pair(cx, cy, areaCur) & 0xFF, chunk_level(cx, cy, areaCur), chunkLayers[cy][cx]);
		}
	snprintf(dbg_check_result, 400, "viewchunks: frame %ld area %d room %d..%d x %d..%d loaded %04X %04X: %d not drawn, %d live, %d decoded (%d set pairs cached)",
	         frameCount, areaCur, roomX0, roomX1, roomY0, roomY1, GFX_SET_A, GFX_SET_B, n[0], n[1], n[2], nCache);
	fprintf(stderr, "%s\n", dbg_check_result);
}

/* viewprobe: where the game's camera would settle for a wanted centre */
int view_camera_settle(int *x, int *y) { return chunk_level(floordiv(*x, 240), floordiv(*y, 160), areaCur) != 15; }
/* viewprobe / teleport: is a global pixel in the drawn room */
int view_shown_at(int gx, int gy) { return in_extent(gx, gy); }
/* overlays (ui.cpp): 1 in the room, -1 unknown */
int view_cell(int gx, int gy) { return roomX1 < 0 ? -1 : in_extent(gx, gy); }
int view_chunk_src(int cx, int cy) {
	if (cx < 0 || cy < 0 || cx >= 128 || cy >= 128) return -2;
	return chunkSrc[cy][cx];
}
int view_crop_rect(float *l, float *t, float *r, float *b) {
	if (!view_active || roomX1 < 0) return 0;
	*l = extL; *t = extT; *r = extR; *b = extB;
	return 1;
}

/* the gap fill (fills.bin) is not part of this renderer yet: kept so the
   settings and the generator link; nothing is drawn from it */
int fill_shot_in = -1;
u32 fill_shot_key;
static char patchPath[600];
const char *fill_patch_path(void) {
	if (!patchPath[0]) {
		const char *e = getenv("MMZ_FILLS");
		if (e) snprintf(patchPath, sizeof patchPath, "%s", e);
		else {
			snprintf(patchPath, sizeof patchPath, "%s", settings_path());
			char *sl = strrchr(patchPath, '/'), *bs = strrchr(patchPath, '\\');
			if (bs > sl) sl = bs;
			snprintf(sl ? sl + 1 : patchPath, sizeof patchPath - (sl ? sl + 1 - patchPath : 0), "fills.bin");
		}
	}
	return patchPath;
}
void fill_patch_reload(void) {}
