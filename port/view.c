/* The zoomed-out view: more of the world than the GBA's 240x160.
 *
 * The game still runs with its own 240x160 camera. The PC picture is a
 * larger view around it, drawn at V-blank:
 *
 * - The level layers (BG1-BG3 during stages) are drawn from the stage's
 *   level data, the same chunk map -> chunk -> metatile -> tile chain the
 *   game streams into video memory from, so there is real level everywhere,
 *   not just in the GBA's 240x160 window (where the game keeps the tilemaps
 *   valid). Per-line scrolling (H-blank effects) is kept: each line's
 *   register is applied as an offset from the layer's position.
 * - A layer is drawn this way only while video memory agrees with the level
 *   data at sample points, so menus, cutscenes and anything the level data
 *   does not describe fall back to the GBA picture.
 * - The HUD layer (BG0) and the sprites stay where they are in the 240x160
 *   area; sprites the game places beyond it are shown too.
 * - The view keeps inside the stage when the stage is big enough.
 *
 * Level data (Mega Man Zero, found in RAM): three stage layers of 0x70 bytes
 * at STAGE_LAYERS, each with
 *   +0x14 s32 x, y     world position (pixels) of the layer's top-left
 *   +0x20 tiledata     metatile -> 4 tilemap entries (u16[4])
 *   +0x24 chunks       chunk -> 15x10 metatiles (u16[150]), one GBA screen
 *   +0x28 map          chunk map: u8 stride, null chunk, width, height, then
 *                      u8 chunk[height][stride]
 *   +0x54 bg           BG number in bits 4-7 (and 1 << BG in bits 0-3)
 * (the same layout as Mega Man Zero 3's StageLayer, see docs/notes.md)
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

#define STAGE_LAYERS 0x02004FF0u
#define TRANSPARENT 0x8000

int view_w = SCREEN_W, view_h = SCREEN_H;   /* the view size asked for */
/* the screen-sized cells around the GBA screen the view needs sprites from
   (sprites.c), counted from the GBA screen */
int view_cells_left, view_cells_right, view_cells_up, view_cells_down;
int view_active;                            /* the last frame was drawn wide */
u32 *view_frame;                            /* view_w x view_h, 0x00RRGGBB */

/* the registers each GBA line was drawn with (DISPCNT to BLDY) */
#define REGS 0x56
static u8 lineRegs[SCREEN_H][REGS];
#define R16(line, o) (*(u16 *)(lineRegs[line] + (o)))

void view_record_line(int line) {
	memcpy(lineRegs[line], io, REGS);
}

struct Layer {
	int bg;                       /* GBA BG it is shown on */
	s32 x, y;                     /* world position of the layer's top-left */
	const u16 *tiledata, *chunks;
	const u8 *map;
	int stride, null, w, h;
	int backdrop;                 /* a background smaller than the stage (it scrolls slower): repeats */
};
static struct Layer layers[4];    /* by BG; .map NULL: not a live level layer */

static int rom_ptr(u32 a) {
	extern u32 romSize;
	return a >= 0x08000000 && a - 0x08000000 < romSize;
}

/* ---------------------------------------------------------- areas
 *
 * Mega Man Zero's world is one map of 128x128 screen-sized chunks (global
 * coordinates; the stage layers use coordinates from the stage's corner).
 * Each chunk belongs to an area, and needs one of the area's graphics sets
 * (two per chunk, background tiles at 0x4000 and more): the game loads them
 * as the camera moves (sub_08006D3C). A chunk is drawn only if it is in the
 * current area and the graphics it needs are the ones loaded, so nothing is
 * drawn with the wrong tiles.
 */
#define CHUNK_COL ((const u8 *)0x082915ECu)    /* metatile column -> chunk column */
#define CHUNK_ROW ((const u8 *)0x08290DECu)    /* metatile row -> chunk row */
#define CHUNK_AREA ((const u8 *)0x082921ECu)   /* [row * 128 + column] & 15: area */
#define AREA_TABLE 0x08293BECu                 /* area -> descriptors by area state */
#define CUR_AREA (*(u16 *)0x0200520C)
#define AREA_STATES (*(u32 *)0x02005208)
#define GFX_SET_A (*(u16 *)0x02005430)         /* loaded set: area << 8 | set */
#define GFX_SET_B (*(u16 *)0x02005432)
#define CAMERA_X (*(s32 *)0x02005200)          /* global, 24.8, the screen's centre */
#define CAMERA_Y (*(s32 *)0x02005204)
#define GAME_MODE (*(u8 *)0x020236E1)            /* 3: playing a stage, 4: Zero defeated; 1 pause, 6 continue */
#define EVENT_FLAGS (*(u16 *)0x02022B6E)        /* bit 0: an event script (cutscene) runs (sub_08014444 / sub_080144C4) */

static s32 stageX, stageY;      /* global pixel position of the stage layers' origin */
static s32 areaLeft, areaTop, areaRight, areaBottom;   /* the current area, global pixels */
static u8 chunkOk[128][128];    /* 0 unknown, else chunk_source() + 2 */
static int drawing;             /* rows are being drawn by several threads: chunk_source() only reads */
static int gbaCx0, gbaCx1, gbaCy0, gbaCy1 = -1;   /* chunks under the GBA screen */

static const u8 *area_desc(int area) {
	u32 list = *(u32 *)(uintptr_t)(AREA_TABLE + area * 4);
	return (const u8 *)(uintptr_t)*(u32 *)(uintptr_t)(list + ((AREA_STATES >> (area * 2)) & 3) * 4);
}

/* ------------------------------------------------------------ rooms
 *
 * An area can hold rooms the camera never shows together: each chunk has a
 * level (the top 4 bits of the area's layer map, sub_08006B4C), and the
 * camera stops where it changes by more than 1 (sub_080066F8). The view does
 * the same: it draws only the chunks the camera's chunk reaches without such
 * a step (the rest of the area, like rooms under the desert floor, is left to
 * the gap fill).
 */
static u8 reach[128][128];
static u32 reachKey;

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

/* Which metatile sits right of / below which inside the stage layers' own
   chunks (not across chunk borders): the level's look. A neighbouring part
   of the area whose border continues it (most border pairs are pairs the
   level uses inside its chunks) is drawn even across a camera step: it is
   the same place to the eye (the camera only stops there). The rooms under
   the desert floor do not continue it, so they stay hidden. */
#define ADJ_SIZE (1 << 17)
static u32 adjSet[ADJ_SIZE];   /* (a << 16 | b) * 2 + dir + 1, 0 empty */
static u32 adjKey = ~0u;

static void adj_put(u32 v) {
	u32 h = (v * 2654435761u) & (ADJ_SIZE - 1);
	while (adjSet[h] && adjSet[h] != v) h = (h + 1) & (ADJ_SIZE - 1);
	adjSet[h] = v;
}
static int adj_has(u32 v) {
	u32 h = (v * 2654435761u) & (ADJ_SIZE - 1);
	while (adjSet[h]) { if (adjSet[h] == v) return 1; h = (h + 1) & (ADJ_SIZE - 1); }
	return 0;
}
static u32 adj_val(u16 a, u16 b, int down) { return (((u32)a << 16 | b) * 2 + down + 1) | 1u << 31; }

