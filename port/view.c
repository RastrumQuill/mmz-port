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
u8 *view_layers;                            /* view_w x view_h: top | second << 4 (as ppu_layers; 5 backdrop) */

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
static u8 chunkOff[128][128];   /* chunks under the GBA screen: the source of their part off it, + 2 */
static s32 gbaL, gbaT;          /* the GBA screen's top-left this frame, global pixels */
static int hideUnshown = -1;     /* MMZ_HIDEUNSHOWN=1: the old way, the level drawn only where shown (and reached) */
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
   level uses inside its chunks) and uses the same graphics sets is drawn
   even across a camera step: it is the same place to the eye (the camera
   only stops there). The rooms under the desert floor are set in its sand
   but use indoor graphics, so they stay hidden. */
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

static int chunk_sets(int cx, int cy, int area);
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
			if ((l2 > lv + 1 || l2 < lv - 1) && (getenv("MMZ_NOCONT") || chunk_sets(nx, ny, area) != chunk_sets(x, y, area) || !continues(x, y, nx, ny))) continue;
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
#define MAX_FILL_COMBOS 16   /* (more, only for the tile fill: it draws from every graphics class of the area) */
static u8 comboVram[MAX_COMBOS + MAX_FILL_COMBOS][0x10000];
static u16 comboPal[MAX_COMBOS + MAX_FILL_COMBOS][256];
static int comboKey[MAX_COMBOS + MAX_FILL_COMBOS], nCombos, nFillCombos;

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
static int combo_load(int i, int area, int hi, int lo);
static int combo(int area, int hi, int lo) {
	int key = area << 8 | hi << 4 | lo;
	for (int i = 0; i < nCombos; i++)
		if (comboKey[i] == key) return i;
	if (nCombos == MAX_COMBOS) return -1;
	return combo_load(nCombos++, area, hi, lo);
}
/* the same for the tile fill: its own copies (the level's chunks are drawn
   as without it), sharing the level's ones */
static int combo_fill(int area, int hi, int lo) {
	int key = area << 8 | hi << 4 | lo;
	for (int i = 0; i < nCombos; i++)
		if (comboKey[i] == key) return i;
	for (int i = MAX_COMBOS; i < MAX_COMBOS + nFillCombos; i++)
		if (comboKey[i] == key) return i;
	if (nFillCombos == MAX_FILL_COMBOS) return -1;
	return combo_load(MAX_COMBOS + nFillCombos++, area, hi, lo);
}
static int combo_load(int i, int area, int hi, int lo) {
	int key = area << 8 | hi << 4 | lo;
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
	if (hideUnshown < 0) hideUnshown = getenv("MMZ_HIDEUNSHOWN") != NULL;
	int src = -1, area = CUR_AREA & 0x7F;
	int onGba = cx >= gbaCx0 && cx <= gbaCx1 && cy >= gbaCy0 && cy <= gbaCy1;
	/* (a chunk of the area the camera does not reach, a wall between rooms
	   or a room it never goes to, is drawn too, with its own sets: it is
	   the area's own art; MMZ_HIDEUNSHOWN=1: not) */
	u8 ca = CHUNK_AREA[cy * 128 + cx];
	if ((ca & 15) == area && (reach[cy][cx] || onGba || (!hideUnshown && ca < 0xF0))) {
		int b = chunk_sets(cx, cy, area);
		if (b >= 0) {
			int hi = b >> 4, lo = b & 15;
			/* 14: the set of the chunk to the right, 15: of the one below */
			int hx = cx + (hi == 14), hy = cy + (hi == 15), lx = cx + (lo == 14), ly = cy + (lo == 15);
			if (hi >= 14) { int n = chunk_sets(hx, hy, area); hi = n >= 0 ? n >> 4 : -1; }
			if (lo >= 14) { int n = chunk_sets(lx, ly, area); lo = n >= 0 ? n & 15 : -1; }
			/* on the GBA screen the game shows it with what is loaded (it does
			   not always have both sets of a chunk it shows, at their borders) */
			int own = -1;   /* with its own sets */
			if (hi >= 0 && lo >= 0 && hi < 14 && lo < 14) {
				if (set_loaded(hi, GFX_SET_A, area) && set_loaded(lo, GFX_SET_B, area)) own = 0;
				else { int c = combo(area, hi, lo); own = c >= 0 ? 1 + c : -1; }
			}
			/* (the part of it off the GBA screen: with its own sets, as the
			   game would load them for a camera there; not with the loaded
			   ones, issue #9) */
			if (onGba) { src = 0; chunkOff[cy][cx] = own + 2; }
			else src = own;
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

/* ------------------------------------------------------------ shown
 *
 * What the GBA camera can show of the current area (issue #9). The level
 * data has rooms the camera never goes to (a room under the train's floor,
 * labelled like a test room, drawn with graphics sets the game never loads
 * there): the chunk levels let the camera go there, but Zero cannot. The
 * camera follows Zero (sub_08014030 modes 3-5: his position, 16-24 pixels
 * above, pulled back from level steps by sub_080066F8, not moving while he
 * is in a level-15 chunk, sub_080066AC), so what it can show is the GBA
 * screens around the places Zero can be: a flood fill over the area's
 * metatiles from where Zero is, through the ones the collision lets him
 * through (sub_080079CC at four points; the objects' solid blocks, doors
 * and shutters, left out), and each one's camera screen. Plus every screen
 * the GBA camera really showed while in the area (cutscenes move it on
 * their own). The rest of the level layers is not drawn (as if the chunk
 * were empty: the gap fill or what is behind shows). Off: MMZ_NOSHOWN=1.
 */
static u8 *shownMap;              /* per metatile of the area: 1 the camera can show it */
static u8 zeroChunk[128][128];       /* chunks with a metatile Zero can reach (shown_build) */
static u8 *solidMap;              /* [y][x] of the shown map: 1 solid metatile, 2 open and reached, 0 open not reached (kept_build) */
static int shownW, shownH, shownOn;
static u32 shownKey = ~0u;
extern long frameCount;
static long shownFrom = -1;       /* (debug) */

static int level_at(s32 x, s32 y) {   /* sub_08006B4C, global pixels */
	if (x < 0 || y < 0 || x >= 128 * 240 || y >= 128 * 160) return 15;
	u8 a = CHUNK_AREA[(y / 160) * 128 + x / 240];
	if ((a >> 4) == 15) return 15;
	const u8 *d = area_desc(a & 15);
	s32 left = *(s32 *)(d + 0x6C), top = *(s32 *)(d + 0x70);
	const u8 *map = (const u8 *)(uintptr_t)*(u32 *)(d + 0x7C);
	if (!map) return 0;
	u16 shift = *(const u16 *)map;
	return ((const u16 *)(map + 8))[((y / 160 - top) << shift) + (x / 240 - left)] >> 12;
}

/* the camera's centre for a wanted one, pulled back from level steps (sub_080066F8) */
static void camera_edge(s32 *x, s32 *y) {
	int here = (s8)level_at(*x, *y) + 1;
	s32 dx = 0, dy = 0;
	if ((u8)(here - level_at(*x - 120, *y)) > 2) dx += 120 - *x % 120;
	if ((u8)(here - level_at(*x + 120, *y)) > 2) dx -= *x % 120;
	if ((u8)(here - level_at(*x, *y - 80)) > 2) dy += 80 - *y % 80;
	if ((u8)(here - level_at(*x, *y + 80)) > 2) dy -= *y % 80;
	*x += dx; *y += dy;
}

/* can Zero be in this metatile (global pixels of its top-left)? */
static int metatile_open(s32 x, s32 y) {
	static const int pt[4][2] = { { 4, 4 }, { 12, 4 }, { 4, 12 }, { 12, 12 } };
	/* (bit 7: climbable, a ladder and its top, which he stands on but also
	   climbs through: open, so a ladder shaft leads on up / down) */
	for (int k = 0; k < 4; k++) {
		u8 a = (u8)LIFT_CALL(sub_080079CC, (x + pt[k][0]) << 8, (y + pt[k][1]) << 8, 0, 0);
		if (!a || (a & 0x80 && a != 0xFF)) return 1;
	}
	return 0;
}

static void shown_mark(s32 cx, s32 cy, s32 *diff) {   /* a GBA screen centred there */
	int x0 = (cx - 120 - areaLeft) >> 4, y0 = (cy - 80 - areaTop) >> 4, x1 = (cx + 119 - areaLeft) >> 4, y1 = (cy + 79 - areaTop) >> 4;
	if (x0 < 0) x0 = 0; if (y0 < 0) y0 = 0; if (x1 >= shownW) x1 = shownW - 1; if (y1 >= shownH) y1 = shownH - 1;
	if (x0 > x1 || y0 > y1) return;
	int W = shownW + 1;
	diff[y0 * W + x0]++; diff[y0 * W + x1 + 1]--; diff[(y1 + 1) * W + x0]--; diff[(y1 + 1) * W + x1 + 1]++;
}

static void shown_build(void) {
	int area = CUR_AREA & 0x7F;
	/* the camera's limits (gCamera left, right, top, bottom: the screen's
	   edges), while it has them (a stage's rooms set them; 0: none) */
	const s32 *lim = (const s32 *)(uintptr_t)0x02022CA0u;
	s32 limL = lim[0] >> 8, limR = lim[1] >> 8, limT = lim[2] >> 8, limB = lim[3] >> 8;
	int limOn = limR - limL >= SCREEN_W && limB - limT >= SCREEN_H;
	u32 key = (u32)area << 24 ^ AREA_STATES * 2654435761u ^ (limOn ? (u32)limT * 7919u ^ (u32)limB * 104729u : 0);
	s32 camX = CAMERA_X >> 8, camY = CAMERA_Y >> 8;
	static int off = -1;
	if (off < 0) off = getenv("MMZ_NOSHOWN") != NULL;
	if (hideUnshown < 0) hideUnshown = getenv("MMZ_HIDEUNSHOWN") != NULL;
	if (off) { shownOn = 0; return; }
	if (key != shownKey) {
		u32 z = *(u32 *)(uintptr_t)0x02022B7Cu;   /* Zero (gStageState.cutscene.slots[0].actor) */
		if (z < 0x02000000 || z >= 0x0203FF00 || GAME_MODE != 3) { shownOn = 0; return; }
		s32 zx = *(s32 *)(uintptr_t)(z + 0x4C) >> 8, zy = *(s32 *)(uintptr_t)(z + 0x50) >> 8;
		shownKey = key;
		shownW = (areaRight - areaLeft) / 16; shownH = (areaBottom - areaTop) / 16;
		size_t n = (size_t)shownW * shownH;
		u8 *open = calloc(n, 1);   /* 0 unknown, 1 open, 2 closed, | 4 reached */
		int *q = malloc(n * sizeof *q);
		s32 *diff = calloc((size_t)(shownW + 1) * (shownH + 1), sizeof *diff);
		free(shownMap);
		shownMap = calloc(n, 1);
		if (!open || !q || !diff || !shownMap) { free(open); free(q); free(diff); shownOn = 0; return; }
		/* the lifted calls run here, between the game's own: its registers
		   and the clock are put back */
		struct Cpu saved = cpu;
		u32 sPc = lift_pc, sT1 = lift_tail_lr, sT2 = lift_tail_lr2, sRet = lift_ret, sCyc = lift_cycles;
		int sTail = lift_tail, sVoid = lift_void;
		u16 *numBlocks = (u16 *)(uintptr_t)0x0200520Eu, sBlocks = *numBlocks;
		*numBlocks = 0;
		cpu.r[13] = (cpu.r[13] - 64) & ~7u;
		int h = 0, t = 0;
		s32 seeds[2][2] = { { zx, zy - 8 }, { camX, camY + 20 } };
		for (int k = 0; k < 2; k++) {
			int tx = (seeds[k][0] - areaLeft) >> 4, ty = (seeds[k][1] - areaTop) >> 4;
			if (tx < 0 || ty < 0 || tx >= shownW || ty >= shownH || open[ty * shownW + tx] & 4) continue;
			open[ty * shownW + tx] = 4 | 1; q[t++] = ty * shownW + tx;
		}
		while (h < t) {
			int i = q[h++], tx = i % shownW, ty = i / shownW;
			s32 fx = areaLeft + tx * 16 + 8, fy = areaTop + ty * 16 + 15;   /* Zero's feet in it */
			if (level_at(fx, fy) != 15) {
				s32 cx = fx, cy = fy - 20; camera_edge(&cx, &cy);
				/* (inside the camera's limits: a place Zero can be but the
				   screen cannot follow him to, e.g. the roof of a train in a
				   station, shows the screen the camera stops at) */
				if (limOn) {   /* (up and down only: the left / right ones lock a room's
				                  sides behind a checkpoint or a shutter, and the wide
				                  view shows what is beyond as the level goes on there) */
					if (cy > limB - SCREEN_H / 2) cy = limB - SCREEN_H / 2;
					if (cy < limT + SCREEN_H / 2) cy = limT + SCREEN_H / 2;
				}
				shown_mark(cx, cy, diff);
			}
			static const int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };
			for (int d = 0; d < 4; d++) {
				int nx = tx + dx[d], ny = ty + dy[d];
				if (nx < 0 || ny < 0 || nx >= shownW || ny >= shownH) continue;
				u8 *o = &open[ny * shownW + nx];
				if (*o & 4) continue;
				if (!(*o & 3)) *o = metatile_open(areaLeft + nx * 16, areaTop + ny * 16) ? 1 : 2;
				if (*o == 2) continue;
				*o |= 4; q[t++] = ny * shownW + nx;
			}
		}
		int W = shownW + 1;
		for (int y = 0; y < shownH; y++)
			for (int x = 0; x < shownW; x++) {
				s32 v = diff[y * W + x] + (x ? diff[y * W + x - 1] : 0) + (y ? diff[(y - 1) * W + x] : 0) - (x && y ? diff[(y - 1) * W + x - 1] : 0);
				diff[y * W + x] = v;
				shownMap[y * shownW + x] = v > 0;
			}
		/* a solid mass the screen shows a part of goes on sideways, to open
		   space (a train's body under its roof, seen from its front) */
		for (int y = 0; y < shownH; y++)
			for (int dir = -1; dir <= 1; dir += 2)
				for (int x0 = 0; x0 < shownW; x0++) {
					int x = dir > 0 ? x0 : shownW - 1 - x0, px = x - dir;
					if (px < 0 || px >= shownW || shownMap[y * shownW + x] || shownMap[y * shownW + px] != 1) continue;
					u8 *o = &open[y * shownW + x], *po = &open[y * shownW + px];
					if (!(*po & 3)) *po = metatile_open(areaLeft + px * 16, areaTop + y * 16) ? 1 : 2;
					if ((*po & 3) != 2) continue;
					if (!(*o & 3)) *o = metatile_open(areaLeft + x * 16, areaTop + y * 16) ? 1 : 2;
					if ((*o & 3) == 2) shownMap[y * shownW + x] = 1;
				}
		memset(zeroChunk, 0, sizeof zeroChunk);
		for (size_t i = 0; i < n; i++)
			if (open[i] & 4) {
				int gx = (areaLeft + (int)(i % shownW) * 16) / 240, gy = (areaTop + (int)(i / shownW) * 16) / 160;
				if (gx >= 0 && gy >= 0 && gx < 128 && gy < 128) zeroChunk[gy][gx] = 1;
			}
		/* every metatile's collision, for the kept map (kept_build) */
		free(solidMap);
		solidMap = malloc(n);
		if (solidMap)
			for (size_t i = 0; i < n; i++) {
				u8 o = open[i] & 3;
				solidMap[i] = o ? (o == 2 ? 1 : open[i] & 4 ? 2 : 0) : !metatile_open(areaLeft + (int)(i % shownW) * 16, areaTop + (int)(i / shownW) * 16);
			}
		*numBlocks = sBlocks;
		cpu = saved;
		lift_pc = sPc; lift_tail_lr = sT1; lift_tail_lr2 = sT2; lift_ret = sRet; lift_cycles = sCyc; lift_tail = sTail; lift_void = sVoid;
		shownOn = t > 0;
		shownFrom = frameCount;
		if (getenv("SHOWNDEBUG")) {   /* the flood and the shown map around Zero: '#' closed, 'o' open not reached, '+' reached; capitals: shown */
			int tx0 = getenv("SHOWNDEBUG")[0] == 'L' ? 0 : (zx - areaLeft) / 16 - 30, ty0 = (zy - areaTop) / 16 - 12;
			for (int y = ty0; y < ty0 + 30; y++) {
				for (int x = tx0; x < tx0 + 60; x++) {
					if (x < 0 || y < 0 || x >= shownW || y >= shownH) { fputc(' ', stderr); continue; }
					u8 o = open[y * shownW + x];
					int sh = diff[y * (shownW + 1) + x] > 0;
					fputc(o & 4 ? (sh ? '+' : '*') : o == 1 ? (sh ? 'O' : 'o') : o == 2 ? (sh ? '#' : '=') : (sh ? '?' : '.'), stderr);
				}
				fputc('\n', stderr);
			}
		}
		free(open); free(q); free(diff);
		if (getenv("VIEWDEBUG")) fprintf(stderr, "shown: area %d %dx%d metatiles, %d reachable from Zero %d,%d\n", area, shownW, shownH, t, zx, zy);
	}
	/* what the GBA screen shows now is shown */
	if (shownOn) {
		int x0 = (camX - 120 - areaLeft) >> 4, y0 = (camY - 80 - areaTop) >> 4;
		for (int y = y0; y <= y0 + 10; y++)
			for (int x = x0; x <= x0 + 15; x++)
				if (x >= 0 && y >= 0 && x < shownW && y < shownH) shownMap[y * shownW + x] = 1;
	}
}

/* can the GBA camera show this global pixel? (1 when not known) */
static int shown_at(s32 gx, s32 gy) {
	if (!shownOn) return 1;
	s32 x = (gx - areaLeft) >> 4, y = (gy - areaTop) >> 4;
	if (x < 0 || y < 0 || x >= shownW || y >= shownH) return 0;
	return shownMap[y * shownW + x];
}

/* ------------------------------------------------------------ kept
 *
 * Where the camera never shows a cell, its art is drawn only where it goes
 * on from what is shown (a wall or pipes past the screen's reach, a train's
 * body): a flood from the shown cells through never-shown cells whose chunk
 * is drawn with its own sets, at most KEEP_DIST metatiles out and through
 * at most KEEP_SOLID solid metatiles in a row, never from a solid metatile
 * into open space (a room behind a wall or floor), into open space only
 * where Zero can get to, and only in chunks
 * with a metatile Zero can reach. A room sealed in the ground
 * (the tank room under mission 9's sand) stays black / filled. Each frame,
 * after chunk_source()'s chunks are known.
 */
#define KEEP_DIST 15
#define KEEP_SOLID 3

static u8 *keptMap;    /* [y][x]: 1 shown or drawn */
static int chunk_own(int gx, int gy);
static void kept_build(void) {
	free(keptMap); keptMap = NULL;
	if (!shownOn || !shownMap || !solidMap || hideUnshown) return;
	size_t n = (size_t)shownW * shownH;
	keptMap = calloc(n, 1);
	u8 *run = malloc(n), *dist = malloc(n);
	int *q = malloc(n * 4 * sizeof *q);
	signed char *own = malloc((size_t)128 * 128);
	if (!keptMap || !run || !dist || !q || !own) { free(keptMap); keptMap = NULL; free(run); free(dist); free(q); free(own); return; }
	memset(run, 0xFF, n); memset(own, -1, (size_t)128 * 128);

	size_t h = 0, t = 0, cap = n * 4;
	for (size_t i = 0; i < n; i++)
		if (shownMap[i]) {
			/* (a shown cell of a chunk the camera does not reach, that Zero
			   cannot be in, e.g. the row past the GBA screen's edge over a
			   sealed room: as before, not drawn) */
			int gx = (areaLeft + (int)(i % shownW) * 16) / 240, gy = (areaTop + (int)(i / shownW) * 16) / 160;
			if (gx >= 0 && gy >= 0 && gx < 128 && gy < 128 && !reach[gy][gx] && !zeroChunk[gy][gx] &&
			    !(gx >= gbaCx0 && gx <= gbaCx1 && gy >= gbaCy0 && gy <= gbaCy1)) continue;
			keptMap[i] = 1; run[i] = 0; dist[i] = 0; q[t++] = (int)i;
		}
	while (h < t) {
		int i = q[h++], x = i % shownW, y = i / shownW;
		if (dist[i] >= KEEP_DIST) continue;
		static const int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };
		for (int d = 0; d < 4; d++) {
			int nx = x + dx[d], ny = y + dy[d];
			if (nx < 0 || ny < 0 || nx >= shownW || ny >= shownH) continue;
			int j = ny * shownW + nx;
			if (shownMap[j]) continue;
			int gx = (areaLeft + nx * 16) / 240, gy = (areaTop + ny * 16) / 160;
			if (gx < 0 || gy < 0 || gx >= 128 || gy >= 128) continue;
			signed char *o = &own[gy * 128 + gx];
			if (*o < 0) *o = chunk_own(gx, gy);
			if (!*o) continue;
			/* (only in a chunk Zero can be in: another chunk the chunk levels
			   let the camera reach is a room of its own, e.g. sealed under the
			   ground) */
			if (!zeroChunk[gy][gx]) continue;
			/* (open space past a solid metatile is another room: the shown
			   flood would have got there if it were this one) */
			if (solidMap[i] == 1 && solidMap[j] != 1) continue;
			/* (open space Zero cannot get to is not this room either) */
			if (solidMap[j] == 0) continue;
			int r = solidMap[j] == 1 ? run[i] + 1 : 0;
			if (r > KEEP_SOLID || r >= run[j]) continue;
			run[j] = r; dist[j] = dist[i] + 1; keptMap[j] = 1;
			if (t < cap) q[t++] = j;
		}
	}
	free(run); free(dist); free(q); free(own);
}
static int kept_at(s32 gx, s32 gy) {
	if (!keptMap) return shown_at(gx, gy);
	s32 x = (gx - areaLeft) >> 4, y = (gy - areaTop) >> 4;
	if (x < 0 || y < 0 || x >= shownW || y >= shownH) return 0;
	return keptMap[y * shownW + x];
}

/* is the chunk drawn with its own sets (chunk_source(), and off the GBA
   screen chunkOff)? */
static int chunk_own(int gx, int gy) {
	int src = chunk_source(gx, gy);
	if (src < 0) return 0;
	return src > 0 || !chunkOff[gy][gx] || chunkOff[gy][gx] >= 2;
}
/* a metatile of the area in the crop: shown, or drawn with its own art */
static int cell_kept(int x, int y) {
	if (shownMap[y * shownW + x]) return 1;
	if (hideUnshown || !keptMap) return 0;
	return keptMap[y * shownW + x];
}

/* the part of the shown map around a point, global pixels: the rows
   (contiguous with the point's row) that have a shown metatile in the
   columns cx - bw/2 .. cx + bw/2, then the columns (contiguous) with one in
   those rows within cy - bh/2 .. cy + bh/2. 0: no shown map. */
static int shown_region(s32 cx, s32 cy, s32 bw, s32 bh, s32 *L, s32 *T, s32 *R, s32 *B) {
	if (!shownOn || !shownMap) return 0;
	int c0 = (cx - bw / 2 - areaLeft) >> 4, c1 = (cx + bw / 2 - areaLeft) >> 4, mx = (cx - areaLeft) >> 4, my = (cy - areaTop) >> 4;
	if (c0 < 0) c0 = 0; if (c1 >= shownW) c1 = shownW - 1;
	if (mx < 0 || my < 0 || mx >= shownW || my >= shownH || c0 > c1) return 0;
#define ROW_ANY(r, a, b) ({ int f_ = 0; for (int x_ = (a); x_ <= (b) && !f_; x_++) f_ = cell_kept(x_, (r)); f_; })
#define COL_ANY(c, a, b) ({ int f_ = 0; for (int y_ = (a); y_ <= (b) && !f_; y_++) f_ = cell_kept((c), y_); f_; })
	int r0 = my, r1 = my;
	while (r0 > 0 && ROW_ANY(r0 - 1, c0, c1)) r0--;
	while (r1 < shownH - 1 && ROW_ANY(r1 + 1, c0, c1)) r1++;
	int q0 = (cy - bh / 2 - areaTop) >> 4, q1 = (cy + bh / 2 - areaTop) >> 4;
	if (q0 < r0) q0 = r0; if (q1 > r1) q1 = r1;
	int k0 = mx, k1 = mx;
	while (k0 > 0 && COL_ANY(k0 - 1, q0, q1)) k0--;
	while (k1 < shownW - 1 && COL_ANY(k1 + 1, q0, q1)) k1++;
#undef ROW_ANY
#undef COL_ANY
	*L = areaLeft + k0 * 16; *R = areaLeft + (k1 + 1) * 16;
	*T = areaTop + r0 * 16; *B = areaTop + (r1 + 1) * 16;
	return 1;
}

/* the crop (settings.cropUnreach): the shown region around the GBA screen,
   eased (global pixels); the view is kept inside it and shrinks to it */
int view_asked_w, view_asked_h;   /* the view size before the fit / crop (main.c) */
static float rgL, rgT, rgR, rgB;
static int rgOn;
static u32 rgKey = ~0u;
static void crop_update(s32 gx, s32 gy, int w, int h, s32 cL, s32 cT, s32 cR, s32 cB) {
	s32 L, T, R, B;
	int aw = view_asked_w > 0 ? view_asked_w : w, ah = view_asked_h > 0 ? view_asked_h : h;
	static int off = -1;
	if (off < 0) off = getenv("MMZ_NOCROP") != NULL;
	/* the bands: the rows the camera can show above / below the GBA screen's
	   own columns (a drop further along opens as the screen reaches it, eased),
	   then the columns within half the view's height around it */
	int bw = SCREEN_W, bh = ah / 2 > SCREEN_H ? ah / 2 : SCREEN_H;
	if (hideUnshown < 0) hideUnshown = getenv("MMZ_HIDEUNSHOWN") != NULL;
	if (off || !settings.cropUnreach || !shown_region(gx + SCREEN_W / 2, gy + SCREEN_H / 2, bw, bh, &L, &T, &R, &B)) { rgOn = 0; rgKey = ~0u; return; }
	/* (inside what the area has, content_bounds(), global; the GBA screen is in it) */
	if (L < cL) L = cL; if (T < cT) T = cT; if (R > cR) R = cR; if (B > cB) B = cB;
	if (L > gx) L = gx; if (T > gy) T = gy;
	if (R < gx + SCREEN_W) R = gx + SCREEN_W; if (B < gy + SCREEN_H) B = gy + SCREEN_H;
	u32 key = (u32)(CUR_AREA & 0x7F);
	if (key != rgKey || !rgOn) { rgL = L; rgT = T; rgR = R; rgB = B; rgKey = key; }
	else {   /* eased like the game's camera (a part of the way each frame) */
		rgL += (L - rgL) * 0.12f; rgT += (T - rgT) * 0.12f; rgR += (R - rgR) * 0.12f; rgB += (B - rgB) * 0.12f;
		if (rgL > gx) rgL = gx; if (rgT > gy) rgT = gy;
		if (rgR < gx + SCREEN_W) rgR = gx + SCREEN_W; if (rgB < gy + SCREEN_H) rgB = gy + SCREEN_H;
	}
	rgOn = 1;
	static int dbg = -1;
	if (dbg < 0) dbg = getenv("CROPDEBUG") != NULL;
	if (dbg) fprintf(stderr, "crop: frame %ld gba %d,%d region %d..%d x %d..%d eased %.0f..%.0f x %.0f..%.0f\n", frameCount, gx, gy, L, R, T, B, rgL, rgR, rgT, rgB);
}

static __thread int levelSrc;   /* chunk_source() of the last level_entry() */
static __thread int levelFilled;  /* the last level_entry() came from the gap fill */
static int levelMatching;       /* the layers are being matched with video memory: the level as the GBA has it, no fill */
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
	s16 *donor;              /* per cell: the real chunk it is drawn like (global, gx | gy << 8), -1 none */
	int nreps; s16 reps[64]; /* the distinct donors (their sources are worked out before drawing) */
	int repSrc[64];          /* (tile fill) where each is drawn from this frame: -1 not, 0 video memory, 1 + n copy n */
	int fine;                /* (tile fill) per 8x8 cell (cw*30 x ch*20): mt is the tilemap entry, donor < 0 nothing */
};
static size_t fill_cells(int cw, int ch, int fine) { return (size_t)cw * ch * (fine ? 600 : 150); }
static struct Fill fills[4];
static int fillsBuilt;



static int in_area(int gx, int gy) {
	return gx >= 0 && gy >= 0 && gx < 128 && gy < 128 && (CHUNK_AREA[gy * 128 + gx] & 15) == (CUR_AREA & 0x7F) && reach[gy][gx];
}

/* The 8x8 row a gap repeats, from the level at its edge (cell (x, y), going
   away from the gap in direction dir: -1 up, 1 down): the row nearest the gap
   that repeats in the level itself (equal to its neighbour on the gap's
   side: grass, a wall's face, posts; not a blank one), so edge details (a
   cliff's rim) are not smeared; the edge row when none does within 2
   metatiles. As the fill keeps
   it: a metatile, | FILL_UP for its top row. */
static int tile_empty(u16 e, u32 charBase);
static u16 fill_row(const struct Layer *L, const u16 *src, int W, int H, int x, int y, int dir) {
	u16 rm[4]; int rh[4], n = 0;
	u32 cb = ((R16(80, 0x08 + L->bg * 2) >> 2) & 3) * 0x4000;
	for (int c = y; n < 4 && c >= 0 && c < H && src[c * W + x] != FILL_NONE; c += dir) {
		u16 m = src[c * W + x];
		rm[n] = m; rh[n++] = dir < 0;    /* (nearest the gap first: the bottom row going up, the top one going down) */
		rm[n] = m; rh[n++] = dir > 0;
	}
	if (!n) return FILL_NONE;
	if (getenv("MMZ_FILLEDGE")) return rm[0] | (rh[0] ? 0 : FILL_UP);   /* testing */
	#define ROW(i) (L->tiledata[rm[i] * 4 + rh[i] * 2] | (u32)L->tiledata[rm[i] * 4 + rh[i] * 2 + 1] << 16)
	for (int i = 1; i < n; i++)
		if (ROW(i) == ROW(i - 1) && !(tile_empty(ROW(i) & 0xFFFF, cb) && tile_empty(ROW(i) >> 16, cb)))   /* (not a blank row) */
			return rm[i - 1] | (rh[i - 1] ? 0 : FILL_UP);
	#undef ROW
	return rm[0] | (rh[0] ? 0 : FILL_UP);
}

static void fill_build_column(int k) {
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
	s16 *dc = malloc((size_t)W * H * 2);
	if (F->mt && dc) {
		for (int y = 0; y < H; y++)
			for (int x = 0; x < W; x++) {
				F->mt[y * W + x] = REAL(x / 15 + x0, y / 10 + y0) ? FILL_NONE : grid[y * W + x];
				dc[y * W + x] = F->donor[(y / 10) * cw + x / 15];
			}
		free(F->donor); F->donor = dc; dc = NULL;
		F->cx0 = x0; F->cy0 = y0; F->cw = cw; F->ch = ch; F->on = 1;
	}
	free(dc);
out:
	free(grid);
	if (!F->on) { free(F->donor); F->donor = NULL; }
	#undef REAL
	#undef SET
	#undef HAS
	#undef PUSH
}

/* ------------------------------------------------------------ tile fill
 *
 * fill_gaps = 1: every 8x8 cell of the area's box (plus two chunks of margin:
 * a room smaller than the view shows them) the GBA camera never shows is made
 * up, per BG layer, by wave function collapse over the area's own tiles:
 *  - tokens: the tilemap entries (tile, flips, palette) of the 8x8 cells the
 *    camera shows, with their chunk's graphics class (two graphics sets);
 *    every blank tile is one token, drawn as nothing. A gap cell's domain
 *    holds only tokens shown in this area on this layer, so nothing the level
 *    does not show can appear;
 *  - rules: which token is right of / below which, from pairs of neighbouring
 *    shown cells; a token never seen with a neighbour one way allows any
 *    there (the edge of what is shown); frequencies are the weights;
 *  - regions: a gap cell goes on from the level the way it is nearest it:
 *    below the floor it continues its column downwards, above the level's top
 *    edge upwards, beside it its row. Its domain is the tokens of that edge
 *    of the level only (the 8 shown cells nearest the top / bottom / left /
 *    right end of each column or row: open sky learns from the top rows, not
 *    from the floor), and the edge's continuation (its period of 1-4 tiles
 *    repeated; a cap or rim right at the edge skipped) is a strong prior: the
 *    wood posts under the snow city go on down, a wall goes on sideways, open
 *    space stays open (blank gets extra weight above and beside the level);
 *  - solve: shown cells are fixed; the lowest-entropy open cell (nearest the
 *    seams on ties) is collapsed to a weighted random token of its domain
 *    and the rules are propagated (domains as bitsets); a contradiction
 *    resets the cells around it (a wider square each time) and solves them
 *    again; a cell that keeps failing takes its continuation (the 8x8 column
 *    repeat), else stays black.
 * The seed is fixed per area: the same result every time (fill patch).
 */