static void adj_build(void) {
	u32 key = (u32)CUR_AREA << 24 ^ (u32)stageX << 8 ^ (u32)stageY;
	if (key == adjKey) return;
	memset(adjSet, 0, sizeof adjSet);
	int n = 0;
	for (int k = 1; k < 4; k++) {
		const struct Layer *L = &layers[k];
		if (!L->map || L->backdrop) continue;
		for (int cy = 0; cy < L->h; cy++)
			for (int cx = 0; cx < L->w; cx++) {
				int cid = L->map[4 + cy * L->stride + cx];
				if (cid == L->null) continue;
				const u16 *c = L->chunks + cid * 150;
				for (int r = 0; r < 10; r++)
					for (int col = 0; col < 15; col++) {
						if (n > ADJ_SIZE / 2) { adjKey = key; return; }
						if (col < 14) { adj_put(adj_val(c[r * 15 + col], c[r * 15 + col + 1], 0)); n++; }
						if (r < 9) { adj_put(adj_val(c[r * 15 + col], c[(r + 1) * 15 + col], 1)); n++; }
					}
			}
	}
	if (n) adjKey = key;   /* (no layers yet: try again next frame) */
}

/* does global chunk (bx, by) continue (ax, ay) (its neighbour) to the eye? */
static int continues(int ax, int ay, int bx, int by) {
	int known = 0, total = 0;
	for (int k = 1; k < 4; k++) {
		const struct Layer *L = &layers[k];
		if (!L->map || L->backdrop) continue;
		int lax = ax - stageX / 240, lay = ay - stageY / 160, lbx = bx - stageX / 240, lby = by - stageY / 160;
		if (lax < 0 || lay < 0 || lbx < 0 || lby < 0 || lax >= L->w || lbx >= L->w || lay >= L->h || lby >= L->h) continue;
		int ca = L->map[4 + lay * L->stride + lax], cb = L->map[4 + lby * L->stride + lbx];
		if (ca == L->null || cb == L->null) continue;
		const u16 *A = L->chunks + ca * 150, *B = L->chunks + cb * 150;
		int dx = bx - ax, dy = by - ay;
		if (dy) {   /* (b below a, or above) */
			const u16 *top = dy > 0 ? A : B, *bot = dy > 0 ? B : A;
			for (int col = 0; col < 15; col++, total++) known += adj_has(adj_val(top[9 * 15 + col], bot[col], 1));
		} else if (dx) {
			const u16 *lft = dx > 0 ? A : B, *rgt = dx > 0 ? B : A;
			for (int r = 0; r < 10; r++, total++) known += adj_has(adj_val(lft[r * 15 + 14], rgt[r * 15], 0));
		}
	}
	return total && known * 2 >= total;
}

static void find_reach(int camGx, int camGy) {
	static int qx[128 * 128], qy[128 * 128];
	int area = CUR_AREA & 0x7F, n = 0, h = 0;
	memset(reach, 0, sizeof reach);
	reachKey = 0;
	adj_build();
	if (chunk_level(camGx, camGy, area) == 15) {   /* (not in a room: everything, as before) */
		memset(reach, 1, sizeof reach);
		return;
	}
	reach[camGy][camGx] = 1; qx[n] = camGx; qy[n++] = camGy;
	while (h < n) {
		int x = qx[h], y = qy[h++], lv = chunk_level(x, y, area);
		static const int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k], ny = y + dy[k];
			if (nx < 0 || ny < 0 || nx >= 128 || ny >= 128 || reach[ny][nx]) continue;
			int l2 = chunk_level(nx, ny, area);
			if (l2 == 15) continue;
			if ((l2 > lv + 1 || l2 < lv - 1) && !continues(x, y, nx, ny)) continue;
			reach[ny][nx] = 1; qx[n] = nx; qy[n++] = ny;
			reachKey = reachKey * 31 + (u32)(ny * 128 + nx);
		}
	}
}