typedef unsigned long long u64;
#define FILL_FULL 0x4000   /* (a filled cell's metatile: drawn whole, the old tile fill) */
#define WT_MAX 2048        /* tokens per layer */
#define WT_EMPTY 0x7FFFFFFF

static const int sdx[4] = { 1, -1, 0, 0 }, sdy[4] = { 0, 0, 1, -1 };
static u32 syn_rng;
static u32 syn_rand(void) { syn_rng ^= syn_rng << 13; syn_rng ^= syn_rng >> 17; syn_rng ^= syn_rng << 5; return syn_rng; }

/* the two graphics sets a chunk is drawn with (as chunk_source()), hi << 4 | lo, or -1 */
static int chunk_class(int cx, int cy, int area) {
	int b = chunk_sets(cx, cy, area);
	if (b < 0) return -1;
	int hi = b >> 4, lo = b & 15;
	if (hi >= 14) { int n = chunk_sets(cx + (hi == 14), cy + (hi == 15), area); hi = n >= 0 ? n >> 4 : -1; }
	if (lo >= 14) { int n = chunk_sets(cx + (lo == 14), cy + (lo == 15), area); lo = n >= 0 ? n & 15 : -1; }
	if (hi < 0 || lo < 0 || hi >= 14 || lo >= 14) return -1;
	return hi << 4 | lo;
}

/* video memory with a class's sets (to tell blank tiles), or NULL */
static const u8 *class_vram(int area, int cls) {
	if (set_loaded(cls >> 4, GFX_SET_A, area) && set_loaded(cls & 15, GFX_SET_B, area)) return vram;
	int c = combo_fill(area, cls >> 4, cls & 15);
	return c >= 0 ? comboVram[c] : NULL;
}
static int tile_blank(const u8 *vr, u16 e, u32 cb) {
	u32 a = cb + (e & 0x3FF) * 32;
	if (a + 32 > 0x10000) return 1;
	for (int i = 0; i < 32; i++)
		if (vr[a + i]) return 0;
	return 1;
}

/* a sequence going away from a gap (s[0] at its edge) continued k cells into
   it: its period (1-4 cells, seen repeating over at least 4 cells: posts, a
   wall's face, not a one-off edge) repeated, after up to 3 cells of edge
   detail (a cap, a rim). -1: it does not repeat */
static int wfc_extrap(const int *s, int m, int k) {
	for (int o = 0; o <= 3; o++)
		for (int p = 1; p <= 4; p++) {
			int len = p > 3 ? p : 3;
			if (o + len + p > m) break;
			int ok = 1;
			for (int i = 0; i < len && ok; i++) if (s[o + i] != s[o + i + p]) ok = 0;
			if (ok) return s[o + (((-k - o) % p) + p) % p];
		}
	return -1;
}
/* no period: the edge of a solid mass (most of the 8 cells nearest it not
   blank) goes on as its body: the commonest of those cells' tokens that the
   level has next to itself that way (dir: the rules' direction into the
   gap); anything else (the underside of a platform, a ledge with air
   behind it) as open space (0) */
static int wfc_open_or_mass(const int *s, int m, const u64 *compat, const u8 *ruled, int T, int Wd, int dir) {
	int solid = 0, c = m < 8 ? m : 8, best = 0, bn = 0;
	for (int i = 0; i < c; i++) solid += s[i] != 0;
	if (!c || solid * 4 < c * 3) return 0;
	for (int i = 0; i < c; i++) {
		int t = s[i], k = 0;
		if (!t || !ruled[dir * T + t] || !(compat[((size_t)dir * T + t) * Wd + (t >> 6)] >> (t & 63) & 1)) continue;
		for (int j = 0; j < c; j++) k += s[j] == t;
		if (k > bn) { bn = k; best = t; }
	}
	return best;
}

static int popc(const u64 *b, int wd) { int c = 0; for (int w = 0; w < wd; w++) c += __builtin_popcountll(b[w]); return c; }

struct WHeap { float key; int cell; };
static struct WHeap *wh; static int whN, whCap;
static void wh_push(float key, int cell) {
	if (whN == whCap) { whCap = whCap ? whCap * 2 : 4096; wh = realloc(wh, whCap * sizeof *wh); }
	int i = whN++;
	while (i && wh[(i - 1) / 2].key > key) { wh[i] = wh[(i - 1) / 2]; i = (i - 1) / 2; }
	wh[i].key = key; wh[i].cell = cell;
}
static struct WHeap wh_pop(void) {
	struct WHeap top = wh[0], last = wh[--whN];
	int i = 0;
	for (;;) {
		int c = 2 * i + 1;
		if (c >= whN) break;
		if (c + 1 < whN && wh[c + 1].key < wh[c].key) c++;
		if (wh[c].key >= last.key) break;
		wh[i] = wh[c]; i = c;
	}
	if (whN) wh[i] = last;
	return top;
}

static void fill_build_wfc(int k, u32 seed) {
	struct Fill *F = &fills[k];
	const struct Layer *L = &layers[k];
	free(F->mt); free(F->donor);
	memset(F, 0, sizeof *F);
	int area = CUR_AREA & 0x7F, dbg = getenv("MMZ_FILLDEBUG") != NULL;
	if (!L->map || L->backdrop) { if (dbg) fprintf(stderr, "fill: area %d bg %d: %s\n", area, k, L->map ? "background (repeats)" : "no layer"); return; }
	#define REAL(cx, cy) ((cx) >= 0 && (cy) >= 0 && (cx) < L->w && (cy) < L->h && \
	                      L->map[4 + (cy) * L->stride + (cx)] != L->null && \
	                      in_area(((cx) * 240 + stageX) / 240, ((cy) * 160 + stageY) / 160))
	int x0 = 1 << 30, y0 = 1 << 30, x1 = -1, y1 = -1;
	for (int cy = 0; cy < L->h; cy++)
		for (int cx = 0; cx < L->w; cx++)
			if (REAL(cx, cy)) { if (cx < x0) x0 = cx; if (cx > x1) x1 = cx; if (cy < y0) y0 = cy; if (cy > y1) y1 = cy; }
	if (x1 < 0) { if (dbg) fprintf(stderr, "fill: area %d bg %d: no chunks\n", area, k); return; }
	for (int m = 0; m < 2; m++) { if (x0 > 0) x0--; if (y0 > 0) y0--; if (x1 < L->w - 1) x1++; if (y1 < L->h - 1) y1++; }
	int cw = x1 - x0 + 1, ch = y1 - y0 + 1, W = cw * 30, H = ch * 20;
	size_t n = (size_t)W * H;
	Uint64 t0 = SDL_GetPerformanceCounter();
	u32 cb = ((R16(80, 0x08 + L->bg * 2) >> 2) & 3) * 0x4000;
	static s32 tkey[WT_MAX]; static s16 trep[256];
	static s32 tlook[1 << 16];
	int T = 0, open = 0, Wd = 0;
	long collapsed = 0, contra = 0, resets = 0, forced = 0, black = 0, priorHit = 0, priorCells = 0;
	int *tok = malloc(n * sizeof *tok), *prior = malloc(n * sizeof *prior), *out = NULL;
	u8 *reg = malloc(n), *state = calloc(n, 1), *tries = calloc(n, 1);
	u16 *dist = malloc(n * 2);
	u8 *mass = calloc(n, 1), *ruled = NULL, *covered = calloc(n, 1), *cdir = calloc(n, 1);
	u64 *rep = NULL;   /* (the edge of a solid mass with no period: texture, no blanks) */
	u64 *dom = NULL, *compat = NULL, *regDom = NULL;
	float *freq = NULL;
	int *work = NULL, *bad = NULL; u8 *inWork = NULL;
	if (!tok || !prior || !reg || !state || !tries || !dist || !mass || !covered || !cdir) goto done;
	memset(tlook, 0, sizeof tlook);
	for (int i = 0; i < 256; i++) trep[i] = -1;
	#define TOKEN(key) ({ s32 k_ = (key); u32 h_ = ((u32)k_ * 2654435761u) >> 16; int r_; \
		while (tlook[h_] && tkey[tlook[h_] - 1] != k_) h_ = (h_ + 1) & 0xFFFF; \
		if (tlook[h_]) r_ = tlook[h_] - 1; else if (T < WT_MAX) { tkey[T] = k_; tlook[h_] = ++T; r_ = T - 1; } else r_ = -2; r_; })
	TOKEN(WT_EMPTY);   /* (token 0: blank) */
	/* the shown cells' tokens; -1: a cell to make up, -2: shown, no token (any neighbour) */
	for (int cy = 0; cy < ch; cy++)
		for (int cx = 0; cx < cw; cx++) {
			int lx = cx + x0, ly = cy + y0, gx = (lx * 240 + stageX) / 240, gy = (ly * 160 + stageY) / 160;
			int real = REAL(lx, ly), cls = real ? chunk_class(gx, gy, area) : -1;
			const u16 *C = real ? L->chunks + L->map[4 + ly * L->stride + lx] * 150 : NULL;
			const u8 *vr = cls >= 0 ? class_vram(area, cls) : NULL;
			for (int r = 0; r < 20; r++)
				for (int c = 0; c < 30; c++) {
					int i = (cy * 20 + r) * W + cx * 30 + c, t = -1;
					if (real && shown_at(gx * 240 + c * 8, gy * 160 + r * 8)) {
						if (cls < 0) t = -2;
						else {
							u16 e = L->tiledata[C[(r >> 1) * 15 + (c >> 1)] * 4 + (r & 1) * 2 + (c & 1)];
							t = TOKEN(vr && tile_blank(vr, e, cb) ? WT_EMPTY : e | cls << 16);
							if (t > 0 && trep[cls] < 0) trep[cls] = gx | gy << 8;
						}
					}
					tok[i] = t;
					if (t == -1) open++;
				}
		}
	if (T <= 1 || !open) {
		if (dbg) fprintf(stderr, "fill: area %d bg %d: %d tokens, %d cells to make up\n", area, k, T, open);
		goto done;
	}
	Wd = (T + 63) / 64;
	dom = malloc(n * Wd * 8); compat = calloc((size_t)4 * T * Wd, 8); regDom = calloc((size_t)5 * Wd, 8);
	freq = calloc((size_t)5 * T, sizeof *freq);
	work = malloc(n * 4 * sizeof *work); bad = malloc(n * sizeof *bad); inWork = calloc(n, 1); out = malloc(n * sizeof *out);
	if (!dom || !compat || !regDom || !freq || !work || !bad || !inWork || !out) goto done;
	#define CP(d, t) (compat + ((size_t)(d) * T + (t)) * Wd)
	#define DOM(i) (dom + (size_t)(i) * Wd)
	/* rules, from neighbouring shown cells (directions: right, left, down, up) */
	for (int y = 0; y < H; y++)
		for (int x = 0; x < W; x++) {
			int a = tok[y * W + x];
			if (a < 0) continue;
			freq[4 * T + a]++;
			for (int d = 0; d < 4; d++) {
				int nx = x + sdx[d], ny = y + sdy[d];
				if (nx < 0 || ny < 0 || nx >= W || ny >= H) continue;
				int b = tok[ny * W + nx];
				if (b >= 0) CP(d, a)[b >> 6] |= 1ull << (b & 63);
			}
		}
	ruled = calloc((size_t)4 * T, 1);
	if (!ruled) goto done;
	for (int d = 0; d < 4; d++)   /* (never seen with a neighbour that way: any) */
		for (int t = 0; t < T; t++)
			if (!popc(CP(d, t), Wd)) for (int w = 0; w < Wd; w++) CP(d, t)[w] = ~0ull;
			else ruled[d * T + t] = 1;
	/* an outdoor layer: a background layer (the sky) is behind it, or most
	   columns' topmost shown cell is blank */
	int outdoor = 0;
	{
		int cols = 0, blank = 0;
		for (int x = 0; x < W; x++)
			for (int y = 0; y < H; y++) { int t = tok[y * W + x]; if (t >= 0) { cols++; blank += t == 0; break; } }
		outdoor = blank * 4 > cols;
		for (int j = 1; j < 4; j++) if (layers[j].map && layers[j].backdrop) outdoor = 1;
	}
	/* the edge bands: the 8 shown cells nearest each end of every column (0 top, 1 bottom) and row (2 left, 3 right) */
	for (int x = 0; x < W; x++) {
		for (int y = 0, c = 0; y < H && c < 8; y++) { int t = tok[y * W + x]; if (t >= 0) { freq[0 * T + t]++; c++; } }
		for (int y = H - 1, c = 0; y >= 0 && c < 8; y--) { int t = tok[y * W + x]; if (t >= 0) { freq[1 * T + t]++; c++; } }
	}
	for (int y = 0; y < H; y++) {
		for (int x = 0, c = 0; x < W && c < 8; x++) { int t = tok[y * W + x]; if (t >= 0) { freq[2 * T + t]++; c++; } }
		for (int x = W - 1, c = 0; x >= 0 && c < 8; x--) { int t = tok[y * W + x]; if (t >= 0) { freq[3 * T + t]++; c++; } }
	}
	for (int r = 0; r < 5; r++)
		for (int t = 0; t < T; t++)
			if (freq[r * T + t] > 0) regDom[r * Wd + (t >> 6)] |= 1ull << (t & 63);
	/* tokens that repeat in the level up and down (rep[0]) / sideways (rep[1])
	   within 4 cells: what a column or row going on can be made of (a post, a
	   wall's body; not a one-off thing lying on the floor) */
	rep = calloc((size_t)2 * Wd, 8);
	if (!rep) goto done;
	for (int y = 0; y < H; y++)
		for (int x = 0; x < W; x++) {
			int t = tok[y * W + x];
			if (t < 0) continue;
			for (int p = 1; p <= 4; p++) {
				if (y + p < H && tok[(y + p) * W + x] == t) rep[t >> 6] |= 1ull << (t & 63);
				if (x + p < W && tok[y * W + x + p] == t) rep[Wd + (t >> 6)] |= 1ull << (t & 63);
			}
		}
	if (dbg) fprintf(stderr, "fill: tokens %.1f ms\n", (SDL_GetPerformanceCounter() - t0) * 1000.0 / SDL_GetPerformanceFrequency());
	/* each gap cell: the way it goes on from the level, its region and its prior */
	int top = H, bottom = -1;
	for (size_t i = 0; i < n; i++) if (tok[i] >= 0 || tok[i] == -2) { int y = i / W; if (y < top) top = y; if (y > bottom) bottom = y; }
	{
		int s[12];
		for (size_t i = 0; i < n; i++) {
			prior[i] = -1; dist[i] = 0xFFFF;
			if (tok[i] != -1) continue;
			int x = i % W, y = i / W, du = 0, dd = 0, dl = 0, dr = 0;
	#define GAP(t) ((t) == -1 || (t) == -3)   /* (sky marked this pass is still gap) */
		while (y - du - 1 >= 0 && GAP(tok[(y - du - 1) * W + x])) du++;
			while (y + dd + 1 < H && GAP(tok[(y + dd + 1) * W + x])) dd++;
			while (x - dl - 1 >= 0 && GAP(tok[y * W + x - dl - 1])) dl++;
			while (x + dr + 1 < W && GAP(tok[y * W + x + dr + 1])) dr++;
			/* (distance to the nearest shown cell that way, 0: none) */
			du = y - du - 1 >= 0 && tok[(y - du - 1) * W + x] >= 0 ? du + 1 : 0;
			dd = y + dd + 1 < H && tok[(y + dd + 1) * W + x] >= 0 ? dd + 1 : 0;
			dl = x - dl - 1 >= 0 && tok[y * W + x - dl - 1] >= 0 ? dl + 1 : 0;
			dr = x + dr + 1 < W && tok[y * W + x + dr + 1] >= 0 ? dr + 1 : 0;
			int dv = du && dd ? (du < dd ? du : dd) : du ? du : dd;
			int dh = dl && dr ? (dl < dr ? dl : dr) : dl ? dl : dr;
			int m = 0, kk = 0, r = y < top ? 0 : y > bottom ? 1 : 4, dir = 0;   /* (dir: into the gap, as the rules') */
			if (dv && (!dh || dv <= dh * 2 + 4)) {   /* (vertical first: posts and walls go on down) */
				int up = du && (!dd || du <= dd);   /* (from the level above: going down) */
				int sy = up ? y - du : y + dd, step = up ? -1 : 1;
				for (int yy = sy; m < 12 && yy >= 0 && yy < H && tok[yy * W + x] >= 0; yy += step) s[m++] = tok[yy * W + x];
				kk = up ? du : dd;
				r = du && dd ? 4 : up ? 1 : 0;
				dir = up ? 2 : 3;
			} else if (dh) {
				int lf = dl && (!dr || dl <= dr);   /* (the level to the left: going right) */
				int sx = lf ? x - dl : x + dr, step = lf ? -1 : 1;
				for (int xx = sx; m < 12 && xx >= 0 && xx < W && tok[y * W + xx] >= 0; xx += step) s[m++] = tok[y * W + xx];
				kk = lf ? dl : dr;
				if (r == 4) r = lf ? 3 : 2;
				dir = lf ? 0 : 1;
			}
			reg[i] = r;
			cdir[i] = m ? dir : 4;
			if (m) {
				/* (going up into the open above an outdoor level: open sky) */
				prior[i] = dir == 3 && outdoor ? 0 : wfc_extrap(s, m, kk);
				if (prior[i] < 0) { prior[i] = wfc_open_or_mass(s, m, compat, ruled, T, Wd, dir); mass[i] = prior[i] > 0; }
				else if (prior[i] > 0) priorCells++;
				dist[i] = kk;
			}
		}
		/* cells with no level in their row or column (the box's corners):
		   the continuation of their neighbours' rows, then columns */
		for (int pass = 0; pass < 2; pass++)
			for (size_t i = 0; i < n; i++) {
				if (tok[i] != -1 || prior[i] >= 0 || mass[i]) continue;
				int x = i % W, y = i / W, best = -1, bd = 1 << 30;
				for (int dir = 0; dir < 4; dir++) {
					if ((dir < 2) == pass) continue;   /* (pass 0: sideways, 1: up and down) */
					int dx = sdx[dir], dy = sdy[dir], d = 1, m = 0;
					#define VAL(j) (tok[j] >= 0 ? tok[j] : tok[j] == -1 ? prior[j] : -1)
					while (x + dx * d >= 0 && x + dx * d < W && y + dy * d >= 0 && y + dy * d < H && VAL((y + dy * d) * W + x + dx * d) < 0) d++;
					if (x + dx * d < 0 || x + dx * d >= W || y + dy * d < 0 || y + dy * d >= H || d >= bd) continue;
					for (int e = d; m < 12 && x + dx * e >= 0 && x + dx * e < W && y + dy * e >= 0 && y + dy * e < H && VAL((y + dy * e) * W + x + dx * e) >= 0; e++)
						s[m++] = VAL((y + dy * e) * W + x + dx * e);
					#undef VAL
					if (m) { int t_ = wfc_extrap(s, m, d); if (t_ >= 0 || best < 0) { best = t_ >= 0 ? t_ : -1; bd = d; } }
				}
				if (best >= 0) { prior[i] = best; dist[i] = bd + 8; }
			}
	}
	if (dbg) fprintf(stderr, "fill: setup %.1f ms\n", (SDL_GetPerformanceCounter() - t0) * 1000.0 / SDL_GetPerformanceFrequency());
	for (size_t i = 0; i < n; i++) if (tok[i] == -1 && prior[i] < 0) prior[i] = 0;   /* (nothing to go on from: open space) */
	/* where another stage layer shows something there, this one stays open
	   (a gap in the front layer does not cover what the one behind shows) */
	for (int j = 1; j < 4; j++) {
		const struct Layer *M = &layers[j];
		if (j == k || !M->map || M->backdrop) continue;
		u32 mcb = ((R16(80, 0x08 + M->bg * 2) >> 2) & 3) * 0x4000;
		for (size_t i = 0; i < n; i++) {
			if (tok[i] != -1) continue;
			s32 px = (x0 * 30 + (int)(i % W)) * 8, py = (y0 * 20 + (int)(i / W)) * 8;   /* (stage pixels) */
			int mx = px / 240, my = py / 160;
			if (mx >= M->w || my >= M->h || M->map[4 + my * M->stride + mx] == M->null) continue;
			int gx = (mx * 240 + stageX) / 240, gy = (my * 160 + stageY) / 160;
			if (!in_area(gx, gy) || !shown_at(px + stageX, py + stageY)) continue;
			int cls = chunk_class(gx, gy, area);
			const u8 *vr = cls >= 0 ? class_vram(area, cls) : NULL;
			u16 e = M->tiledata[M->chunks[M->map[4 + my * M->stride + mx] * 150 + ((py % 160) >> 4) * 15 + ((px % 240) >> 4)] * 4 + ((py >> 3) & 1) * 2 + ((px >> 3) & 1)];
			if (vr && !tile_blank(vr, e, mcb)) { prior[i] = 0; covered[i] = 1; }
		}
	}
	/* weights */
	#define WEIGHT(i, t) ((freq[reg[i] * T + (t)] + 0.05f) * ((t) == prior[i] ? 400.0f : 1.0f) * ((t) == 0 ? (mass[i] ? 0.002f : reg[i] != 1 ? 3.0f : 1.0f) : 1.0f))
	#define INITDOM(i) do { u64 *d_ = DOM(i); memcpy(d_, regDom + (size_t)reg[i] * Wd, Wd * 8); \
		if (cdir[i] < 4 && mass[i]) for (int w_ = 0; w_ < Wd; w_++) d_[w_] &= rep[(cdir[i] < 2) * Wd + w_]; \
		if (!mass[i]) d_[0] |= 1; \
		if (prior[i] >= 0) d_[prior[i] >> 6] |= 1ull << (prior[i] & 63); } while (0)
	syn_rng = seed | 1;
	whN = 0;
	int nw = 0, nbad = 0;
	#define PUSHW(i) do { if (!inWork[i]) { inWork[i] = 1; work[nw++] = (i); } } while (0)
	for (size_t i = 0; i < n; i++) {
		u64 *d = DOM(i);
		if (tok[i] >= 0) { memset(d, 0, Wd * 8); d[tok[i] >> 6] = 1ull << (tok[i] & 63); state[i] = 2; }
		else if (tok[i] == -2 || covered[i]) { memset(d, 0xFF, Wd * 8); state[i] = 3; }
		else INITDOM(i);
	}
	for (size_t i = 0; i < n; i++)
		if (tok[i] >= 0) {
			int x = i % W, y = i / W;
			for (int d = 0; d < 4; d++) { int nx = x + sdx[d], ny = y + sdy[d]; if (nx >= 0 && ny >= 0 && nx < W && ny < H && tok[ny * W + nx] == -1) { PUSHW((int)i); break; } }
		}
	/* entropy of an open cell (lower: fewer, surer choices; nearer the seams on ties) */
	/* (as Shannon entropy with the prior's weight: a cell whose continuation is
	   still possible is nearly decided; else the log of its domain's size) */
	#define ENTROPY(i) ({ const u64 *d_ = DOM(i); int p_ = prior[i]; \
		(p_ >= 0 && (d_[p_ >> 6] >> (p_ & 63) & 1) ? 0.0f : 4.0f + logf((float)popc(d_, Wd))) + 0.002f * dist[i] + (syn_rand() & 1023) * 1e-7f; })
	static int PROP_MAX = -1; if (PROP_MAX < 0) PROP_MAX = getenv("MMZ_PROP") ? atoi(getenv("MMZ_PROP")) : 8;
	u64 *allowed = malloc(Wd * 8);
	if (!allowed) goto done;
	long budget = (long)open + 20000;
	size_t scan = 0;
	Uint64 tp = 0, tr = 0, tc = 0, q0;
	for (;;) {
		/* propagate */
		q0 = SDL_GetPerformanceCounter();
		while (nw) {
			int c = work[--nw];
			inWork[c] = 0;
			const u64 *dc = DOM(c);
			if (state[c] == 3) continue;   /* (any neighbour) */
			if (popc(dc, Wd) > PROP_MAX) continue;   /* (too open to narrow anything much) */
			int x = c % W, y = c / W;
			for (int d = 0; d < 4; d++) {
				int nx = x + sdx[d], ny = y + sdy[d];
				if (nx < 0 || ny < 0 || nx >= W || ny >= H) continue;
				int ni = ny * W + nx;
				if (state[ni]) continue;
				memset(allowed, 0, Wd * 8);
				for (int w = 0; w < Wd; w++)
					for (u64 b = dc[w]; b; b &= b - 1) { const u64 *cp = CP(d, w * 64 + __builtin_ctzll(b)); for (int v = 0; v < Wd; v++) allowed[v] |= cp[v]; }
				u64 *dn = DOM(ni); int changed = 0, any = 0;
				for (int v = 0; v < Wd; v++) { u64 nb = dn[v] & allowed[v]; if (nb != dn[v]) changed = 1; any |= nb != 0; }
				if (!changed) continue;
				if (!any) { if (nbad < (int)n) bad[nbad++] = ni; continue; }
				for (int v = 0; v < Wd; v++) dn[v] &= allowed[v];
				PUSHW(ni);
				wh_push(ENTROPY(ni), ni);
			}
		}
		tp += SDL_GetPerformanceCounter() - q0; q0 = SDL_GetPerformanceCounter();
		/* contradictions: the cells around solved again */
		if (nbad) {
			for (int b = 0; b < nbad; b++) {
				int c = bad[b];
				if (state[c]) continue;
				contra++;
				if (tries[c] >= 3 || resets > budget) {   /* (keeps failing: its continuation, or black) */
					state[c] = 3; forced++;
					if (prior[c] < 0) black++;
					continue;
				}
				int rr = 1 + tries[c]++, x = c % W, y = c / W;
				resets++;
				for (int yy = y - rr - 1; yy <= y + rr + 1; yy++)
					for (int xx = x - rr - 1; xx <= x + rr + 1; xx++) {
						if (xx < 0 || yy < 0 || xx >= W || yy >= H) continue;
						int j = yy * W + xx, edge = yy < y - rr || yy > y + rr || xx < x - rr || xx > x + rr;
						if (!edge && tok[j] == -1 && state[j] != 3) {
							if (state[j] == 1) collapsed--;
							state[j] = 0; INITDOM(j);
						}
					}
				for (int yy = y - rr - 1; yy <= y + rr + 1; yy++)
					for (int xx = x - rr - 1; xx <= x + rr + 1; xx++) {
						if (xx < 0 || yy < 0 || xx >= W || yy >= H) continue;
						int j = yy * W + xx;
						if (state[j] == 1 || state[j] == 2) PUSHW(j);
						else if (!state[j]) wh_push(ENTROPY(j), j);
					}
			}
			nbad = 0;
			tr += SDL_GetPerformanceCounter() - q0;
			continue;
		}
		/* collapse the lowest-entropy open cell */
		int c = -1;
		while (whN) {
			struct WHeap e = wh_pop();
			if (!state[e.cell]) { c = e.cell; break; }
		}
		if (c < 0) {   /* (cells no seam has reached yet) */
			while (scan < n && (tok[scan] != -1 || state[scan])) scan++;
			if (scan == n) { scan = 0; while (scan < n && (tok[scan] != -1 || state[scan])) scan++; if (scan == n) break; }
			c = (int)scan;
		}
		u64 *dc = DOM(c);
		float sum = 0;
		for (int w = 0; w < Wd; w++) for (u64 b = dc[w]; b; b &= b - 1) sum += WEIGHT(c, w * 64 + __builtin_ctzll(b));
		float pick = (syn_rand() & 0xFFFFFF) / (float)0x1000000 * sum;
		int t = -1;
		for (int w = 0; w < Wd && t < 0; w++)
			for (u64 b = dc[w]; b; b &= b - 1) {
				int u = w * 64 + __builtin_ctzll(b);
				pick -= WEIGHT(c, u);
				if (pick <= 0) { t = u; break; }
			}
		if (t < 0) for (int w = Wd - 1; w >= 0 && t < 0; w--) if (dc[w]) t = w * 64 + 63 - __builtin_clzll(dc[w]);
		if (t < 0) { state[c] = 3; forced++; if (prior[c] < 0) black++; continue; }
		memset(dc, 0, Wd * 8); dc[t >> 6] = 1ull << (t & 63);
		state[c] = 1; collapsed++;
		PUSHW(c);
		tc += SDL_GetPerformanceCounter() - q0;
	}
	if (dbg) fprintf(stderr, "fill: propagate %.1f reset %.1f collapse %.1f ms\n", tp * 1000.0 / SDL_GetPerformanceFrequency(), tr * 1000.0 / SDL_GetPerformanceFrequency(), tc * 1000.0 / SDL_GetPerformanceFrequency());
	free(allowed);
	/* the result: collapsed cells their token, forced ones their continuation */
	for (size_t i = 0; i < n; i++) {
		out[i] = -1;
		if (tok[i] != -1) continue;
		if (state[i] == 1) { const u64 *d = DOM(i); for (int w = 0; w < Wd; w++) if (d[w]) { out[i] = w * 64 + __builtin_ctzll(d[w]); break; } }
		else out[i] = prior[i];
		if (out[i] >= 0 && out[i] == prior[i]) priorHit++;
	}
	F->mt = malloc(n * 2);
	F->donor = malloc(n * 2);
	if (!F->mt || !F->donor) { free(F->mt); free(F->donor); F->mt = NULL; F->donor = NULL; goto done; }
	for (size_t i = 0; i < n; i++) {
		int t = out[i];
		F->mt[i] = t > 0 ? (u16)(tkey[t] & 0xFFFF) : 0;
		F->donor[i] = t > 0 ? trep[(tkey[t] >> 16) & 0xFF] : -1;   /* (blank: nothing drawn) */
	}
	F->cx0 = x0; F->cy0 = y0; F->cw = cw; F->ch = ch; F->on = 1; F->fine = 1;
	if (getenv("MMZ_FILLMAP"))   /* (debug, every 2nd cell: '#' shown (' ' blank), made up: '=' its continuation, ':' its body,
	                                ',' open as it should be, 'c' covered, 'x' another token, '_' blank against its prior, '!' forced) */
		for (int y = 0; y < H; y += 2) {
			for (int x = 0; x < W; x += 2) {
				int i = y * W + x;
				fputc(tok[i] != -1 ? (tok[i] == 0 ? ' ' : '#') : covered[i] ? 'c' : state[i] == 3 ? '!' : out[i] == prior[i] ? (prior[i] == 0 ? ',' : mass[i] ? ':' : '=') : out[i] == 0 ? '_' : 'x', stderr);
			}
			fputc('\n', stderr);
		}
done:
	if (dbg)
		fprintf(stderr, "fill: area %d bg %d chunks %d,%d %dx%d: %d tokens, %d cells made up (%ld with a period, %ld took their prior), %ld collapsed, %ld contradictions, %ld resets, %ld forced (%ld black), %.1f ms\n",
		        area, k, x0, y0, cw, ch, T, open, priorCells, priorHit, collapsed, contra, resets, forced, black,
		        (SDL_GetPerformanceCounter() - t0) * 1000.0 / SDL_GetPerformanceFrequency());
	free(tok); free(prior); free(reg); free(state); free(tries); free(dist); free(mass); free(ruled); free(covered); free(cdir); free(rep); free(dom); free(compat); free(regDom);
	free(freq); free(work); free(bad); free(inWork); free(out);
	#undef TOKEN
	#undef REAL
	#undef CP
	#undef DOM
	#undef WEIGHT
	#undef INITDOM
	#undef PUSHW
	#undef ENTROPY
}

/* ------------------------------------------------------------ overlapping tile fill
 *
 * fill_gaps = 1: the cells the GBA camera never shows are made up per BG layer
 * by the overlapping model of wave function collapse (Gumin) over 8x8 tile
 * tokens (tilemap entry with flips and palette, plus graphics class; blank
 * tiles are one token):
 *  - patterns: every NxN window of the area's shown cells on this layer (no
 *    rotations or invented flips: a flipped entry only where the level has
 *    one), weighted by how often each occurs. Each gap cell takes its token
 *    from the pattern placed over it, and neighbouring placements must agree
 *    where they overlap (N-1 cells), so texture of N cells carries over,
 *    where single-pair rules can only carry one cell's neighbours;
 *  - compatibility: a pattern's right / left / lower / upper N x (N-1) block
 *    is a signature; two placements side by side agree when the one's right
 *    block is the other's left one. Domains are bitsets over the patterns;
 *  - seeds: a placement over shown cells may only use patterns that match
 *    them, so the level's edge carries into the gap;
 *  - regions: below the level a placement draws from the patterns of the
 *    level's bottom band (each column's lowest shown cells), above it from the
 *    top band, beside it from the left / right band; open space above an
 *    outdoor layer, and cells a layer behind this one shows, stay empty;
 *    blank windows get extra weight above and beside the level;
 *  - solve: lowest weighted entropy first, propagation to a fixpoint; a
 *    contradiction re-solves the square around it with a new seed (twice),
 *    then a wider square (twice), and only then copies the nearest shown NxN
 *    block there. N = 5 is tried first; a layer where the 5x5 windows cannot
 *    meet the seams is done again with N = 3.
 * The seed is fixed per area: the same result every time (fill patch).
 */