static int set_loaded(int set, u16 loaded, int area) {
	return (loaded >> 8) == area && set == (loaded & 0xFF);
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
#define MAX_COMBOS 8
static u8 comboVram[MAX_COMBOS][0x10000];
static u16 comboPal[MAX_COMBOS][256];
static int comboKey[MAX_COMBOS], nCombos;

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

/* the copy of video memory with these sets loaded: its index, or -1 */
static int combo(int area, int hi, int lo) {
	int key = area << 8 | hi << 4 | lo;
	for (int i = 0; i < nCombos; i++)
		if (comboKey[i] == key) return i;
	if (nCombos == MAX_COMBOS) return -1;
	int i = nCombos++;
	comboKey[i] = key;
	memcpy(comboVram[i], vram, 0x10000);
	memcpy(comboPal[i], pal, 512);
	const u8 *dh = set_desc(area, hi), *dl = set_desc(area, lo);
	load_set_tiles(dh, comboVram[i]);
	load_set_pal(dh + 0xC, comboPal[i]);
	load_set_tiles(dl, comboVram[i]);
	load_set_pal(dl + 0xC, comboPal[i]);
	return i;
}

/* where a global chunk is drawn from: -1 not at all (another area), 0 video
   memory, 1 + n the copy n */
static int chunk_source(int cx, int cy) {
	if (cx < 0 || cy < 0 || cx >= 128 || cy >= 128) return -1;
	if (chunkOk[cy][cx]) return chunkOk[cy][cx] - 2;
	if (drawing) return -1;   /* (worked out before the threads start) */
	int src = -1, area = CUR_AREA & 0x7F;
	int onGba = cx >= gbaCx0 && cx <= gbaCx1 && cy >= gbaCy0 && cy <= gbaCy1;
	if ((CHUNK_AREA[cy * 128 + cx] & 15) == area && (reach[cy][cx] || onGba)) {
		int b = chunk_sets(cx, cy, area);
		if (b >= 0) {
			int hi = b >> 4, lo = b & 15;
			/* 14: the set of the chunk to the right, 15: of the one below */
			int hx = cx + (hi == 14), hy = cy + (hi == 15), lx = cx + (lo == 14), ly = cy + (lo == 15);
			if (hi >= 14) { int n = chunk_sets(hx, hy, area); hi = n >= 0 ? n >> 4 : -1; }
			if (lo >= 14) { int n = chunk_sets(lx, ly, area); lo = n >= 0 ? n & 15 : -1; }
			/* on the GBA screen the game shows it with what is loaded (it does
			   not always have both sets of a chunk it shows, at their borders) */
			if (cx >= gbaCx0 && cx <= gbaCx1 && cy >= gbaCy0 && cy <= gbaCy1) src = 0;
			else if (hi >= 0 && lo >= 0 && hi < 14 && lo < 14) {
				if (set_loaded(hi, GFX_SET_A, area) && set_loaded(lo, GFX_SET_B, area)) src = 0;
				else { int c = combo(area, hi, lo); src = c >= 0 ? 1 + c : -1; }
			}
		}
	}
	chunkOk[cy][cx] = src + 2;
	return src;
}

static int chunk_drawable(int cx, int cy) { return chunk_source(cx, cy) >= 0; }

/* the current area's rectangle, in global pixels */
static void find_area(void) {
	int area = CUR_AREA & 0x7F;
	const u8 *d = area_desc(area);
	const u8 *g = (const u8 *)(uintptr_t)*(u32 *)(d + 0x74);
	areaLeft = *(s32 *)(d + 0x6C) * 240;
	areaTop = *(s32 *)(d + 0x70) * 160;
	areaRight = areaLeft + g[2] * 240;
	areaBottom = areaTop + g[3] * 160;
}

static __thread int levelSrc;   /* chunk_source() of the last level_entry() */
static __thread int levelFy;    /* the row in the tile it found (backgrounds clamp it) */

/* the stage-coordinate rectangle of the current area's chunks that have
   something in them (in any stage layer) */
static void content_bounds(s32 *l, s32 *t, s32 *r, s32 *b) {
	int x0 = 1 << 30, y0 = 1 << 30, x1 = -(1 << 30), y1 = -(1 << 30);
	for (int k = 1; k < 4; k++) {
		const struct Layer *L = &layers[k];
		if (!L->map || L->backdrop) continue;
		for (int cy = 0; cy < L->h; cy++)
			for (int cx = 0; cx < L->w; cx++) {
				if (L->map[4 + cy * L->stride + cx] == L->null) continue;
				if (!chunk_drawable((cx * 240 + stageX) / 240, (cy * 160 + stageY) / 160)) continue;
				if (cx < x0) x0 = cx;
				if (cx > x1) x1 = cx;
				if (cy < y0) y0 = cy;
				if (cy > y1) y1 = cy;
			}
	}
	if (x1 < x0) { x0 = y0 = 0; x1 = y1 = 0; }
	*l = x0 * 240; *r = (x1 + 1) * 240; *t = y0 * 160; *b = (y1 + 1) * 160;
}

/* ------------------------------------------------------------ gap fill
 *
 * Areas that are not rectangles have empty chunks inside their bounding box:
 * the GBA camera never showed them, so the level data has nothing there, and
 * a wide view would show black. The part of such a gap below the level is
 * filled once per area, ahead of time (the fill patch below): each empty
 * metatile (16x16) repeats the lowest real one above it in its column, so
 * posts, pillars and walls go on down. Gaps above or beside the level (sky,
 * open space) are left as they are.
 * Filled cells are drawn with the graphics source of their nearest real chunk.
 * Only what can show is filled: the bounding box of the area's chunks (the
 * view keeps inside it).
 */
#define FILL_NONE 0xFFFF
#define FILL_UP 0x8000   /* (a filled cell's metatile: repeat its top 8x8 row, not its bottom one) */
struct Fill {
	int on;
	int cx0, cy0, cw, ch;    /* chunks, layer coordinates */
	u16 *mt;                 /* [cell row][cell col], cw*15 x ch*10; FILL_NONE: not filled */
	s16 *donor;              /* per chunk: global chunk of its nearest real chunk (gx | gy << 8), -1 none */
};
static struct Fill fills[4];
static int fillsBuilt;



static int in_area(int gx, int gy) {
	return gx >= 0 && gy >= 0 && gx < 128 && gy < 128 && (CHUNK_AREA[gy * 128 + gx] & 15) == (CUR_AREA & 0x7F) && reach[gy][gx];
}

/* The 8x8 row a gap repeats, from the level at its edge (cell (x, y), going
   away from the gap in direction dir: -1 up, 1 down): the row nearest the gap
   that repeats in the level itself (equal to its neighbour on the gap's
   side: grass, a wall's face, posts), so edge details (a cliff's rim) are not
   smeared; the edge row when none does within 4 metatiles. As the fill keeps
   it: a metatile, | FILL_UP for its top row. */
static u16 fill_row(const struct Layer *L, const u16 *src, int W, int H, int x, int y, int dir) {
	u16 rm[8]; int rh[8], n = 0;
	for (int c = y; n < 8 && c >= 0 && c < H && src[c * W + x] != FILL_NONE; c += dir) {
		u16 m = src[c * W + x];
		rm[n] = m; rh[n++] = dir < 0;    /* (nearest the gap first: the bottom row going up, the top one going down) */
		rm[n] = m; rh[n++] = dir > 0;
	}
	if (!n) return FILL_NONE;
	#define ROW(i) (L->tiledata[rm[i] * 4 + rh[i] * 2] | (u32)L->tiledata[rm[i] * 4 + rh[i] * 2 + 1] << 16)
	for (int i = 1; i < n; i++)
		if (ROW(i) == ROW(i - 1)) return rm[i - 1] | (rh[i - 1] ? 0 : FILL_UP);
	#undef ROW
	return rm[0] | (rh[0] ? 0 : FILL_UP);
}

static void fill_build(int k, u32 seed) {
	struct Fill *F = &fills[k];
	const struct Layer *L = &layers[k];
	free(F->mt); free(F->donor);
	memset(F, 0, sizeof *F);
	if (!L->map || L->backdrop) return;
	int sx = stageX / 240, sy = stageY / 160;
	#define REAL(cx, cy) ((cx) >= 0 && (cy) >= 0 && (cx) < L->w && (cy) < L->h && \
	                      L->map[4 + (cy) * L->stride + (cx)] != L->null && \
	                      in_area(((cx) * 240 + stageX) / 240, ((cy) * 160 + stageY) / 160))
	int x0 = 1 << 30, y0 = 1 << 30, x1 = -1, y1 = -1, gaps = 0;
	for (int cy = 0; cy < L->h; cy++)
		for (int cx = 0; cx < L->w; cx++)
			if (REAL(cx, cy)) { if (cx < x0) x0 = cx; if (cx > x1) x1 = cx; if (cy < y0) y0 = cy; if (cy > y1) y1 = cy; }
	if (x1 < 0) return;
	for (int cy = y0; cy <= y1; cy++)
		for (int cx = x0; cx <= x1; cx++)
			if (!REAL(cx, cy)) gaps++;   /* (empty, or a part of the area the camera does not reach from here) */
	if (!gaps) return;
	int cw = x1 - x0 + 1, ch = y1 - y0 + 1, W = cw * 15, H = ch * 10;
	/* the metatiles of the area (dense indices) and their graphics groups */
	static s16 dense[65536];
	static u16 ids[4096];
	int N = 0;
	memset(dense, -1, sizeof dense);
	u16 *grid = malloc((size_t)W * H * 2);         /* metatile per cell, FILL_NONE = unknown */
	F->donor = malloc((size_t)cw * ch * 2);
	if (!grid || !F->donor) { free(grid); free(F->donor); F->donor = NULL; return; }
	for (int cy = 0; cy < ch; cy++)
		for (int cx = 0; cx < cw; cx++) {
			int lx = cx + x0, ly = cy + y0, real = REAL(lx, ly);
			int cid = L->map[4 + ly * L->stride + lx];
			for (int r = 0; r < 10; r++)
				for (int c = 0; c < 15; c++) {
					u16 m = FILL_NONE;
					if (real) {
						m = L->chunks[cid * 150 + r * 15 + c];
						if (dense[m] < 0 && N < 4096) { dense[m] = N; ids[N++] = m; }
					}
					grid[(cy * 10 + r) * W + cx * 15 + c] = m;
				}
			/* nearest real chunk (by chunk distance) */
			int best = -1, bd = 1 << 30;
			if (!real)
				for (int y = 0; y < ch; y++)
					for (int x = 0; x < cw; x++)
						if (REAL(x + x0, y + y0)) {
							int d = abs(x - cx) * 3 + abs(y - cy) * 2;   /* (sideways first: walls continue up and down) */
							if (d < bd) { bd = d; best = (((x + x0) * 240 + stageX) / 240) | (((y + y0) * 160 + stageY) / 160) << 8; }
						}
			F->donor[cy * cw + cx] = real ? -1 : best;
		}
	/* each empty cell copies the nearest real cell in its row or column,
	   repeating the edge's pattern (period 1-4 metatiles) into the gap */
	u16 *src = malloc((size_t)W * H * 2);
	if (!src) goto out;
	memcpy(src, grid, (size_t)W * H * 2);
	/* below the level: each empty cell repeats the lowest real cell above it
	   in its column, so posts, pillars and walls go on down. A gap with level
	   below it too is split: its upper chunks go on down from above, its
	   lower ones up from below (FILL_UP: the top 8x8 row of that metatile).
	   Nothing is filled above or beside the level (sky, open space). */
	int filled = 0;
	for (int x = 0; x < W; x++)
		for (int y = 0; y < H; ) {
			if (src[y * W + x] != FILL_NONE) { y++; continue; }
			int y1 = y;
			while (y1 < H && src[y1 * W + x] == FILL_NONE) y1++;
			u16 above = y > 0 ? fill_row(L, src, W, H, x, y - 1, -1) : FILL_NONE;
			u16 below = y1 < H ? fill_row(L, src, W, H, x, y1, 1) : FILL_NONE;
			int n = (y1 - y + 9) / 10;
			for (int yy = y; yy < y1; yy++) {
				int i = (yy - y) / 10;
				if (above == FILL_NONE) continue;
				if (below == FILL_NONE || i < (n + 1) / 2) grid[yy * W + x] = above;
				else grid[yy * W + x] = below;
				filled++;
			}
			y = y1;
		}
	/* a filled chunk is drawn with the graphics of the real chunk it copies */
	for (int cx = 0; cx < cw; cx++)
		for (int cy = 0; cy < ch; ) {
			if (REAL(cx + x0, cy + y0)) { cy++; continue; }
			int c1 = cy;
			while (c1 < ch && !REAL(cx + x0, c1 + y0)) c1++;
			int n = c1 - cy;
			for (int c = cy; c < c1; c++) {
				int from = -1;
				if (cy > 0 && (c1 >= ch || c - cy < (n + 1) / 2)) from = cy - 1;
				else if (cy > 0 && c1 < ch) from = c1;
				if (from >= 0) F->donor[c * cw + cx] = (((cx + x0) * 240 + stageX) / 240) | (((from + y0) * 160 + stageY) / 160) << 8;
			}
			cy = c1;
		}
	if (getenv("MMZ_FILLDEBUG"))
		fprintf(stderr, "fill: area %d bg %d chunks %d,%d %dx%d stage %d,%d: %d cells\n", CUR_AREA & 0x7F, k, x0, y0, cw, ch, stageX, stageY, filled);
	free(src);
	/* keep only the filled cells */
	F->mt = malloc((size_t)W * H * 2);
	if (F->mt) {
		for (int y = 0; y < H; y++)
			for (int x = 0; x < W; x++)
				F->mt[y * W + x] = REAL(x / 15 + x0, y / 10 + y0) ? FILL_NONE : grid[y * W + x];
		F->cx0 = x0; F->cy0 = y0; F->cw = cw; F->ch = ch; F->on = 1;
	}
out:
	free(grid);
	if (!F->on) { free(F->donor); F->donor = NULL; }
	#undef REAL
	#undef SET
	#undef HAS
	#undef PUSH
}