static u64 ow_hash(const int *v, int m) {
	u64 h = 1469598103934665603ull;
	for (int i = 0; i < m; i++) { h ^= (u32)v[i]; h *= 1099511628211ull; h ^= h >> 29; }
	return h;
}
/* an id table of int vectors of length m */
struct OwTab { int m, n, cap, hcap; int *v; int *slot; };
static int ow_id(struct OwTab *t, const int *v, int add) {
	if (add && t->n * 2 >= t->hcap) {
		int nh = t->hcap ? t->hcap * 2 : 4096, *ns = malloc(nh * sizeof *ns);
		if (!ns) return -1;
		for (int i = 0; i < nh; i++) ns[i] = -1;
		for (int i = 0; i < t->n; i++) { u64 h = ow_hash(t->v + (size_t)i * t->m, t->m) & (nh - 1); while (ns[h] >= 0) h = (h + 1) & (nh - 1); ns[h] = i; }
		free(t->slot); t->slot = ns; t->hcap = nh;
	}
	if (!t->hcap) return -1;
	u64 h = ow_hash(v, t->m) & (t->hcap - 1);
	while (t->slot[h] >= 0) {
		if (!memcmp(t->v + (size_t)t->slot[h] * t->m, v, t->m * sizeof *v)) return t->slot[h];
		h = (h + 1) & (t->hcap - 1);
	}
	if (!add) return -1;
	if (t->n == t->cap) { int nc = t->cap ? t->cap * 2 : 1024; int *nv = realloc(t->v, (size_t)nc * t->m * sizeof *nv); if (!nv) return -1; t->v = nv; t->cap = nc; }
	memcpy(t->v + (size_t)t->n * t->m, v, t->m * sizeof *v);
	t->slot[h] = t->n;
	return t->n++;
}
static void ow_free(struct OwTab *t) { free(t->v); free(t->slot); memset(t, 0, sizeof *t); }

struct OwStats { int per[2]; int N, P, active, unmatched, copied; long collapsed, contra, resets; double ms; };

/* tok: W x H (-1 to make up, -2 any (shown, no token), -3 stays blank, >= 0
   shown); reg: per cell its region (0 top 1 bottom 2 left 3 right 4 inside);
   out: per -1 cell its token. Returns 0 if it could not run at this N */
static int owfc_solve(const int *tok, const u8 *reg, int W, int H, int N, u32 seed, int *out, struct OwStats *st) {
	Uint64 t0 = SDL_GetPerformanceCounter();
	memset(st, 0, sizeof *st); st->N = N;
	if (W < N || H < N) return 0;
	int PW = W - N + 1, PH = H - N + 1, NN = N * N, ok = 0;
	size_t np = (size_t)PW * PH, n = (size_t)W * H;
	struct OwTab pt = { NN }, sh = { N * (N - 1) }, sv = { N * (N - 1) };
	int *win = malloc(NN * sizeof *win), *sg = malloc(NN * sizeof *sg);
	int *pid = malloc(np * sizeof *pid), *aidx = malloc(np * sizeof *aidx), *apos = NULL;
	float *freq = NULL, *wl = NULL, *ent = NULL, *wlw = NULL; u64 *pool = NULL, *dom = NULL, *gL = NULL, *gR = NULL, *gU = NULL, *gD = NULL, *tmp = NULL;
	int *sR = NULL, *sL = NULL, *sD = NULL, *sU = NULL, *work = NULL, *bad = NULL, *mark = NULL, *copy = NULL, *sel = NULL;
	int *vt = NULL, *depth = NULL; u8 *vr = NULL;
	u8 *band = calloc(n, 1), *areg = NULL, *state = NULL, *tries = NULL, *inWork = NULL;
	if (!win || !sg || !pid || !aidx || !band) goto out_;
	/* bands: the B shown cells nearest each end of every column / row */
	int B = N * 2 > 8 ? N * 2 : 8;
	for (int x = 0; x < W; x++) {
		for (int y = 0, c = 0; y < H && c < B; y++) if (tok[y * W + x] >= 0) { band[y * W + x] |= 1; c++; }
		for (int y = H - 1, c = 0; y >= 0 && c < B; y--) if (tok[y * W + x] >= 0) { band[y * W + x] |= 2; c++; }
	}
	for (int y = 0; y < H; y++) {
		for (int x = 0, c = 0; x < W && c < B; x++) if (tok[y * W + x] >= 0) { band[y * W + x] |= 4; c++; }
		for (int x = W - 1, c = 0; x >= 0 && c < B; x--) if (tok[y * W + x] >= 0) { band[y * W + x] |= 8; c++; }
	}
	/* periodic input at the level's edges (as Gumin's periodicInput, one way):
	   past each edge the sample goes on N-1 cells with that edge's period
	   (per layer and way, 1-12 cells, the one the nonblank edges repeat
	   best), so the floor's texture has windows that carry it on down, a
	   wall's sideways. vt: the sample with them, vr: their way + 1 */
	vt = malloc(n * sizeof *vt); vr = calloc(n, 1);
	int *vpid = malloc(np * sizeof *vpid), nact = 0, P = 0, Wd = 0;
	if (!vt || !vr || !vpid) { free(vpid); goto out_; }
	/* the edges' periods: per way the best one, and the best of 4 or more (texture, not a stripe) */
	int per[4][2];
	for (int d = 0; d < 4; d++) {
		int ex = d == 2 ? -1 : d == 3 ? 1 : 0, ey = d == 0 ? 1 : d == 1 ? -1 : 0;
		double bs[2] = { 2, 2 }; per[d][0] = per[d][1] = 0;
		for (int pp = 1; pp <= 12; pp++) {
			long same = 0, all = 0;
			for (size_t i = 0; i < n; i++) {
				int x = i % W, y = i / W, gx_ = x + ex, gy_ = y + ey;
				if (tok[i] <= 0 || gx_ < 0 || gy_ < 0 || gx_ >= W || gy_ >= H || tok[gy_ * W + gx_] != -1) continue;
				for (int j = 0; j < pp; j++) {
					int ax = x - ex * j, ay = y - ey * j, bx = ax - ex * pp, by = ay - ey * pp;
					if (bx < 0 || by < 0 || bx >= W || by >= H) break;
					int a_ = tok[ay * W + ax], b_ = tok[by * W + bx];
					if (a_ < 0 || b_ < 0) break;
					all++; same += a_ == b_;
				}
			}
			double sc = all ? 1.0 - (double)same / all + pp * 0.004 : 2;
			if (sc < bs[0]) { bs[0] = sc; per[d][0] = pp; }
			if (pp >= 4 && sc < bs[1]) { bs[1] = sc; per[d][1] = pp; }
		}
		if (per[d][1] == per[d][0]) per[d][1] = 0;
	}
	st->per[0] = per[0][0]; st->per[1] = per[0][1];
	/* passes: the best periods sideways first then up and down (the corners
	   beside and below the level are the rows' continuation going on down),
	   the same down first, and the texture periods (4 or more) */
	static const int order[3][4] = { { 3, 2, 0, 1 }, { 0, 1, 3, 2 }, { 3, 2, 0, 1 } };
	for (size_t p = 0; p < np; p++) vpid[p] = -1;
	float *vw = NULL; int nvw = 0, cvw = 0;   /* (the edges' windows: pattern | way << 24, counted after) */
	for (int pass = 0; pass < 3; pass++) {
		memcpy(vt, tok, n * sizeof *vt); memset(vr, 0, n);
		for (int o = 0; o < 4; o++) {   /* (way 0 down past bottom edges, 1 up, 2 left, 3 right) */
			int d = order[pass][o];
			int ex = d == 2 ? -1 : d == 3 ? 1 : 0, ey = d == 0 ? 1 : d == 1 ? -1 : 0, bestP = per[d][pass == 2];
			if (!bestP) bestP = per[d][0];
			if (!bestP) continue;
			for (size_t i = 0; i < n; i++) {
				int x = i % W, y = i / W;
				if (vt[i] < 0 || x + ex < 0 || y + ey < 0 || x + ex >= W || y + ey >= H || vt[(y + ey) * W + x + ex] != -1) continue;
				/* a gap that ends at real cells: stop N cells short of the far
				   seam, else a window straddling both seams is invented */
				int gap = 0, closed = 0;
				for (int cx = x + ex, cy = y + ey; gap < 2 * N; cx += ex, cy += ey) {
					if (cx < 0 || cy < 0 || cx >= W || cy >= H) break;
					if (tok[cy * W + cx] != -1) { closed = 1; break; }
					gap++;
				}
				int jmax = closed ? gap - N : N - 1;
				if (jmax > N - 1) jmax = N - 1;
				for (int j = 1; j <= jmax; j++) {
					int cx = x + ex * j, cy = y + ey * j;
					if (cx < 0 || cy < 0 || cx >= W || cy >= H || tok[cy * W + cx] != -1) break;
					int k_ = j, sx = cx, sy = cy;
					while (k_ > 0) { sx -= ex * bestP; sy -= ey * bestP; k_ -= bestP; }
					if (sx < 0 || sy < 0 || sx >= W || sy >= H) break;
					int sv_ = vt[sy * W + sx];
					if (sv_ < 0) break;
					if (vt[cy * W + cx] == -1) { vt[cy * W + cx] = sv_; vr[cy * W + cx] = d + 1; }
				}
			}
		}
		for (int y = 0; y < PH; y++)
			for (int x = 0; x < PW; x++) {
				int real = 1, virt = 1, open = 0, way = 0;
				for (int j = 0; j < N; j++) for (int i = 0; i < N; i++) {
					int c = (y + j) * W + x + i, t = tok[c];
					win[j * N + i] = vt[c];
					if (t < 0) real = 0;
					if (vt[c] < 0) virt = 0;
					if (vr[c] && !way) way = vr[c];
					if (t == -1) open = 1;
				}
				if (!pass) { pid[y * PW + x] = real ? ow_id(&pt, win, 1) : -1; aidx[y * PW + x] = open ? nact++ : -1; }
				if (!real && virt) {
					int q = ow_id(&pt, win, 1);
					if (q < 0) continue;
					if (nvw == cvw) { cvw = cvw ? cvw * 2 : 4096; float *nv = realloc(vw, cvw * sizeof *vw); if (!nv) { free(vw); free(vpid); goto out_; } vw = nv; }
					((int *)vw)[nvw++] = q | way << 24;
				}
			}
	}
	P = pt.n; Wd = (P + 63) / 64;
	st->P = P; st->active = nact;
	if (!P || !nact) { ok = P > 0; free(vw); free(vpid); goto out_; }
	freq = calloc((size_t)5 * P, sizeof *freq);
	sR = malloc(P * 4); sL = malloc(P * 4); sD = malloc(P * 4); sU = malloc(P * 4);
	if (!freq || !sR || !sL || !sD || !sU) { free(vw); free(vpid); goto out_; }
	static const int wayReg[5] = { 4, 1, 0, 2, 3 };   /* (past the bottom: the region below, ...) */
	for (int v = 0; v < nvw; v++) { int e = ((int *)vw)[v], q = e & 0xFFFFFF; freq[4 * P + q] += 0.3f; freq[wayReg[e >> 24] * P + q] += 0.6f; }
	free(vw);
	for (size_t p = 0; p < np; p++) {
		int q = pid[p];
		if (q < 0) continue;
		int cx = p % PW + N / 2, cy = p / PW + N / 2, b = band[cy * W + cx];
		freq[4 * P + q]++;
		for (int r = 0; r < 4; r++) if (b >> r & 1) freq[r * P + q]++;
	}
	free(vpid);
	for (int p = 0; p < P; p++) {
		const int *v = pt.v + (size_t)p * NN;
		for (int j = 0; j < N; j++) for (int i = 0; i < N - 1; i++) sg[j * (N - 1) + i] = v[j * N + i + 1];
		sR[p] = ow_id(&sh, sg, 1);
		for (int j = 0; j < N; j++) for (int i = 0; i < N - 1; i++) sg[j * (N - 1) + i] = v[j * N + i];
		sL[p] = ow_id(&sh, sg, 1);
		for (int j = 0; j < N - 1; j++) for (int i = 0; i < N; i++) sg[j * N + i] = v[(j + 1) * N + i];
		sD[p] = ow_id(&sv, sg, 1);
		for (int j = 0; j < N - 1; j++) for (int i = 0; i < N; i++) sg[j * N + i] = v[j * N + i];
		sU[p] = ow_id(&sv, sg, 1);
		if (sR[p] < 0 || sL[p] < 0 || sD[p] < 0 || sU[p] < 0) goto out_;
	}
	int SH = sh.n, SV = sv.n, SM = SH > SV ? SH : SV;
	/* groups: the patterns with a given left (right, upper, lower) block */
	gL = calloc((size_t)SH * Wd, 8); gR = calloc((size_t)SH * Wd, 8); gU = calloc((size_t)SV * Wd, 8); gD = calloc((size_t)SV * Wd, 8);
	mark = calloc(SM, sizeof *mark); tmp = malloc(Wd * 8);
	if (!gL || !gR || !gU || !gD || !mark || !tmp) goto out_;
	for (int p = 0; p < P; p++) {
		u64 b = 1ull << (p & 63); int w = p >> 6;
		gL[(size_t)sL[p] * Wd + w] |= b; gR[(size_t)sR[p] * Wd + w] |= b; gU[(size_t)sU[p] * Wd + w] |= b; gD[(size_t)sD[p] * Wd + w] |= b;
	}
	/* region pools, pruned to the patterns that have a partner in the pool every way */
	pool = calloc((size_t)5 * Wd, 8); wl = calloc((size_t)5 * P, sizeof *wl); wlw = calloc((size_t)5 * P, sizeof *wlw);
	if (!pool || !wl || !wlw) goto out_;
	int blankP = -1;
	{ for (int i = 0; i < NN; i++) win[i] = 0; blankP = ow_id(&pt, win, 0); }
	for (int r = 0; r < 5; r++) {
		u64 *pl = pool + (size_t)r * Wd;
		int cnt = 0;
		for (int p = 0; p < P; p++) if (freq[r * P + p] > 0) cnt++;
		/* (one pool for every region, so placements in two regions side by side can always meet; the region weighs) */
		for (int p = 0; p < P; p++) pl[p >> 6] |= 1ull << (p & 63);
		if (cnt < 16) { memset(pl, 0, Wd * 8); for (int p = 0; p < P; p++) pl[p >> 6] |= 1ull << (p & 63); for (int p = 0; p < P; p++) freq[r * P + p] = freq[4 * P + p]; }
		/* prune */
		int *hasL = calloc(SM, 4), *hasR = calloc(SM, 4), *hasU = calloc(SM, 4), *hasD = calloc(SM, 4);
		u64 *keep = malloc(Wd * 8);
		if (!hasL || !hasR || !hasU || !hasD || !keep) { free(hasL); free(hasR); free(hasU); free(hasD); free(keep); goto out_; }
		memcpy(keep, pl, Wd * 8);
		for (int changed = 1, it = 0; changed && it < 64; it++) {
			changed = 0;
			memset(hasL, 0, SM * 4); memset(hasR, 0, SM * 4); memset(hasU, 0, SM * 4); memset(hasD, 0, SM * 4);
			for (int p = 0; p < P; p++) if (keep[p >> 6] >> (p & 63) & 1) { hasL[sL[p]]++; hasR[sR[p]]++; hasU[sU[p]]++; hasD[sD[p]]++; }
			int left = 0;
			for (int p = 0; p < P; p++)
				if (keep[p >> 6] >> (p & 63) & 1) {
					if (!hasL[sR[p]] || !hasR[sL[p]] || !hasU[sD[p]] || !hasD[sU[p]]) { keep[p >> 6] &= ~(1ull << (p & 63)); changed = 1; }
					else left++;
				}
			if (!left) break;
		}
		if (popc(keep, Wd) && !getenv("MMZ_NOPRUNE")) memcpy(pl, keep, Wd * 8);
		free(hasL); free(hasR); free(hasU); free(hasD); free(keep);
		for (int p = 0; p < P; p++) {
			float w = freq[r * P + p] + 0.02f * freq[4 * P + p] + 0.05f;
			if (p == blankP && r != 1) w *= 3.0f;   /* (open space stays open above and beside the level) */
			wl[r * P + p] = w; wlw[r * P + p] = w * logf(w);
		}
	}
	/* placements */
	apos = malloc(nact * sizeof *apos); areg = malloc(nact); state = calloc(nact, 1); tries = calloc(nact, 1); inWork = calloc(nact, 1);
	dom = malloc((size_t)nact * Wd * 8); work = malloc((size_t)nact * 2 * sizeof *work); bad = malloc(nact * sizeof *bad);
	copy = malloc(nact * sizeof *copy); sel = malloc(nact * sizeof *sel); ent = malloc(nact * sizeof *ent); depth = malloc(nact * sizeof *depth);
	if (!ent || !depth || !apos || !areg || !state || !tries || !inWork || !dom || !work || !bad || !copy || !sel) goto out_;
	for (size_t p = 0; p < np; p++) if (aidx[p] >= 0) apos[aidx[p]] = (int)p;
	for (int a = 0; a < nact; a++) {
		int x = apos[a] % PW, y = apos[a] / PW, c = (y + N / 2) * W + x + N / 2, r = 4;
		if (tok[c] == -1) r = reg[c];
		else for (int j = 0; j < NN; j++) { int cc = (y + j / N) * W + x + j % N; if (tok[cc] == -1) { r = reg[cc]; break; } }
		areg[a] = r; copy[a] = -1; sel[a] = -1;
	}
	#define ODOM(a) (dom + (size_t)(a) * Wd)
	#define HAS(d_, p_) ((d_)[(p_) >> 6] >> ((p_) & 63) & 1)
	/* a placement's starting domain: its region's pool, matching the shown cells under it */
	#define OINIT(a) ({ int a_ = (a), x_ = apos[a_] % PW, y_ = apos[a_] / PW, fixed_ = 0, nf_ = 0; u64 *d_ = ODOM(a_); \
		memcpy(d_, pool + (size_t)areg[a_] * Wd, Wd * 8); \
		for (int j_ = 0; j_ < NN; j_++) if (tok[(y_ + j_ / N) * W + x_ + j_ % N] >= 0) { win[nf_] = j_; sg[nf_++] = tok[(y_ + j_ / N) * W + x_ + j_ % N]; } \
		for (int pass_ = 0; nf_ && pass_ < 2; pass_++) { \
			if (pass_) for (int w_ = 0; w_ < Wd; w_++) d_[w_] = ~0ull >> (w_ == Wd - 1 && (P & 63) ? 64 - (P & 63) : 0); \
			for (int w_ = 0; w_ < Wd; w_++) for (u64 b_ = d_[w_]; b_; b_ &= b_ - 1) { int p_ = w_ * 64 + __builtin_ctzll(b_); const int *v_ = pt.v + (size_t)p_ * NN; \
				for (int f_ = 0; f_ < nf_; f_++) if (v_[win[f_]] != sg[f_]) { d_[w_] &= ~(1ull << (p_ & 63)); break; } } \
			if (popc(d_, Wd)) break; } \
		if (!popc(d_, Wd)) { memcpy(d_, pool + (size_t)areg[a_] * Wd, Wd * 8); fixed_ = 1; } fixed_; })
	/* weighted entropy (lower first), a little noise for ties */
	#define OENTC(a) ({ const u64 *d_ = ODOM(a); const float *w_ = wl + (size_t)areg[a] * P, *l_ = wlw + (size_t)areg[a] * P; float s_ = 0, sl_ = 0; \
		for (int ww_ = 0; ww_ < Wd; ww_++) for (u64 b_ = d_[ww_]; b_; b_ &= b_ - 1) { int p_ = ww_ * 64 + __builtin_ctzll(b_); s_ += w_[p_]; sl_ += l_[p_]; } \
		ent[a] = s_ > 0 ? logf(s_) - sl_ / s_ : 0; })
	#define OENT(a) (ent[a] + (syn_rand() & 1023) * 1e-6f)
	for (int a = 0; a < nact; a++) st->unmatched += OINIT(a);
	{   /* (the pools' entropy once; placements over shown cells their own) */
		float pe[5];
		for (int r = 0; r < 5; r++) { float s_ = 0, sl_ = 0; const u64 *d_ = pool + (size_t)r * Wd; for (int p = 0; p < P; p++) if (d_[p >> 6] >> (p & 63) & 1) { s_ += wl[r * P + p]; sl_ += wlw[r * P + p]; } pe[r] = s_ > 0 ? logf(s_) - sl_ / s_ : 0; }
		for (int a = 0; a < nact; a++) ent[a] = pe[areg[a]];
	}
	syn_rng = seed | 1;
	whN = 0;
	int nw = 0, nbad = 0, stamp = 0;
	/* (propagation goes PDEPTH placements from a change, further only through nearly decided ones) */
	static int PDEPTH = -1; if (PDEPTH < 0) PDEPTH = getenv("MMZ_PDEPTH") ? atoi(getenv("MMZ_PDEPTH")) : 3 * N;
	#define OPUSHD(a, dd) do { int d__ = (dd); if (!inWork[a]) { inWork[a] = 1; work[nw++] = (a); depth[a] = d__; } else if (d__ < depth[a]) depth[a] = d__; } while (0)
	#define OPUSH(a) OPUSHD(a, 0)
	/* the seams: placements over shown cells */
	for (int a = 0; a < nact; a++) {
		int x = apos[a] % PW, y = apos[a] / PW, any = 0;
		for (int j = 0; j < NN && !any; j++) any = tok[(y + j / N) * W + x + j % N] >= 0;
		if (any) { OENTC(a); OPUSH(a); wh_push(OENT(a), a); }
	}
	static const int odx[4] = { 1, -1, 0, 0 }, ody[4] = { 0, 0, 1, -1 };
	long budget = (long)nact / 2 + 20000, nEdge = 0, nBits = 0, nChg = 0;
	Uint64 tP = 0, tR = 0, tC = 0, tI = SDL_GetPerformanceCounter() - t0, q0;
	for (;;) {
		q0 = SDL_GetPerformanceCounter();
		while (nw) {
			int c = work[--nw];
			inWork[c] = 0;
			if (state[c] == 3) continue;
			const u64 *dc = ODOM(c);
			int dep = depth[c];
			int pc_ = popc(dc, Wd);
			if (dep > PDEPTH && pc_ > 2) continue;
			int x = apos[c] % PW, y = apos[c] / PW;
			for (int d = 0; d < 4; d++) {
				int nx = x + odx[d], ny = y + ody[d];
				if (nx < 0 || ny < 0 || nx >= PW || ny >= PH) continue;
				int ni = aidx[ny * PW + nx];
				if (ni < 0 || state[ni]) continue;
				/* the blocks c's patterns show that way, and the patterns of the neighbour that have one of them */
				const int *mine = d == 0 ? sR : d == 1 ? sL : d == 2 ? sD : sU;
				const int *theirs = d == 0 ? sL : d == 1 ? sR : d == 2 ? sU : sD;
				const u64 *grp = d == 0 ? gL : d == 1 ? gR : d == 2 ? gU : gD;
				int ns = 0;
				if (++stamp == 0x7FFFFFFF) { memset(mark, 0, SM * sizeof *mark); stamp = 1; }
				for (int w = 0; w < Wd; w++) for (u64 b = dc[w]; b; b &= b - 1) { int s = mine[w * 64 + __builtin_ctzll(b)]; if (mark[s] != stamp) { mark[s] = stamp; ns++; } }
				u64 *dn = ODOM(ni);
				int changed = 0, any = 0, cn = popc(dn, Wd);
				nEdge++; nBits += cn;
				if ((long)ns * Wd < cn) {
					memset(tmp, 0, Wd * 8);
					for (int w = 0; w < Wd; w++) for (u64 b = dc[w]; b; b &= b - 1) { int s = mine[w * 64 + __builtin_ctzll(b)]; if (mark[s] == stamp) { mark[s] = -stamp; const u64 *g = grp + (size_t)s * Wd; for (int v = 0; v < Wd; v++) tmp[v] |= g[v]; } }
					for (int v = 0; v < Wd; v++) { u64 nb = dn[v] & tmp[v]; if (nb != dn[v]) changed = 1; any |= nb != 0; tmp[v] = nb; }
				} else {
					for (int v = 0; v < Wd; v++) {
						u64 nb = dn[v];
						for (u64 b = dn[v]; b; b &= b - 1) { int p = v * 64 + __builtin_ctzll(b); if (abs(mark[theirs[p]]) != stamp) nb &= ~(1ull << (p & 63)); }
						tmp[v] = nb; if (nb != dn[v]) changed = 1; any |= nb != 0;
					}
				}
				if (!changed) continue;
				if (!any) { if (nbad < nact) bad[nbad++] = ni; continue; }
				memcpy(dn, tmp, Wd * 8);
				nChg++;
				OENTC(ni);
				OPUSHD(ni, dep + 1);
				wh_push(OENT(ni), ni);
			}
		}
		tP += SDL_GetPerformanceCounter() - q0; q0 = SDL_GetPerformanceCounter();
		if (nbad) {
			for (int b = 0; b < nbad; b++) {
				int c = bad[b];
				if (state[c]) continue;
				st->contra++;
				int x = apos[c] % PW, y = apos[c] / PW;
				if (tries[c] >= 4 || st->resets > budget) {
					/* last resort: the nearest shown NxN block of this layer */
					long bd = -1; int bp = -1;
					for (size_t p = 0; p < np; p++) {
						if (pid[p] < 0) continue;
						long dx = (long)(p % PW) - x, dy = (long)(p / PW) - y, dd = dx * dx + dy * dy;
						if (bd < 0 || dd < bd) { bd = dd; bp = pid[p]; }
					}
					u64 *dc = ODOM(c);
					memset(dc, 0, Wd * 8);
					if (bp >= 0) dc[bp >> 6] = 1ull << (bp & 63);
					copy[c] = bp; state[c] = 3; st->copied++;
					continue;
				}
				/* re-solve the square around it: a new seed twice, then wider */
				int t = tries[c]++, rr = N + (t >= 2 ? (t - 1) * N * 2 : 0);
				syn_rng = (seed ^ (u32)c * 2654435761u ^ (u32)(t + 1) * 0x9E3779B9u) | 1;
				st->resets++;
				for (int yy = y - rr - 1; yy <= y + rr + 1; yy++)
					for (int xx = x - rr - 1; xx <= x + rr + 1; xx++) {
						if (xx < 0 || yy < 0 || xx >= PW || yy >= PH) continue;
						int j = aidx[yy * PW + xx];
						if (j < 0) continue;
						int edge = yy < y - rr || yy > y + rr || xx < x - rr || xx > x + rr;
						if (!edge && state[j] != 3) { if (state[j] == 1) st->collapsed--; state[j] = 0; OINIT(j); OENTC(j); }
					}
				for (int yy = y - rr - 1; yy <= y + rr + 1; yy++)
					for (int xx = x - rr - 1; xx <= x + rr + 1; xx++) {
						if (xx < 0 || yy < 0 || xx >= PW || yy >= PH) continue;
						int j = aidx[yy * PW + xx];
						if (j < 0) continue;
						int edge = yy < y - rr || yy > y + rr || xx < x - rr || xx > x + rr;
						if (edge && state[j] != 3) OPUSH(j);
						if (!edge) { int any = 0; for (int q = 0; q < NN && !any; q++) any = tok[(yy + q / N) * W + xx + q % N] >= 0; if (any) OPUSH(j); }
						if (!state[j]) wh_push(OENT(j), j);
					}
			}
			nbad = 0;
			tR += SDL_GetPerformanceCounter() - q0;
			continue;
		}
		int c = -1;
		while (whN) { struct WHeap e = wh_pop(); if (!state[e.cell]) { c = e.cell; break; } }
		tC += SDL_GetPerformanceCounter() - q0;
		if (c < 0) { for (int a = 0; a < nact; a++) if (!state[a]) { c = a; break; } if (c < 0) break; }
		u64 *dc = ODOM(c);
		const float *w = wl + (size_t)areg[c] * P;
		float sum = 0;
		for (int v = 0; v < Wd; v++) for (u64 b = dc[v]; b; b &= b - 1) sum += w[v * 64 + __builtin_ctzll(b)];
		float pick = (syn_rand() & 0xFFFFFF) / (float)0x1000000 * sum;
		int t = -1;
		for (int v = 0; v < Wd && t < 0; v++) for (u64 b = dc[v]; b; b &= b - 1) { int u = v * 64 + __builtin_ctzll(b); t = u; pick -= w[u]; if (pick <= 0) break; }
		if (t < 0) { if (nbad < nact) bad[nbad++] = c; continue; }
		memset(dc, 0, Wd * 8); dc[t >> 6] = 1ull << (t & 63);
		state[c] = 1; st->collapsed++;
		OPUSH(c);
		int x = apos[c] % PW, y = apos[c] / PW;
		for (int d = 0; d < 4; d++) {   /* (the front moves on even where nothing narrowed) */
			int nx = x + odx[d], ny = y + ody[d];
			if (nx < 0 || ny < 0 || nx >= PW || ny >= PH) continue;
			int ni = aidx[ny * PW + nx];
			if (ni >= 0 && !state[ni]) wh_push(OENT(ni), ni);
		}
	}
	/* the result: each cell from the placement over it (clamped at the far edges), copied blocks on top */
	for (size_t i = 0; i < n; i++) {
		if (tok[i] != -1) continue;
		int x = i % W, y = i / W, px = x < PW ? x : PW - 1, py = y < PH ? y : PH - 1, a = aidx[py * PW + px];
		out[i] = 0;
		if (a < 0) continue;
		const u64 *d = ODOM(a);
		for (int v = 0; v < Wd; v++) if (d[v]) { int p = v * 64 + __builtin_ctzll(d[v]); out[i] = pt.v[(size_t)p * NN + (y - py) * N + (x - px)]; break; }
	}
	for (int a = 0; a < nact; a++)
		if (copy[a] >= 0) {
			int x = apos[a] % PW, y = apos[a] / PW;
			for (int j = 0; j < NN; j++) { int cc = (y + j / N) * W + x + j % N; if (tok[cc] == -1) out[cc] = pt.v[(size_t)copy[a] * NN + j]; }
		}
	if (getenv("MMZ_OWMAP")) for (int y = 0; y < PH; y += 2) { for (int x = 0; x < PW; x += 2) { int a = aidx[y * PW + x]; fputc(a < 0 ? (pid[y * PW + x] >= 0 ? '#' : ' ') : state[a] == 3 ? 'o' : tries[a] ? 't' : '.', stderr); } fputc('\n', stderr); }
	if (getenv("MMZ_FILLDEBUG")) { double f_ = 1000.0 / SDL_GetPerformanceFrequency(); fprintf(stderr, "fill: N=%d init %.0f prop %.0f reset %.0f pick %.0f ms, %ld edges avg %ld bits, %ld changes, heap %d\n", N, tI * f_, tP * f_, tR * f_, tC * f_, nEdge, nEdge ? nBits / nEdge : 0, nChg, whCap); }
	if (getenv("MMZ_FILLDEBUG")) { long nb = 0, no = 0; for (size_t i = 0; i < n; i++) if (tok[i] == -1) { no++; nb += out[i] == 0; } fprintf(stderr, "fill: N=%d blank %ld of %ld\n", N, nb, no); }
	ok = 1;
	#undef ODOM
	#undef HAS
	#undef OINIT
	#undef OENT
	#undef OENTC
	#undef OPUSH
	#undef OPUSHD
out_:
	st->ms = (SDL_GetPerformanceCounter() - t0) * 1000.0 / SDL_GetPerformanceFrequency();
	ow_free(&pt); ow_free(&sh); ow_free(&sv);
	free(win); free(sg); free(pid); free(aidx); free(apos); free(freq); free(wl); free(pool); free(dom);
	free(gL); free(gR); free(gU); free(gD); free(tmp); free(sR); free(sL); free(sD); free(sU); free(work); free(bad);
	free(vt); free(vr); free(ent); free(depth); free(wlw);
	free(mark); free(copy); free(sel); free(band); free(areg); free(state); free(tries); free(inWork);
	return ok;
}