/* ------------------------------------------------------------ fill patch
 *
 * The fill is the same every time for a given area, so it is worked out once
 * and kept in fills.bin next to mmz.ini: `make -C port fills` builds it by
 * playing the routes, and an area it misses is worked out on first entry and
 * added to it. Entering an area then only looks its fill up. One record per
 * area, graphics sets, stage position and BG (a record with nothing to fill
 * is kept too, so it is not worked out again).
 */
struct FillRec { u32 key; s32 sx, sy; s32 bg, cx0, cy0, cw, ch; u16 *mt; s16 *donor; };
static struct FillRec *patch;
static int npatch, patchLoaded;
static char patchPath[600];

static const char *patch_path(void) {
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

static void patch_add(const struct FillRec *r) {
	struct FillRec *n = realloc(patch, (npatch + 1) * sizeof *patch);
	if (!n) return;
	patch = n;
	patch[npatch++] = *r;
}

static void patch_load(void) {
	patchLoaded = 1;
	FILE *f = fopen(patch_path(), "rb");
	if (!f) return;
	char magic[8];
	if (fread(magic, 1, 8, f) != 8 || memcmp(magic, "MMZFILL4", 8)) { fclose(f); return; }
	struct FillRec r;
	s32 h[7];
	while (fread(h, 4, 7, f) == 7) {
		r.key = h[0]; r.sx = h[1]; r.sy = h[2]; r.bg = h[3]; r.cx0 = h[4]; r.cy0 = h[5]; r.cw = h[6] & 0xFFFF; r.ch = (u32)h[6] >> 16;
		size_t cells = (size_t)r.cw * r.ch * 150, ck = (size_t)r.cw * r.ch;
		r.mt = cells ? malloc(cells * 2) : NULL;
		r.donor = ck ? malloc(ck * 2) : NULL;
		if ((cells && (!r.mt || fread(r.mt, 2, cells, f) != cells)) || (ck && (!r.donor || fread(r.donor, 2, ck, f) != ck))) {
			free(r.mt); free(r.donor); break;
		}
		patch_add(&r);
	}
	fclose(f);
}

static void patch_append(const struct FillRec *r) {
	const char *p = patch_path();
	FILE *f = fopen(p, "rb");
	int fresh = !f;
	if (f) fclose(f);
	f = fopen(p, "ab");
	if (!f) return;
	if (fresh) fwrite("MMZFILL4", 1, 8, f);
	s32 h[7] = { (s32)r->key, r->sx, r->sy, r->bg, r->cx0, r->cy0, r->cw | r->ch << 16 };
	fwrite(h, 4, 7, f);
	size_t cells = (size_t)r->cw * r->ch * 150, ck = (size_t)r->cw * r->ch;
	if (cells) fwrite(r->mt, 2, cells, f);
	if (ck) fwrite(r->donor, 2, ck, f);
	fclose(f);
}

/* fills[k] for the current area: from the patch, or worked out and added */
/* testing (MMZ_FILLSHOT): frames until a screenshot of a newly entered filled area */
int fill_shot_in = -1;
u32 fill_shot_key;
static void fill_get(int k, u32 key) {
	struct Fill *F = &fills[k];
	if (!patchLoaded) patch_load();
	for (int i = 0; i < npatch; i++) {
		const struct FillRec *r = &patch[i];
		if (r->key != key || r->sx != stageX || r->sy != stageY || r->bg != k) continue;
		free(F->mt); free(F->donor);
		memset(F, 0, sizeof *F);
		if (!r->cw) return;
		size_t cells = (size_t)r->cw * r->ch * 150, ck = (size_t)r->cw * r->ch;
		F->mt = malloc(cells * 2); F->donor = malloc(ck * 2);
		if (!F->mt || !F->donor) { free(F->mt); free(F->donor); F->mt = NULL; F->donor = NULL; return; }
		memcpy(F->mt, r->mt, cells * 2); memcpy(F->donor, r->donor, ck * 2);
		F->cx0 = r->cx0; F->cy0 = r->cy0; F->cw = r->cw; F->ch = r->ch; F->on = 1;
		return;
	}
	fill_build(k, key * 2654435761u + 1);
	struct FillRec r = { key, stageX, stageY, k, 0, 0, 0, 0, NULL, NULL };
	if (F->on) {
		size_t cells = (size_t)F->cw * F->ch * 150, ck = (size_t)F->cw * F->ch;
		r.mt = malloc(cells * 2); r.donor = malloc(ck * 2);
		if (!r.mt || !r.donor) { free(r.mt); free(r.donor); return; }
		memcpy(r.mt, F->mt, cells * 2); memcpy(r.donor, F->donor, ck * 2);
		r.cx0 = F->cx0; r.cy0 = F->cy0; r.cw = F->cw; r.ch = F->ch;
	}
	patch_add(&r);
	patch_append(&r);
}

/* a filled cell's tilemap entry at a layer pixel (0: not filled) */
static int fill_entry(const struct Layer *L, s32 wx, s32 wy, u16 *out) {
	if (L->bg < 0 || L->bg > 3) return 0;
	const struct Fill *F = &fills[L->bg];   /* (layers[] is by BG; L may be a copy) */
	static int hide = -1;   /* testing (MMZ_FILLHIDE): work the fill out but do not draw it */
	if (hide < 0) hide = getenv("MMZ_FILLHIDE") != NULL;
	if (hide) return 0;
	if (!F->on || wx < 0 || wy < 0) return 0;
	int cx = wx / 240 - F->cx0, cy = wy / 160 - F->cy0;
	if (cx < 0 || cy < 0 || cx >= F->cw || cy >= F->ch) return 0;
	u16 m = F->mt[((cy * 10) + (wy % 160) / 16) * F->cw * 15 + cx * 15 + (wx % 240) / 16];
	int d = F->donor[cy * F->cw + cx];
	if (m == FILL_NONE || d < 0) return 0;
	levelSrc = chunk_source(d & 0xFF, d >> 8);
	if (levelSrc < 0) return 0;
	levelFy = wy & 7;
	/* one 8x8 row of the metatile repeated (finer than whole 16x16 metatiles:
	   a post's cap is not copied): the bottom row going down, the top one
	   coming up from below */
	*out = m & FILL_UP ? L->tiledata[(m & ~FILL_UP) * 4 + ((wx >> 3) & 1)] : L->tiledata[m * 4 + 2 + ((wx >> 3) & 1)];
	return 1;
}

extern long frameCount;
/* rooms smaller than the view (settings.fitRooms): the view size that fits
   the area's bounding box, same shape as asked for, at least the GBA's */
int view_fit_w, view_fit_h;   /* 0: no fit */
static void fit_target(void) {
	view_fit_w = view_fit_h = 0;
	/* the area's shape: its non-empty chunks in the stage layers, whatever
	   graphics are loaded (content_bounds() only counts drawable chunks, which
	   can be one chunk right after entering an area) */
	int x0 = 1 << 30, y0 = 1 << 30, x1 = -1, y1 = -1, backdrop = 0;
	for (int k = 1; k < 4; k++) {
		const struct Layer *L = &layers[k];
		if (L->map && L->backdrop) backdrop = 1;
		if (!L->map || L->backdrop) continue;
		for (int cy = 0; cy < L->h; cy++)
			for (int cx = 0; cx < L->w; cx++)
				if (L->map[4 + cy * L->stride + cx] != L->null && in_area((cx * 240 + stageX) / 240, (cy * 160 + stageY) / 160)) {
					if (cx < x0) x0 = cx; if (cx > x1) x1 = cx; if (cy < y0) y0 = cy; if (cy > y1) y1 = cy;
				}
	}
	if (x1 < 0) return;
	int bw = (x1 - x0 + 1) * 240, bh = (y1 - y0 + 1) * 160;
	/* a background layer (it repeats sideways and carries its top and bottom
	   bands on) covers the view around a small stage: nothing to fit */
	if (backdrop) return;
	if (!settings.fitRooms || bw <= 0 || bh <= 0) return;
	view_fit_w = bw;
	view_fit_h = bh;
}

/* main.c, after the view size for the window is known: shrink it to fit a
   small room, eased over a few frames when the room changes */
void view_fit_apply(int *w, int *h) {
	static float cw, ch;
	int tw = *w, th = *h;
	if (view_fit_w > 0 && (view_fit_w < tw || view_fit_h < th) && tw > SCREEN_W && th > SCREEN_H) {
		float ew = tw;
		if (ew > view_fit_w) ew = view_fit_w;
		if (ew > view_fit_h * (float)tw / th) ew = view_fit_h * (float)tw / th;
		float minw = SCREEN_W > SCREEN_H * (float)tw / th ? SCREEN_W : SCREEN_H * (float)tw / th;
		/* not down to the GBA's size: then the wide view stops (and with it
		   the fit's own updates), and a corridor would lose the wide view */
		if (ew >= minw * 1.15f) {
			tw = (int)ew;
			th = (int)(ew * *h / *w);
		}
	}
	if (getenv("FITDEBUG") && frameCount % 300 == 0)
		fprintf(stderr, "fit: frame %ld asked %dx%d target %dx%d -> %dx%d\n", frameCount, *w, *h, view_fit_w, view_fit_h, tw, th);
	if (cw <= 0) { cw = tw; ch = th; }
	cw += (tw - cw) * 0.15f;
	ch += (th - ch) * 0.15f;
	if (cw - tw < 1 && tw - cw < 1) cw = tw;
	if (ch - th < 1 && th - ch < 1) ch = th;
	*w = ((int)cw + 1) & ~1;
	*h = ((int)ch + 1) & ~1;
}

/* the tilemap entry the level has at a world pixel (0: nothing there) */
static int level_entry(const struct Layer *L, s32 wx, s32 wy, u16 *out) {
	if (L->backdrop) {
		/* repeats sideways; its top and bottom rows go on up and down (sky,
		   ground) */
		s32 W = L->w * 240, H = L->h * 160;
		wx %= W;
		if (wx < 0) wx += W;
		if (wy < 0) wy = 0;          /* (its top line, a plain band) */
		if (wy >= H) wy = H - 1;
		levelFy = wy & 7;
		int cid = L->map[4 + (wy / 160) * L->stride + wx / 240];
		if (cid == L->null) return 0;
		u16 mt = L->chunks[cid * 150 + ((wy % 160) >> 4) * 15 + ((wx % 240) >> 4)];
		*out = L->tiledata[mt * 4 + ((wy >> 3) & 1) * 2 + ((wx >> 3) & 1)];
		levelSrc = 0;
		return 1;
	}
	if (wx < 0 || wy < 0) return 0;
	levelFy = wy & 7;
	int cx = wx / 240, cy = wy / 160;
	if (cx >= L->w || cy >= L->h) return 0;
	int cid = L->map[4 + cy * L->stride + cx];
	if (cid == L->null) return fill_entry(L, wx, wy, out);
	levelSrc = chunk_source((wx + stageX) / 240, (wy + stageY) / 160);
	if (levelSrc < 0) return fill_entry(L, wx, wy, out);
	u16 mt = L->chunks[cid * 150 + ((wy % 160) >> 4) * 15 + ((wx % 240) >> 4)];
	*out = L->tiledata[mt * 4 + ((wy >> 3) & 1) * 2 + ((wx >> 3) & 1)];
	return 1;
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
static s32 line_world_x(const struct Layer *L, int line) { return L->x + wrap_delta(R16(line, 0x10 + L->bg * 4) & 0x1FF, L->x); }
static s32 line_world_y(const struct Layer *L, int line) { return L->y + wrap_delta(R16(line, 0x12 + L->bg * 4) & 0x1FF, L->y); }

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
	if (getenv("FXDEBUG")) {
		static int last[4] = { -1, -1, -1, -1 };
		for (int bg = 1; bg < 4; bg++)
			if (fx[bg].kind != last[bg]) {
				last[bg] = fx[bg].kind;
				fprintf(stderr, "fx: frame %d bg%d kind %d x %d y %d phase %d surface %d\n", frame, bg, fx[bg].kind, fx[bg].x, fx[bg].y, fx[bg].phase, fx[bg].surface);
			}
	}
}

/* Finds the stage layers and keeps the ones video memory agrees with. */
static int tile_empty(u16 e, u32 charBase);
static int stageBg[4];   /* BGs a stage layer (moving with the camera) is on, matched or not */
/* BGs whose stage layer has not matched video memory for a while and whose
   tilemap is a pattern of a few tiles: the game draws something else there
   (mission 3's rain), so its tilemap repeats over
   the whole view like a background's */
static int freeBg[4];

static void find_layers(void) {
	memset(layers, 0, sizeof layers);
	memset(stageBg, 0, sizeof stageBg);
	if ((R16(0, 0) & 7) != 0) return;   /* stages use mode 0 */
	for (int k = 0; k < 3; k++) {
		const u8 *s = (const u8 *)(uintptr_t)(STAGE_LAYERS + k * 0x70);
		u32 td = *(u32 *)(s + 0x20), ch = *(u32 *)(s + 0x24), mp = *(u32 *)(s + 0x28);
		int bg = (*(u32 *)(s + 0x54) >> 4) & 0xF;
		if (!rom_ptr(td) || !rom_ptr(ch) || !rom_ptr(mp) || bg < 1 || bg > 3) continue;
		struct Layer L;
		L.bg = bg;
		/* scroll speed (256: with the camera); slower ones are backgrounds */
		L.backdrop = *(u32 *)(s + 0x44) != 0x100 || *(u32 *)(s + 0x48) != 0x100;
		L.x = *(s32 *)(s + 0x14);
		L.y = *(s32 *)(s + 0x18);
		L.tiledata = (const u16 *)(uintptr_t)td;
		L.chunks = (const u16 *)(uintptr_t)ch;
		L.map = (const u8 *)(uintptr_t)mp;
		/* (the map's rows are as long as the area is wide: header byte 0; byte 2
		   is not the width the level uses) */
		L.stride = L.map[0]; L.null = L.map[1]; L.w = L.backdrop ? L.map[2] : L.map[0]; L.h = L.map[3];
		if (!L.w || !L.h || L.w > L.stride) continue;
		if (!L.backdrop) stageBg[bg] = 1;
		if (!(R16(80, 0) & (0x100 << bg))) continue;
		/* agrees with video memory? (samples over the GBA screen, mid-frame line) */
		int match = 0, n = 0;
		u32 cb = ((R16(80, 0x08 + bg * 2) >> 2) & 3) * 0x4000;
		for (int sy = 8; sy < 160; sy += 36)
			for (int sx = 8; sx < 240; sx += 46) {
				int line = sy;
				u16 want = 0;
				s32 wx = line_world_x(&L, line) + sx, wy = line_world_y(&L, line) + sy;
				int have = level_entry(&L, wx, wy, &want);
				u16 got = vram_entry(bg, line, (R16(line, 0x10 + bg * 4) & 0x1FF) + sx, (R16(line, 0x12 + bg * 4) & 0x1FF) + sy);
				n++;
				/* (where the level has nothing, video memory must have nothing either) */
				if (have ? got == want : tile_empty(got, cb)) match++;
			}
		/* (the game changes some tiles in video memory: doors, blocks, bosses;
		   on the GBA screen the view draws from video memory) */
		if (match * 2 >= n) layers[bg] = L;
	}
	static int mism[4];
	for (int bg = 1; bg < 4; bg++) {
		mism[bg] = stageBg[bg] && !layers[bg].map && (R16(80, 0) & (0x100 << bg)) ? mism[bg] + 1 : 0;
		freeBg[bg] = 0;
		if (mism[bg] < 30) continue;
		/* (a pattern: few distinct tiles in its 256x256 map; level graphics have many) */
		u16 seen[24]; int ns = 0, many = 0;
		for (int ty = 0; ty < 32 && !many; ty++)
			for (int tx = 0; tx < 32 && !many; tx++) {
				u16 e = vram_entry(bg, 80, tx * 8, ty * 8) & 0x3FF;
				int i;
				for (i = 0; i < ns && seen[i] != e; i++) ;
				if (i == ns) { if (ns == 24) many = 1; else seen[ns++] = e; }
			}
		freeBg[bg] = !many;
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
	u8 idx = (vram[a] >> ((fx & 1) * 4)) & 15;
	return idx ? PAL16((e >> 12) * 16 + idx) & 0x7FFF : TRANSPARENT;
}

/* tile_pixel from a copy of video memory (graphics sets) */
static inline u16 tile_pixel_from(int src, u16 e, u32 charBase, int fx, int fy) {
	if (src <= 0) return tile_pixel(e, charBase, fx, fy);
	const u8 *vr = comboVram[src - 1];
	if (e & 0x400) fx = 7 - fx;
	if (e & 0x800) fy = 7 - fy;
	u32 a = charBase + (e & 0x3FF) * 32 + fy * 4 + (fx >> 1);
	if (a >= 0x10000) return TRANSPARENT;
	u8 idx = (vr[a] >> ((fx & 1) * 4)) & 15;
	return idx ? comboPal[src - 1][(e >> 12) * 16 + idx] & 0x7FFF : TRANSPARENT;
}

/* a level layer's row, from the level data */
static void draw_level_row(const struct Layer *L, int line, int vy, int ox, int oy, u16 *out, int w) {
	u32 charBase = ((R16(line, 0x08 + L->bg * 2) >> 2) & 3) * 0x4000;
	/* the scroll registers of GBA line `line` (the nearest one, for rows
	   outside the GBA screen) place screen row 0; this row is vy - oy below */
	s32 wy = line_world_y(L, line) + (vy - oy);
	s32 wx0 = line_world_x(L, line) - ox;
	if (fx[L->bg].kind) {
		int h, v;
		fx_regs(&fx[L->bg], vy - oy, &h, &v);
		wy = L->y + wrap_delta(v & 0x1FF, L->y) + (vy - oy);
		wx0 = L->x + wrap_delta(h & 0x1FF, L->x) - ox;
	}
	int fy = wy & 7;
	for (int vx = 0; vx < w;) {
		s32 wx = wx0 + vx;
		u16 e;
		int run = 8 - (wx & 7);
		if (!level_entry(L, wx, wy, &e)) {
			for (int k = 0; k < run && vx < w; k++) out[vx++] = TRANSPARENT;
			continue;
		}
		int fx = wx & 7;
		int src = levelSrc, ty = levelFy;
		for (int k = 0; k < run && vx < w; k++) out[vx++] = tile_pixel_from(src, e, charBase, fx++, ty);
	}
}

/* a text BG's row from video memory (backgrounds behind the stage): its
   tilemap repeats, as the GBA's does when it scrolls, so it covers the view;
   rows outside the GBA screen use the nearest GBA line's scroll */
static void draw_vram_row(int bg, int line, int vy, int oy, int ox, u16 *out, int w) {
	int l = vy - oy;
	/* a stage layer the level data could not draw this frame (it is being
	   rebuilt): its tilemap holds only what is around the GBA screen */
	int gbaOnly = stageBg[bg] && !freeBg[bg];
	if (gbaOnly && (l < 0 || l >= SCREEN_H)) { for (int x = 0; x < w; x++) out[x] = TRANSPARENT; return; }
	u16 cnt = R16(line, 0x08 + bg * 2);
	if (cnt & 0x80) { for (int x = 0; x < w; x++) out[x] = TRANSPARENT; return; }   /* (256-colour layers: not in stages) */
	u32 charBase = ((cnt >> 2) & 3) * 0x4000;
	int hofs = R16(line, 0x10 + bg * 4) & 0x1FF, vofs = R16(line, 0x12 + bg * 4) & 0x1FF;
	/* rows beyond the GBA screen repeat its first or last line (games scroll
	   such layers line by line for gradients) */
	int py = (l < 0 ? 0 : l >= SCREEN_H ? SCREEN_H - 1 : l) + vofs;
	if (freeBg[bg]) py = l + vofs;   /* (it repeats up and down too) */
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

extern long frameCount;
/* ------------------------------------------------------------ threads
 *
 * The view's rows are drawn by several threads (each row only reads the
 * frame's state). */
static int rw, rh, rox, roy;   /* the frame being drawn */

static void render_row(int vy) {
	int w = rw, h = rh, ox = rox, oy = roy;
	(void)h;
	ensure_buffers(w);
	do {
		int line = vy - oy;
		if (line < 0) line = 0;
		if (line >= SCREEN_H) line = SCREEN_H - 1;
		u32 *dst = view_frame + (size_t)vy * w;
		u16 dispcnt = R16(line, 0);
		if (dispcnt & 0x80) { for (int x = 0; x < w; x++) dst[x] = 0xFFFFFF; break; }
		int bgOn[4];
		for (int bg = 0; bg < 4; bg++) {
			bgOn[bg] = (dispcnt & (0x100 << bg)) && (debug.layerMask & (1 << bg));
			if (!bgOn[bg]) continue;
			if (layers[bg].map) {
				draw_level_row(&layers[bg], line, vy, ox, oy, bgRow[bg], w);
				/* on the GBA screen, what video memory has (the game's own
				   changes to the tiles show) */
				if (!layers[bg].backdrop && !fx[bg].kind && vy - oy >= 0 && vy - oy < SCREEN_H) gba_vram_span(bg, vy - oy, ox, bgRow[bg], w);
			}
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
		for (int bg = 0; bg < 4; bg++) bgPrio[bg] = R16(line, 0x08 + bg * 2) & 3;
		u16 backdrop = PAL16(0) & 0x7FFF;
		for (int x = 0; x < w; x++) {
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
		}
		} while (0);
}

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
	drawing = 1;
	for (int i = 0; i < nThreads; i++) SDL_SemPost(startSem);
	render_some();
	for (int i = 0; i < nThreads; i++) SDL_SemWait(doneSem);
	drawing = 0;
}

#define EDGE 8              /* pixels of the GBA screen's edges that may be undrawable */
#define SWITCH_FRAMES 8     /* frames in a row before the view changes */
static int shownFrames, badFrames, lastOx, lastOy;

/* how far the view reaches beyond the GBA screen on each side (0: GBA picture) */
int view_ext_left, view_ext_right, view_ext_up, view_ext_down;
int view_gameplay;   /* this frame is a stage with no cutscene running */

static int hud_pixel(int x, int y);

/* the GBA picture, at (ox, oy) in the view, without its HUD (BG0), which
   the view draws at its edges */
static void paste_gba(int w, int h, int ox, int oy) {
	for (int y = 0; y < SCREEN_H; y++) {
		int vy = y + oy;
		if (vy < 0 || vy >= h) continue;
		for (int x = 0; x < SCREEN_W; x++) {
			int vx = x + ox;
			if (vx >= 0 && vx < w && !hud_pixel(x, y)) view_frame[(size_t)vy * w + vx] = ppu_frame[y * SCREEN_W + x];
		}
	}
}

int view_render(void) {
	set_ranges(view_w, view_h);
	view_active = 0;
	view_cells_left = view_cells_right = view_cells_up = view_cells_down = 0;
	view_ext_left = view_ext_right = view_ext_up = view_ext_down = 0;
	find_layers();
	find_fx();
	view_gameplay = !(EVENT_FLAGS & 1) && (GAME_MODE == 3 || GAME_MODE == 4) &&
	                ((layers[1].map && !layers[1].backdrop) || (layers[2].map && !layers[2].backdrop) || (layers[3].map && !layers[3].backdrop));
	if (view_w == SCREEN_W && view_h == SCREEN_H) { shownFrames = 0; return 0; }
	/* cutscenes (an event script is running): the GBA picture, as it is */
	if (EVENT_FLAGS & 1) { shownFrames = 0; return 0; }
	/* menus over the stage (pause, continue): the GBA picture */
	if (GAME_MODE != 3 && GAME_MODE != 4) { shownFrames = 0; return 0; }
	int w = view_w, h = view_h;
	view_frame = realloc(view_frame, (size_t)w * h * 4);
	ensure_buffers(w);
	if (!layers[1].map && !layers[2].map && !layers[3].map) {
		/* not a stage picture (menus, fades): after a few frames the GBA
		   picture; until then the GBA picture inside the view */
		if (!shownFrames || ++badFrames >= SWITCH_FRAMES) { shownFrames = 0; return 0; }
		for (size_t i = 0; i < (size_t)w * h; i++) view_frame[i] = 0;
		paste_gba(w, h, lastOx, lastOy);
		view_active = 1;
		return 1;
	}
	badFrames = 0;

	/* where the GBA screen sits in the view: centred, then kept inside the
	   stage when the stage is big enough */
	/* the stage layer (not a background) */
	const struct Layer *T = NULL;
	for (int k = 1; k < 4 && !T; k++)
		if (layers[k].map && !layers[k].backdrop) T = &layers[k];
	if (!T) {   /* no stage layer (only backgrounds): the GBA picture */
		if (!shownFrames || ++badFrames >= SWITCH_FRAMES) { shownFrames = 0; return 0; }
		for (size_t i = 0; i < (size_t)w * h; i++) view_frame[i] = 0;
		paste_gba(w, h, lastOx, lastOy);
		view_active = 1;
		return 1;
	}
	s32 x0 = line_world_x(T, 0), y0 = line_world_y(T, 0);
	/* the stage's origin in the world: the camera's top-left (global) minus
	   the layer's (whole chunks apart) */
	stageX = ((CAMERA_X >> 8) - 120) - T->x;
	stageY = ((CAMERA_Y >> 8) - 80) - T->y;
	stageX = (stageX + 120) / 240 * 240;
	stageY = (stageY + 80) / 160 * 160;
	find_area();
	find_reach((CAMERA_X >> 8) / 240, (CAMERA_Y >> 8) / 160);
	memset(chunkOk, 0, sizeof chunkOk);
	/* the copies with other graphics sets are kept for a while (rebuilt when
	   the loaded sets change, and every half second for animated tiles) */
	{
		static u32 lastKey; static int age;
		u32 key = (u32)GFX_SET_A << 16 | GFX_SET_B;
		if (key != lastKey || ++age >= 30) { nCombos = 0; age = 0; lastKey = key; }
	}
	gbaCx0 = (x0 + stageX) / 240; gbaCx1 = (x0 + stageX + SCREEN_W - 1) / 240;
	gbaCy0 = (y0 + stageY) / 160; gbaCy1 = (y0 + stageY + SCREEN_H - 1) / 160;
	static int dbg = -1;
	if (dbg < 0) dbg = getenv("VIEWDEBUG") != NULL;
	if (dbg) fprintf(stderr, "F%ld cam %d,%d layer %d,%d stage %d,%d area %d..%d x %d..%d (area %d) x0 %d y0 %d\n",
	        frameCount, CAMERA_X >> 8, CAMERA_Y >> 8, T->x, T->y, stageX, stageY, areaLeft, areaRight, areaTop, areaBottom, CUR_AREA, x0, y0);
	/* can the level data draw the GBA screen itself? (not during area changes
	   or anything else the level data does not show; a few pixels at its
	   edges do not matter, for screen shakes) If not, the GBA picture is put
	   in its place, so the view stays as it is. */
	int gbaOver = 0;
	for (int k = 0; k < 4; k++) {
		s32 gx = x0 + stageX + (k & 1 ? SCREEN_W - 1 - EDGE : EDGE);
		s32 gy = y0 + stageY + (k & 2 ? SCREEN_H - 1 - EDGE : EDGE);
		if (!chunk_drawable(gx / 240, gy / 160)) gbaOver = 1;
	}
	if (dbg && gbaOver) fprintf(stderr, "GBA screen not drawable\n");
	if (dbg) { const s32 *c = (const s32 *)(uintptr_t)0x02022C44; fprintf(stderr, "  camera x %d y %d limits %d %d %d %d\n", c[0x38/4] >> 8, c[0x3C/4] >> 8, c[0x5C/4] >> 8, c[0x60/4] >> 8, c[0x64/4] >> 8, c[0x68/4] >> 8); }
	shownFrames++;
	int ox = (w - SCREEN_W) / 2, oy = (h - SCREEN_H) / 2;
	/* kept inside what the current area has (its chunks with something in
	   them, stage coordinates); centred on it where it is smaller */
	s32 cL, cT, cR, cB;
	{
		/* (the same while the area and its sets are) */
		static s32 bL, bT, bR, bB; static u32 bKey = ~0u; static s32 bStageX, bStageY;
		u32 key = ((u32)CUR_AREA << 24 ^ (u32)GFX_SET_A << 12 ^ GFX_SET_B) + reachKey * 2654435761u;
		static int bFill = -1;
		if (key != bKey || stageX != bStageX || stageY != bStageY || bFill != settings.fillGaps) {
			content_bounds(&bL, &bT, &bR, &bB);
			for (int k = 1; k < 4; k++) {
				if (settings.fillGaps) { fill_get(k, key); if (fills[k].on) { fill_shot_in = 90; fill_shot_key = key ^ (u32)stageX << 4 ^ (u32)stageY; } }
				else { free(fills[k].mt); free(fills[k].donor); memset(&fills[k], 0, sizeof fills[k]); }
			}
			bKey = key; bStageX = stageX; bStageY = stageY; bFill = settings.fillGaps;
		}
		fit_target();
		cL = bL; cT = bT; cR = bR; cB = bB;
	}
	s32 left = x0 - ox, top = y0 - oy;
	if (cR - cL >= w) { if (left < cL) left = cL; if (left > cR - w) left = cR - w; }
	else left = cL + (cR - cL - w) / 2;
	if (cB - cT >= h) { if (top < cT) top = cT; if (top > cB - h) top = cB - h; }
	else top = cT + (cB - cT - h) / 2;
	/* (the GBA screen always stays in the view) */
	if (left > x0) left = x0;
	if (left + w < x0 + SCREEN_W) left = x0 + SCREEN_W - w;
	if (top > y0) top = y0;
	if (top + h < y0 + SCREEN_H) top = y0 + SCREEN_H - h;
	ox = x0 - left;
	oy = y0 - top;
	if (dbg) fprintf(stderr, "  content %d..%d x %d..%d, ox %d oy %d, layers %d%d%d backdrop %d%d%d gbaOver %d\n", cL, cR, cT, cB, ox, oy,
	        layers[1].map != NULL, layers[2].map != NULL, layers[3].map != NULL, layers[1].backdrop, layers[2].backdrop, layers[3].backdrop, gbaOver);
	/* sprites for the next frames: the cells the view covers, plus what can
	   reach into it (sprite pieces are at most 64 pixels) */
	view_cells_left = cells(ox + 64, 240);
	view_cells_right = cells(w - ox - SCREEN_W, 240);
	view_cells_up = cells(oy + 64, 160);
	view_cells_down = cells(h - oy - SCREEN_H, 160);
	view_ext_left = ox; view_ext_right = w - ox - SCREEN_W;
	view_ext_up = oy; view_ext_down = h - oy - SCREEN_H;
	lastOx = ox; lastOy = oy;

	draw_hud(w, h, ox, oy);
	/* where each chunk the view can show is drawn from (before the threads) */
	for (int k = 1; k < 4; k++) {
		const struct Layer *L = &layers[k];
		if (!L->map || L->backdrop) continue;
		s32 lx = line_world_x(L, 0) - ox, ty = line_world_y(L, 0) - oy;
		for (s32 cy = (ty - 320) / 160 - 1; cy <= (ty + h + 320) / 160 + 1; cy++)
			for (s32 cx = (lx - 512) / 240 - 1; cx <= (lx + w + 512) / 240 + 1; cx++)
				if (cx >= 0 && cy >= 0) chunk_source(cx + stageX / 240, cy + stageY / 160);
	}
	if (getenv("CHUNKDEBUG") && dbg) {
		s32 lx = x0 - ox, ty = y0 - oy;
		for (s32 cy = ty / 160 - 1; cy <= (ty + h) / 160; cy++) {
			fprintf(stderr, "  ");
			for (s32 cx = lx / 240 - 1; cx <= (lx + w) / 240; cx++) {
				int gx = cx + stageX / 240, gy = cy + stageY / 160;
				if (cx < 0 || cy < 0 || gx >= 128 || gy >= 128) { fprintf(stderr, " ....."); continue; }
				fprintf(stderr, " %d:%02X%c", CHUNK_AREA[gy * 128 + gx] & 15, chunk_sets(gx, gy, CUR_AREA & 0x7F) & 0xFF, "x0123456789ab"[chunk_source(gx, gy) + 1]);
			}
			fprintf(stderr, "\n");
		}
		fprintf(stderr, "  loaded %04X %04X combos %d\n", GFX_SET_A, GFX_SET_B, nCombos);
	}
	render_rows(w, h, ox, oy);
	if (gbaOver) paste_gba(w, h, ox, oy);
	view_active = 1;
	return 1;
}