static void fill_build_owfc(int k, u32 seed) {
	struct Fill *F = &fills[k];
	const struct Layer *L = &layers[k];
	free(F->mt); free(F->donor);
	memset(F, 0, sizeof *F);
	int area = CUR_AREA & 0x7F, dbg = getenv("MMZ_FILLDEBUG") != NULL;
	if (!L->map || L->backdrop) { if (dbg) fprintf(stderr, "fill: area %d bg %d: %s\n", area, k, L->map ? "background (repeats)" : "no layer"); return; }
	#define REAL(cx, cy) ((cx) >= 0 && (cy) >= 0 && (cx) < L->w && (cy) < L->h && \
	                      L->map[4 + (cy) * L->stride + (cx)] != L->null && \
	                      in_area(((cx) * 240 + stageX) / 240, ((cy) * 160 + stageY) / 160))
	int x0 = 1 << 30, y0 = 1 << 30, x1 = -1, y1 = -1;
	for (int cy = 0; cy < L->h; cy++)
		for (int cx = 0; cx < L->w; cx++)
			if (REAL(cx, cy)) { if (cx < x0) x0 = cx; if (cx > x1) x1 = cx; if (cy < y0) y0 = cy; if (cy > y1) y1 = cy; }
	if (x1 < 0) { if (dbg) fprintf(stderr, "fill: area %d bg %d: no chunks\n", area, k); return; }
	for (int m = 0; m < 2; m++) { if (x0 > 0) x0--; if (y0 > 0) y0--; if (x1 < L->w - 1) x1++; if (y1 < L->h - 1) y1++; }
	int cw = x1 - x0 + 1, ch = y1 - y0 + 1, W = cw * 30, H = ch * 20;
	size_t n = (size_t)W * H;
	u32 cb = ((R16(80, 0x08 + L->bg * 2) >> 2) & 3) * 0x4000;
	static s32 tkey[WT_MAX]; static s16 trep[256];
	static s32 tlook[1 << 16];
	int T = 0, open = 0;
	int *tok = malloc(n * sizeof *tok), *out = malloc(n * sizeof *out);
	u8 *reg = malloc(n);
	struct OwStats st5 = { 0 }, st3 = { 0 }, *st = NULL;
	if (!tok || !out || !reg) goto done;
	memset(tlook, 0, sizeof tlook);
	for (int i = 0; i < 256; i++) trep[i] = -1;
	#define TOKEN(key) ({ s32 k_ = (key); u32 h_ = ((u32)k_ * 2654435761u) >> 16; int r_; \
		while (tlook[h_] && tkey[tlook[h_] - 1] != k_) h_ = (h_ + 1) & 0xFFFF; \
		if (tlook[h_]) r_ = tlook[h_] - 1; else if (T < WT_MAX) { tkey[T] = k_; tlook[h_] = ++T; r_ = T - 1; } else r_ = -2; r_; })
	TOKEN(WT_EMPTY);   /* (token 0: blank) */
	for (int cy = 0; cy < ch; cy++)
		for (int cx = 0; cx < cw; cx++) {
			int lx = cx + x0, ly = cy + y0, gx = (lx * 240 + stageX) / 240, gy = (ly * 160 + stageY) / 160;
			int real = REAL(lx, ly), cls = real ? chunk_class(gx, gy, area) : -1;
			const u16 *C = real ? L->chunks + L->map[4 + ly * L->stride + lx] * 150 : NULL;
			const u8 *vr = cls >= 0 ? class_vram(area, cls) : NULL;
			for (int r = 0; r < 20; r++)
				for (int c = 0; c < 30; c++) {
					int i = (cy * 20 + r) * W + cx * 30 + c, t = -1;
					if (real && shown_at(gx * 240 + c * 8, gy * 160 + r * 8)) {
						if (cls < 0) t = -2;
						else {
							u16 e = L->tiledata[C[(r >> 1) * 15 + (c >> 1)] * 4 + (r & 1) * 2 + (c & 1)];
							t = TOKEN(vr && tile_blank(vr, e, cb) ? WT_EMPTY : e | cls << 16);
							if (t > 0 && trep[cls] < 0) trep[cls] = gx | gy << 8;
						}
					}
					tok[i] = t;
					if (t == -1) open++;
				}
		}
	if (T <= 1 || !open) { if (dbg) fprintf(stderr, "fill: area %d bg %d: %d tokens, %d cells to make up\n", area, k, T, open); goto done; }
	/* outdoor: a background layer (the sky) is behind it, or most columns' topmost shown cell is blank */
	int outdoor = 0;
	{
		int cols = 0, blank = 0;
		for (int x = 0; x < W; x++)
			for (int y = 0; y < H; y++) { int t = tok[y * W + x]; if (t >= 0) { cols++; blank += t == 0; break; } }
		outdoor = blank * 4 > cols;
		for (int j = 1; j < 4; j++) if (layers[j].map && layers[j].backdrop) outdoor = 1;
	}
	/* regions: each gap cell goes on from the level the way it is nearest it (up and down first) */
	int top = H, bottom = -1, sky = 0, covered = 0;
	for (size_t i = 0; i < n; i++) if (tok[i] >= 0 || tok[i] == -2) { int y = i / W; if (y < top) top = y; if (y > bottom) bottom = y; }
	for (size_t i = 0; i < n; i++) {
		reg[i] = 4;
		if (tok[i] != -1) continue;
		int x = i % W, y = i / W, du = 0, dd = 0, dl = 0, dr = 0;
		while (y - du - 1 >= 0 && GAP(tok[(y - du - 1) * W + x])) du++;
		while (y + dd + 1 < H && GAP(tok[(y + dd + 1) * W + x])) dd++;
		while (x - dl - 1 >= 0 && GAP(tok[y * W + x - dl - 1])) dl++;
		while (x + dr + 1 < W && GAP(tok[y * W + x + dr + 1])) dr++;
		du = y - du - 1 >= 0 ? du + 1 : 0; dd = y + dd + 1 < H ? dd + 1 : 0;
		dl = x - dl - 1 >= 0 ? dl + 1 : 0; dr = x + dr + 1 < W ? dr + 1 : 0;
		int dv = du && dd ? (du < dd ? du : dd) : du ? du : dd, dh = dl && dr ? (dl < dr ? dl : dr) : dl ? dl : dr;
		int r = y < top ? 0 : y > bottom ? 1 : 4;
		if (outdoor && !du && dd) { tok[i] = -3; sky++; reg[i] = 0; continue; }   /* (nothing real above it: sky) */
		if (dv && (!dh || dv <= dh * 2 + 4)) {
			int up = du && (!dd || du <= dd);
			r = du && dd ? 4 : up ? 1 : 0;
			if (!up && outdoor) { tok[i] = -3; sky++; }   /* (open sky above an outdoor level) */
		} else if (dh) {
			if (r == 4) r = dl && (!dr || dl <= dr) ? 3 : 2;
		}
		reg[i] = r;
	}
	/* where another stage layer shows something, this one stays open */
	for (int j = 1; j < 4; j++) {
		const struct Layer *M = &layers[j];
		if (j == k || !M->map || M->backdrop) continue;
		u32 mcb = ((R16(80, 0x08 + M->bg * 2) >> 2) & 3) * 0x4000;
		for (size_t i = 0; i < n; i++) {
			if (tok[i] != -1) continue;
			s32 px = (x0 * 30 + (int)(i % W)) * 8, py = (y0 * 20 + (int)(i / W)) * 8;
			int mx = px / 240, my = py / 160;
			if (mx >= M->w || my >= M->h || M->map[4 + my * M->stride + mx] == M->null) continue;
			int gx = (mx * 240 + stageX) / 240, gy = (my * 160 + stageY) / 160;
			if (!in_area(gx, gy) || !shown_at(px + stageX, py + stageY)) continue;
			int cls = chunk_class(gx, gy, area);
			const u8 *vr = cls >= 0 ? class_vram(area, cls) : NULL;
			u16 e = M->tiledata[M->chunks[M->map[4 + my * M->stride + mx] * 150 + ((py % 160) >> 4) * 15 + ((px % 240) >> 4)] * 4 + ((py >> 3) & 1) * 2 + ((px >> 3) & 1)];
			if (vr && !tile_blank(vr, e, mcb)) { tok[i] = -3; covered++; }
		}
	}
	/* N = 5 first (texture of 5 cells), N = 3 where the 5x5 windows cannot meet the seams */
	static int forceN = -1; if (forceN < 0) forceN = getenv("MMZ_WFCN") ? atoi(getenv("MMZ_WFCN")) : 0;
	int ran = 0;
	if (forceN != 3 && owfc_solve(tok, reg, W, H, 5, seed, out, &st5)) {
		ran = 5; st = &st5;
		int badn = st5.unmatched + st5.copied;
		if (forceN != 5 && (st5.P < 64 || badn * 100 > st5.active)) ran = 0;   /* (too few patterns, or too many seams it cannot meet) */
		if (dbg) fprintf(stderr, "fill: area %d bg %d N=5: %d patterns, %d placements, %d seams unmatched, %ld contradictions, %ld re-solves, %d copied, %.1f ms%s\n",
		                 area, k, st5.P, st5.active, st5.unmatched, st5.contra, st5.resets, st5.copied, st5.ms, ran ? "" : " -> N=3");
	}
	if (!ran && owfc_solve(tok, reg, W, H, 3, seed, out, &st3)) {
		ran = 3; st = &st3;
		if (dbg) fprintf(stderr, "fill: area %d bg %d N=3: %d patterns, %d placements, %d seams unmatched, %ld contradictions, %ld re-solves, %d copied, %.1f ms, down periods %d/%d\n",
		                 area, k, st3.P, st3.active, st3.unmatched, st3.contra, st3.resets, st3.copied, st3.ms, st3.per[0], st3.per[1]);
	}
	if (!ran) goto done;
	F->mt = malloc(n * 2);
	F->donor = malloc(n * 2);
	if (!F->mt || !F->donor) { free(F->mt); free(F->donor); F->mt = NULL; F->donor = NULL; goto done; }
	for (size_t i = 0; i < n; i++) {
		int t = tok[i] == -1 ? out[i] : -1;
		F->mt[i] = t > 0 ? (u16)(tkey[t] & 0xFFFF) : 0;
		F->donor[i] = t > 0 ? trep[(tkey[t] >> 16) & 0xFF] : -1;   /* (blank, shown, sky, covered: nothing drawn) */
	}
	F->cx0 = x0; F->cy0 = y0; F->cw = cw; F->ch = ch; F->on = 1; F->fine = 1;
	if (getenv("MMZ_FILLMAP"))   /* (debug, every 2nd cell: '#' shown (' ' blank), made up 'x' (',' blank), 's' sky, 'c' covered) */
		for (int y = 0; y < H; y += 2) {
			for (int x = 0; x < W; x += 2) { int i = y * W + x; fputc(tok[i] >= 0 ? (tok[i] ? '#' : ' ') : tok[i] == -2 ? '?' : tok[i] == -3 ? 's' : out[i] ? 'x' : ',', stderr); }
			fputc('\n', stderr);
		}
done:
	if (dbg && st) fprintf(stderr, "fill: area %d bg %d chunks %d,%d %dx%d: %d tokens, %d cells made up (%d sky, %d covered), N=%d\n",
	                       area, k, x0, y0, cw, ch, T, open, sky, covered, st->N);
	free(tok); free(out); free(reg);
	#undef TOKEN
	#undef REAL
}

static void fill_reps(struct Fill *F) {   /* the distinct donors */
	F->nreps = 0;
	if (F->on)
		for (size_t i = 0; i < fill_cells(F->cw, F->ch, F->fine); i++) {
			int d = F->donor[i], j;
			if (d < 0) continue;
			for (j = 0; j < F->nreps && F->reps[j] != d; j++) ;
			if (j == F->nreps && j < 64) F->reps[F->nreps++] = d;
		}
}

static void fill_build(int k, u32 seed) {
	if (settings.fillGaps == 2) fill_build_column(k);
	else if (settings.fillGaps == 3) fill_build_wfc(k, seed);   /* (the single-pair tile WFC, for comparison) */
	else fill_build_owfc(k, seed);
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
extern u32 romCrc;
struct FillRec { u32 key; s32 sx, sy; s32 bg, cx0, cy0, cw, ch; u16 *mt; s16 *donor; int fine; };
static struct FillRec *patch;
static int npatch, patchLoaded, patchStale;   /* stale: the file is of an older format (written anew) */
static char patchPath[600];

const char *fill_patch_path(void);
static const char *patch_path(void) { return fill_patch_path(); }
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
	char magic[8]; u32 crc = 0;
	if (fread(magic, 1, 8, f) != 8 || memcmp(magic, "MMZFILL8", 8) || fread(&crc, 4, 1, f) != 1 || crc != romCrc) {
		fclose(f); patchStale = 1;
		fprintf(stderr, "fill: %s is of another format or ROM: not used (mmz --gen-fills makes it anew)\n", patch_path());
		return;
	}
	struct FillRec r;
	s32 h[7];
	while (fread(h, 4, 7, f) == 7) {
		r.key = h[0]; r.sx = h[1]; r.sy = h[2]; r.bg = h[3] & 0xFF; r.fine = h[3] >> 8 & 1; r.cx0 = h[4]; r.cy0 = h[5]; r.cw = h[6] & 0xFFFF; r.ch = (u32)h[6] >> 16;
		size_t cells = fill_cells(r.cw, r.ch, r.fine), ck = cells;
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
	int fresh = !f || patchStale;
	if (f) fclose(f);
	f = fopen(p, fresh ? "wb" : "ab");
	patchStale = 0;
	if (!f) return;
	if (fresh) { fwrite("MMZFILL8", 1, 8, f); fwrite(&romCrc, 4, 1, f); }
	s32 h[7] = { (s32)r->key, r->sx, r->sy, r->bg | r->fine << 8, r->cx0, r->cy0, r->cw | r->ch << 16 };
	fwrite(h, 4, 7, f);
	size_t cells = fill_cells(r->cw, r->ch, r->fine), ck = cells;
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
		size_t cells = fill_cells(r->cw, r->ch, r->fine), ck = cells;
		F->mt = malloc(cells * 2); F->donor = malloc(ck * 2);
		if (!F->mt || !F->donor) { free(F->mt); free(F->donor); F->mt = NULL; F->donor = NULL; return; }
		memcpy(F->mt, r->mt, cells * 2); memcpy(F->donor, r->donor, ck * 2);
		F->cx0 = r->cx0; F->cy0 = r->cy0; F->cw = r->cw; F->ch = r->ch; F->on = 1; F->fine = r->fine;
		fill_reps(F);
		return;
	}
	/* not in the file: the game never works a fill out while it plays (the
	   WFC is an offline step, mmz --gen-fills); only the generator does */
	static int gen = -1; if (gen < 0) gen = getenv("MMZ_FILLGEN") != NULL;
	if (!gen && settings.fillGaps != 2) {
		free(F->mt); free(F->donor); memset(F, 0, sizeof *F);
		static u32 told[64]; static int ntold;
		int seen = 0; for (int i = 0; i < ntold; i++) seen |= told[i] == (key ^ (u32)k);
		if (!seen) { if (ntold < 64) told[ntold++] = key ^ (u32)k; fprintf(stderr, "fill: area %d bg %d is not in %s: black (mmz --gen-fills)\n", CUR_AREA & 0x7F, k, patch_path()); }
		return;
	}
	fill_build(k, key * 2654435761u + 1);
	fill_reps(F);
	struct FillRec r = { key, stageX, stageY, k, 0, 0, 0, 0, NULL, NULL, 0 };
	if (F->on) {
		size_t cells = fill_cells(F->cw, F->ch, F->fine), ck = cells;
		r.mt = malloc(cells * 2); r.donor = malloc(ck * 2);
		if (!r.mt || !r.donor) { free(r.mt); free(r.donor); return; }
		memcpy(r.mt, F->mt, cells * 2); memcpy(r.donor, F->donor, ck * 2);
		r.cx0 = F->cx0; r.cy0 = F->cy0; r.cw = F->cw; r.ch = F->ch; r.fine = F->fine;
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
	static int only = -2;   /* testing (MMZ_FILLONLY=bg): draw only that BG's fill */
	if (only == -2) only = getenv("MMZ_FILLONLY") ? atoi(getenv("MMZ_FILLONLY")) : -1;
	if (hide || levelMatching || (only >= 0 && L->bg != only)) return 0;
	if (!F->on || wx < 0 || wy < 0) return 0;
	int cx = wx / 240 - F->cx0, cy = wy / 160 - F->cy0;
	if (cx < 0 || cy < 0 || cx >= F->cw || cy >= F->ch) return 0;
	if (F->fine) {   /* the tile fill: an 8x8 tilemap entry, with its class's own sets */
		size_t i = (size_t)(cy * 20 + (wy % 160) / 8) * F->cw * 30 + cx * 30 + (wx % 240) / 8;
		int d = F->donor[i], j = 0;
		if (d < 0) return 0;
		while (j < F->nreps && F->reps[j] != d) j++;
		if (j == F->nreps || F->repSrc[j] < 0) return 0;
		levelSrc = F->repSrc[j];
		levelFilled = 1;
		levelFy = wy & 7;
		*out = F->mt[i];
		return 1;
	}
	u16 m = F->mt[((cy * 10) + (wy % 160) / 16) * F->cw * 15 + cx * 15 + (wx % 240) / 16];
	int d = F->donor[((cy * 10) + (wy % 160) / 16) * F->cw * 15 + cx * 15 + (wx % 240) / 16];
	if (m == FILL_NONE || d < 0) return 0;
	if (m & FILL_FULL) {   /* the tile fill: the whole metatile, with its donor's own sets */
		int j = 0;
		while (j < F->nreps && F->reps[j] != d) j++;
		if (j == F->nreps || F->repSrc[j] < 0) return 0;
		levelSrc = F->repSrc[j];
		levelFilled = 1;
		levelFy = wy & 7;
		*out = L->tiledata[(m & ~FILL_FULL) * 4 + ((wy >> 3) & 1) * 2 + ((wx >> 3) & 1)];
		return 1;
	}
	levelSrc = chunk_source(d & 0xFF, d >> 8);
	if (levelSrc < 0) return 0;
	levelFilled = 1;
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
/* the area is no bigger than the GBA screen one way and at most two
   screens the other: the wide view would only add borders, so the GBA picture is
   shown, scaled to the window like the cutscenes' (issue #10) */
int view_fit_gba;
static void fit_target(void) {
	view_fit_w = view_fit_h = 0;
	view_fit_gba = 0;
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
	/* a room the GBA screen spans one way (a boss room two screens long, a
	   shaft two high): fitted to the window's shape it is the GBA screen */
	if (settings.fitRooms && ((bw <= 2 * 240 && bh <= 160) || (bw <= 240 && bh <= 2 * 160))) view_fit_gba = 1;
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
	view_asked_w = *w; view_asked_h = *h;
	/* the crop: the region the GBA camera can show is shorter / narrower than the view */
	if (rgOn && view_active && tw > SCREEN_W && th > SCREEN_H) {
		float s = 1, rw = rgR - rgL, rh = rgB - rgT;
		(void)rw;   /* the height decides: the view stays the window's shape, so a narrow region still fills it sideways */
		if (rh < th * s) s = rh / th;
		float minw = SCREEN_W > SCREEN_H * (float)tw / th ? SCREEN_W : SCREEN_H * (float)tw / th;
		if (s < 1) {
			float ew = tw * s;
			if (ew < minw) ew = minw;
			tw = (int)ew;
			th = (int)(ew * *h / *w);
		}
	}
	if (view_fit_w > 0 && (view_fit_w < tw || view_fit_h < th) && tw > SCREEN_W && th > SCREEN_H) {
		float ew = tw;
		/* fit the room's height; the width follows the window's shape */
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
	if (levelSrc == 0 && chunkOff[(wy + stageY) / 160][(wx + stageX) / 240]) {
		s32 gx = wx + stageX - gbaL, gy = wy + stageY - gbaT;
		if (gx < 0 || gy < 0 || gx >= SCREEN_W || gy >= SCREEN_H) {
			levelSrc = chunkOff[(wy + stageY) / 160][(wx + stageX) / 240] - 2;
			if (levelSrc < 0) return fill_entry(L, wx, wy, out);
		}
	}
	/* (where the GBA camera never shows it, the level is drawn all the same:
	   it is the area's own art, with its own sets; only what cannot be drawn
	   right, above, is left to the fill / black) */
	if (!(hideUnshown ? shown_at(wx + stageX, wy + stageY) : kept_at(wx + stageX, wy + stageY))) return fill_entry(L, wx, wy, out);
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
int view_stage_mask;     /* the same, as bits (viewprobe: only these are compared) */
/* BGs whose stage layer has not matched video memory for a while and whose
   tilemap is a pattern of a few tiles: the game draws something else there
   (mission 3's rain), so its tilemap repeats over
   the whole view like a background's */
static int freeBg[4];

static void find_layers(void) {
	memset(layers, 0, sizeof layers);
	memset(stageBg, 0, sizeof stageBg);
	view_stage_mask = 0;
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
		if (!L.backdrop) { stageBg[bg] = 1; view_stage_mask |= 1 << bg; }
		if (!(R16(80, 0) & (0x100 << bg))) continue;
		/* agrees with video memory? (samples over the GBA screen, mid-frame line) */
		int match = 0, n = 0;
		u32 cb = ((R16(80, 0x08 + bg * 2) >> 2) & 3) * 0x4000;
		for (int sy = 8; sy < 160; sy += 36)
			for (int sx = 8; sx < 240; sx += 46) {
				int line = sy;
				u16 want = 0;
				s32 wx = line_world_x(&L, line) + sx, wy = line_world_y(&L, line) + sy;
				levelMatching = 1;
				int have = level_entry(&L, wx, wy, &want);
				levelMatching = 0;
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
static __thread u8 *fillRow[4];   /* the pixel is the gap fill's (view_layers bit 3) */
static __thread u16 *objColor;
static __thread u8 *objPrio, *objSemi, *objWin;
static __thread int rowCap;

static void ensure_buffers(int w) {
	if (w <= rowCap) return;
	for (int i = 0; i < 4; i++) { bgRow[i] = realloc(bgRow[i], w * 2); fillRow[i] = realloc(fillRow[i], w); }
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
	u8 *fl = fillRow[L->bg & 3];
	for (int vx = 0; vx < w;) {
		s32 wx = wx0 + vx;
		u16 e;
		int run = 8 - (wx & 7);
		levelFilled = 0;
		if (!level_entry(L, wx, wy, &e)) {
			for (int k = 0; k < run && vx < w; k++) { fl[vx] = 0; out[vx++] = TRANSPARENT; }
			continue;
		}
		int fx = wx & 7;
		int src = levelSrc, ty = levelFy, filled = levelFilled;
		for (int k = 0; k < run && vx < w; k++) { fl[vx] = filled; out[vx++] = tile_pixel_from(src, e, charBase, fx++, ty); }
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

static s32 lastGbaX, lastGbaY;   /* (below) */
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
			/* off the GBA screen, not where the GBA camera never goes (the
			   level is not drawn there either: objects in other rooms) */
			if ((px - ox < 0 || px - ox >= SCREEN_W || ry < 0 || ry >= SCREEN_H) &&
			    !shown_at(lastGbaX + px - ox, lastGbaY + ry)) continue;
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
int view_level_only;   /* the GBA screen's part from the level data too (viewcheck) */
int view_gba_pasted;   /* the last frame has the GBA picture pasted in (not drawable) */

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
		if (dispcnt & 0x80) { for (int x = 0; x < w; x++) { dst[x] = 0xFFFFFF; view_layers[(size_t)vy * w + x] = 0x55; } break; }
		int bgOn[4];
		for (int bg = 0; bg < 4; bg++) {
			bgOn[bg] = (dispcnt & (0x100 << bg)) && (debug.layerMask & (1 << bg));
			if (!bgOn[bg]) continue;
			if (layers[bg].map) {
				draw_level_row(&layers[bg], line, vy, ox, oy, bgRow[bg], w);
				/* on the GBA screen, what video memory has (the game's own
				   changes to the tiles show) */
				if (!view_level_only && !layers[bg].backdrop && !fx[bg].kind && vy - oy >= 0 && vy - oy < SCREEN_H) gba_vram_span(bg, vy - oy, ox, bgRow[bg], w);
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
			view_layers[(size_t)vy * w + x] = layer[0] | layer[1] << 4 | (layer[0] < 4 && layers[layer[0]].map && !layers[layer[0]].backdrop && fillRow[layer[0]][x] ? 8 : 0);
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

void view_gba_origin(int *ox, int *oy) { *ox = lastOx; *oy = lastOy; }
static s32 lastGbaX, lastGbaY;   /* the GBA screen's top-left in the world (global pixels), last frame drawn */
void view_gba_global(int *x, int *y) { *x = lastGbaX; *y = lastGbaY; }

/* viewprobe: where the game's camera would settle for a wanted centre (0: it
   cannot be there, a level-15 chunk) */
int view_camera_settle(int *x, int *y) {
	if (level_at(*x, *y) == 15) return 0;
	s32 cx = *x, cy = *y;
	camera_edge(&cx, &cy);
	*x = cx; *y = cy;
	return 1;
}

/* viewprobe: can the GBA camera show this global pixel (shown map; 1 when not known) */
int view_shown_at(int gx, int gy) { return shown_at(gx, gy); }

/* viewchunks: cheap checks of the chunks the last frame's view covers, from
   what the view worked out (no camera moved). Per chunk with something in a
   stage layer: drawn from video memory off the GBA screen with sets that are
   not loaded (a bug), drawn outside the area's rectangle (a bug), not
   drawable (left to the gap fill / black), drawn from a copy with other sets
   (normal: off the GBA screen), the part off the GBA screen of a chunk under
   it with its own sets, and chunks the GBA camera never shows (hidden).
   Prints the flagged chunks (bugs, then the not drawable ones) and counts. */
void view_chunk_report(void) {
	if (!view_active) { fprintf(stderr, "viewchunks: frame %ld: no wide view\n", frameCount); return; }
	int area = CUR_AREA & 0x7F;
	s32 vl = lastGbaX - lastOx, vt = lastGbaY - lastOy;
	int n[7] = { 0 };
	static const char *what[7] = { "wrong-set", "outside-area", "undrawable", "copy", "off-own", "hidden", "ok" };
	for (int gy = vt / 160; gy <= (vt + view_h - 1) / 160; gy++)
		for (int gx = vl / 240; gx <= (vl + view_w - 1) / 240; gx++) {
			if (gx < 0 || gy < 0 || gx >= 128 || gy >= 128) continue;
			int content = 0;
			for (int k = 1; k < 4; k++) {
				const struct Layer *L = &layers[k];
				if (!L->map || L->backdrop) continue;
				int lx = gx - stageX / 240, ly = gy - stageY / 160;
				if (lx >= 0 && ly >= 0 && lx < L->w && ly < L->h && L->map[4 + ly * L->stride + lx] != L->null) content = 1;
			}
			if (!content) continue;
			int src = chunkOk[gy][gx] ? chunkOk[gy][gx] - 2 : chunk_source(gx, gy);
			int b = chunk_sets(gx, gy, area), hi = b >> 4 & 15, lo = b & 15;
			int onGba = gx >= gbaCx0 && gx <= gbaCx1 && gy >= gbaCy0 && gy <= gbaCy1;
			int shownAny = 0;
			for (int y = gy * 160; y < gy * 160 + 160 && !shownAny; y += 16)
				for (int x = gx * 240; x < gx * 240 + 240; x += 16) if (shown_at(x, y)) { shownAny = 1; break; }
			int c;
			if (src == 0 && !onGba && b >= 0 && hi < 14 && lo < 14 && !(set_loaded(hi, GFX_SET_A, area) && set_loaded(lo, GFX_SET_B, area))) c = 0;
			else if (src >= 0 && (gx * 240 < areaLeft || gx * 240 >= areaRight || gy * 160 < areaTop || gy * 160 >= areaBottom)) c = 1;
			else if (src < 0) c = shownAny ? 2 : 5;
			else if (!shownAny) c = 5;
			else if (src > 0) c = 3;
			else if (onGba && chunkOff[gy][gx] && chunkOff[gy][gx] != 2) c = 4;
			else c = 6;
			n[c]++;
			if (c <= 2) fprintf(stderr, "viewchunks: %s chunk %d,%d (global %d,%d) area byte %02X sets %02X source %d%s%s\n", what[c], gx, gy, gx * 240, gy * 160,
			                    CHUNK_AREA[gy * 128 + gx], b & 0xFF, src, onGba ? " under the GBA screen" : "", reach[gy][gx] ? "" : " not reached");
		}
	fprintf(stderr, "viewchunks: frame %ld area %d loaded %04X %04X: %d wrong-set, %d outside-area, %d undrawable, %d copy, %d off-own, %d hidden, %d ok\n",
	        frameCount, area, GFX_SET_A, GFX_SET_B, n[0], n[1], n[2], n[3], n[4], n[5], n[6]);
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
	view_layers = realloc(view_layers, (size_t)w * h);
	ensure_buffers(w);
	if (!layers[1].map && !layers[2].map && !layers[3].map) {
		/* not a stage picture (menus, fades): after a few frames the GBA
		   picture; until then the GBA picture inside the view */
		if (!shownFrames || ++badFrames >= SWITCH_FRAMES) { shownFrames = 0; return 0; }
		for (size_t i = 0; i < (size_t)w * h; i++) view_frame[i] = 0;
		paste_gba(w, h, lastOx, lastOy);
		view_gba_pasted = 1;
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
		view_gba_pasted = 1;
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
	shown_build();
	memset(chunkOk, 0, sizeof chunkOk);
	memset(chunkOff, 0, sizeof chunkOff);
	gbaL = x0 + stageX; gbaT = y0 + stageY;
	/* the copies with other graphics sets are kept for a while (rebuilt when
	   the loaded sets change, and every half second for animated tiles) */
	{
		static u32 lastKey; static int age;
		u32 key = (u32)GFX_SET_A << 16 | GFX_SET_B;
		if (key != lastKey || ++age >= 30) { nCombos = 0; nFillCombos = 0; age = 0; lastKey = key; }
	}
	gbaCx0 = (x0 + stageX) / 240; gbaCx1 = (x0 + stageX + SCREEN_W - 1) / 240;
	gbaCy0 = (y0 + stageY) / 160; gbaCy1 = (y0 + stageY + SCREEN_H - 1) / 160;
	kept_build();
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
		u32 key = ((u32)CUR_AREA << 24 ^ (u32)GFX_SET_A << 12 ^ GFX_SET_B) + reachKey * 2654435761u + (u32)settings.fillGaps * 0x51ED27u;
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
		if (view_fit_gba) { shownFrames = 0; return 0; }
		cL = bL; cT = bT; cR = bR; cB = bB;
	}
	/* the crop: not past what the GBA camera can show around here */
	crop_update(x0 + stageX, y0 + stageY, w, h, cL + stageX, cT + stageY, cR + stageX, cB + stageY);
	if (rgOn) {
		s32 oL = cL, oT = cT, oR = cR, oB = cB;
		s32 L = (s32)(rgL + 0.5f) - stageX, T = (s32)(rgT + 0.5f) - stageY, R = (s32)(rgR + 0.5f) - stageX, B = (s32)(rgB + 0.5f) - stageY;
		if (L > cL) cL = L; if (R < cR) cR = R; if (T > cT) cT = T; if (B < cB) cB = B;
		if (cR <= cL || cB <= cT) { cL = oL; cT = oT; cR = oR; cB = oB; }
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
	lastGbaX = x0 + stageX; lastGbaY = y0 + stageY;

	draw_hud(w, h, ox, oy);
	/* where each chunk the view can show is drawn from (before the threads) */
	for (int k = 1; k < 4; k++) {
		const struct Layer *L = &layers[k];
		if (!L->map || L->backdrop) continue;
		s32 lx = line_world_x(L, 0) - ox, ty = line_world_y(L, 0) - oy;
		for (s32 cy = (ty - 320) / 160 - 1; cy <= (ty + h + 320) / 160 + 1; cy++)
			for (s32 cx = (lx - 512) / 240 - 1; cx <= (lx + w + 512) / 240 + 1; cx++)
				if (cx >= 0 && cy >= 0) chunk_source(cx + stageX / 240, cy + stageY / 160);
		for (int i = 0; i < fills[k].nreps; i++) {
			int gx = fills[k].reps[i] & 0xFF, gy = fills[k].reps[i] >> 8;
			if (settings.fillGaps == 2) { chunk_source(gx, gy); continue; }   /* (the column fill: as the level) */
			/* the tile fill: with the donor's own sets, from the loaded ones or a copy */
			int area = CUR_AREA & 0x7F, cls = chunk_class(gx, gy, area), src = -1;
			if (cls >= 0) {
				if (set_loaded(cls >> 4, GFX_SET_A, area) && set_loaded(cls & 15, GFX_SET_B, area)) src = 0;
				else { int c = combo_fill(area, cls >> 4, cls & 15); src = c >= 0 ? 1 + c : -1; }
			}
			fills[k].repSrc[i] = src;
		}
	}
	if (getenv("CHUNKDEBUG") && dbg) {
		s32 lx = x0 - ox, ty = y0 - oy;
		for (s32 cy = ty / 160 - 1; cy <= (ty + h) / 160; cy++) {
			fprintf(stderr, "  ");
			for (s32 cx = lx / 240 - 1; cx <= (lx + w) / 240; cx++) {
				int gx = cx + stageX / 240, gy = cy + stageY / 160;
				if (cx < 0 || cy < 0 || gx >= 128 || gy >= 128) { fprintf(stderr, " ....."); continue; }
				fprintf(stderr, " %d:%02X%c", CHUNK_AREA[gy * 128 + gx] & 15, chunk_sets(gx, gy, CUR_AREA & 0x7F) & 0xFF, "x0123456789ab"[chunk_source(gx, gy) + 1]);
				if (getenv("CHUNKDEBUG")[0] == '2') fprintf(stderr, "/L%X%c%02X", chunk_level(gx, gy, CUR_AREA & 0x7F), reach[gy][gx] ? 'r' : '-', CHUNK_AREA[gy * 128 + gx]);
			}
			fprintf(stderr, "\n");
		}
		fprintf(stderr, "  loaded %04X %04X combos %d\n", GFX_SET_A, GFX_SET_B, nCombos);
	}
	render_rows(w, h, ox, oy);
	if (gbaOver) paste_gba(w, h, ox, oy);
	view_gba_pasted = gbaOver;
	view_active = 1;
	return 1;
}
