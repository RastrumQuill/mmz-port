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

static s32 stageX, stageY;      /* global pixel position of the stage layers' origin */
static s32 areaLeft, areaTop, areaRight, areaBottom;   /* the current area, global pixels */
static u8 chunkOk[128][128];    /* 0 unknown, 1 drawable, 2 not */

static const u8 *area_desc(int area) {
	u32 list = *(u32 *)(uintptr_t)(AREA_TABLE + area * 4);
	return (const u8 *)(uintptr_t)*(u32 *)(uintptr_t)(list + ((AREA_STATES >> (area * 2)) & 3) * 4);
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

static int chunk_drawable(int cx, int cy) {
	if (cx < 0 || cy < 0 || cx >= 128 || cy >= 128) return 0;
	if (chunkOk[cy][cx]) return chunkOk[cy][cx] == 1;
	int ok = 0, area = CUR_AREA & 0x7F;
	if ((CHUNK_AREA[cy * 128 + cx] & 15) == area) {
		int b = chunk_sets(cx, cy, area);
		if (b >= 0) {
			int hi = b >> 4, lo = b & 15;
			/* 14: the set of the chunk to the right, 15: of the one below */
			int hx = cx + (hi == 14), hy = cy + (hi == 15), lx = cx + (lo == 14), ly = cy + (lo == 15);
			if (hi >= 14) { int n = chunk_sets(hx, hy, area); hi = n >= 0 ? n >> 4 : -1; }
			if (lo >= 14) { int n = chunk_sets(lx, ly, area); lo = n >= 0 ? n & 15 : -1; }
			ok = hi >= 0 && lo >= 0 && set_loaded(hi, GFX_SET_A, area) && set_loaded(lo, GFX_SET_B, area);
		}
	}
	chunkOk[cy][cx] = ok ? 1 : 2;
	return ok;
}

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

/* the tilemap entry the level has at a world pixel (0: nothing there) */
static int level_entry(const struct Layer *L, s32 wx, s32 wy, u16 *out) {
	if (wx < 0 || wy < 0) return 0;
	int cx = wx / 240, cy = wy / 160;
	if (cx >= L->w || cy >= L->h) return 0;
	if (!chunk_drawable((wx + stageX) / 240, (wy + stageY) / 160)) return 0;
	int cid = L->map[4 + cy * L->stride + cx];
	if (cid == L->null) return 0;
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

/* Finds the stage layers and keeps the ones video memory agrees with. */
static void find_layers(void) {
	memset(layers, 0, sizeof layers);
	if ((R16(0, 0) & 7) != 0) return;   /* stages use mode 0 */
	for (int k = 0; k < 3; k++) {
		const u8 *s = (const u8 *)(uintptr_t)(STAGE_LAYERS + k * 0x70);
		u32 td = *(u32 *)(s + 0x20), ch = *(u32 *)(s + 0x24), mp = *(u32 *)(s + 0x28);
		int bg = (*(u32 *)(s + 0x54) >> 4) & 0xF;
		if (!rom_ptr(td) || !rom_ptr(ch) || !rom_ptr(mp) || bg < 1 || bg > 3) continue;
		struct Layer L;
		L.bg = bg;
		L.x = *(s32 *)(s + 0x14);
		L.y = *(s32 *)(s + 0x18);
		L.tiledata = (const u16 *)(uintptr_t)td;
		L.chunks = (const u16 *)(uintptr_t)ch;
		L.map = (const u8 *)(uintptr_t)mp;
		L.stride = L.map[0]; L.null = L.map[1]; L.w = L.map[2]; L.h = L.map[3];
		if (!L.w || !L.h || L.w > L.stride) continue;
		if (!(R16(80, 0) & (0x100 << bg))) continue;
		/* agrees with video memory? (samples over the GBA screen, mid-frame line) */
		int match = 0, n = 0;
		for (int sy = 8; sy < 160; sy += 36)
			for (int sx = 8; sx < 240; sx += 46) {
				int line = sy;
				u16 want = 0;
				s32 wx = line_world_x(&L, line) + sx, wy = line_world_y(&L, line) + sy;
				int have = level_entry(&L, wx, wy, &want);
				u16 got = vram_entry(bg, line, (R16(line, 0x10 + bg * 4) & 0x1FF) + sx, (R16(line, 0x12 + bg * 4) & 0x1FF) + sy);
				n++;
				if (have ? got == want : 1) match++;
			}
		if (match * 10 >= n * 8) layers[bg] = L;
	}
}

/* ---------------------------------------------------------------- drawing */

static u16 *bgRow[4];
static u16 *objColor;
static u8 *objPrio, *objSemi, *objWin;
static int rowCap;

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

/* a level layer's row, from the level data */
static void draw_level_row(const struct Layer *L, int line, int vy, int ox, int oy, u16 *out, int w) {
	u32 charBase = ((R16(line, 0x08 + L->bg * 2) >> 2) & 3) * 0x4000;
	/* the scroll registers of GBA line `line` (the nearest one, for rows
	   outside the GBA screen) place screen row 0; this row is vy - oy below */
	s32 wy = line_world_y(L, line) + (vy - oy);
	s32 wx0 = line_world_x(L, line) - ox;
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
		for (int k = 0; k < run && vx < w; k++) out[vx++] = tile_pixel(e, charBase, fx++, fy);
	}
}

/* a text BG's row from video memory, only inside the GBA screen */
static void draw_vram_row(int bg, int line, int vy, int oy, int ox, u16 *out, int w) {
	for (int x = 0; x < w; x++) out[x] = TRANSPARENT;
	int l = vy - oy;
	if (l < 0 || l >= SCREEN_H) return;
	u16 cnt = R16(l, 0x08 + bg * 2);
	if (cnt & 0x80) return;   /* (256-colour layers: not in stages) */
	u32 charBase = ((cnt >> 2) & 3) * 0x4000;
	int hofs = R16(l, 0x10 + bg * 4) & 0x1FF, vofs = R16(l, 0x12 + bg * 4) & 0x1FF;
	int py = l + vofs;
	for (int sx = 0; sx < SCREEN_W; sx++) {
		int vx = sx + ox;
		if (vx < 0 || vx >= w) continue;
		int px = sx + hofs;
		u16 e = vram_entry(bg, l, px, py);
		out[vx] = tile_pixel(e, charBase, px & 7, py & 7);
	}
	(void)line;
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

/* Draws the view; 0 if this frame is not a stage (the GBA picture is shown). */
static int cells(int pixels, int cell) { return pixels > 0 ? (pixels + cell - 1) / cell : 0; }

int view_render(void) {
	view_active = 0;
	view_cells_left = view_cells_right = view_cells_up = view_cells_down = 0;
	if (view_w == SCREEN_W && view_h == SCREEN_H) return 0;
	find_layers();
	if (!layers[1].map && !layers[2].map && !layers[3].map) return 0;
	int w = view_w, h = view_h;
	view_frame = realloc(view_frame, (size_t)w * h * 4);
	ensure_buffers(w);

	/* where the GBA screen sits in the view: centred, then kept inside the
	   stage when the stage is big enough */
	const struct Layer *T = layers[1].map ? &layers[1] : layers[2].map ? &layers[2] : &layers[3];
	s32 x0 = line_world_x(T, 0), y0 = line_world_y(T, 0);
	/* the stage's origin in the world: the camera's top-left (global) minus
	   the layer's (whole chunks apart) */
	stageX = ((CAMERA_X >> 8) - 120) - T->x;
	stageY = ((CAMERA_Y >> 8) - 80) - T->y;
	stageX = (stageX + 120) / 240 * 240;
	stageY = (stageY + 80) / 160 * 160;
	find_area();
	memset(chunkOk, 0, sizeof chunkOk);
	static int dbg = -1;
	if (dbg < 0) dbg = getenv("VIEWDEBUG") != NULL;
	if (dbg) fprintf(stderr, "cam %d,%d layer %d,%d stage %d,%d area %d..%d x %d..%d (area %d) x0 %d y0 %d\n",
	        CAMERA_X >> 8, CAMERA_Y >> 8, T->x, T->y, stageX, stageY, areaLeft, areaRight, areaTop, areaBottom, CUR_AREA, x0, y0);
	/* the GBA screen itself must be drawable from the level data (not during
	   area changes or anything else the level data does not show) */
	{
		int bad = 0;
		for (int k = 0; k < 4; k++) {
			s32 gx = x0 + stageX + (k & 1) * (SCREEN_W - 1), gy = y0 + stageY + (k >> 1) * (SCREEN_H - 1);
			if (!chunk_drawable(gx / 240, gy / 160)) bad++;
		}
		if (bad) return 0;
	}
	int ox = (w - SCREEN_W) / 2, oy = (h - SCREEN_H) / 2;
	/* kept inside the current area (stage coordinates) when it is big enough */
	s32 aL = areaLeft - stageX, aT = areaTop - stageY, aW = areaRight - areaLeft, aH = areaBottom - areaTop;
	s32 left = x0 - ox, top = y0 - oy;
	if (aW >= w) { if (left < aL) left = aL; if (left > aL + aW - w) left = aL + aW - w; }
	else left = aL + (aW - w) / 2;
	if (aH >= h) { if (top < aT) top = aT; if (top > aT + aH - h) top = aT + aH - h; }
	else top = aT + (aH - h) / 2;
	if (x0 >= left && x0 + SCREEN_W <= left + w) ox = x0 - left;
	if (y0 >= top && y0 + SCREEN_H <= top + h) oy = y0 - top;
	/* sprites for the next frames: the cells the view covers, plus what can
	   reach into it (sprite pieces are at most 64 pixels) */
	view_cells_left = cells(ox + 64, 240);
	view_cells_right = cells(w - ox - SCREEN_W, 240);
	view_cells_up = cells(oy + 64, 160);
	view_cells_down = cells(h - oy - SCREEN_H, 160);

	for (int vy = 0; vy < h; vy++) {
		int line = vy - oy;
		if (line < 0) line = 0;
		if (line >= SCREEN_H) line = SCREEN_H - 1;
		u32 *dst = view_frame + (size_t)vy * w;
		u16 dispcnt = R16(line, 0);
		if (dispcnt & 0x80) { for (int x = 0; x < w; x++) dst[x] = 0xFFFFFF; continue; }
		int bgOn[4];
		for (int bg = 0; bg < 4; bg++) {
			bgOn[bg] = (dispcnt & (0x100 << bg)) && (debug.layerMask & (1 << bg));
			if (!bgOn[bg]) continue;
			if (layers[bg].map) draw_level_row(&layers[bg], line, vy, ox, oy, bgRow[bg], w);
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
		int l = vy - oy, inGbaRows = l >= 0 && l < SCREEN_H;
		int w0y = inGbaRows && in_range(l, R16(line, 0x44) >> 8, R16(line, 0x44) & 0xFF, 160);
		int w1y = inGbaRows && in_range(l, R16(line, 0x46) >> 8, R16(line, 0x46) & 0xFF, 160);
		u16 backdrop = PAL16(0) & 0x7FFF;
		for (int x = 0; x < w; x++) {
			int ctl = 0x3F;
			if (windows) {
				int sx = x - ox, in = sx >= 0 && sx < SCREEN_W;
				if ((dispcnt & 0x2000) && w0y && in && in_range(sx, R16(line, 0x40) >> 8, R16(line, 0x40) & 0xFF, 240)) ctl = winin & 0x3F;
				else if ((dispcnt & 0x4000) && w1y && in && in_range(sx, R16(line, 0x42) >> 8, R16(line, 0x42) & 0xFF, 240)) ctl = (winin >> 8) & 0x3F;
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
	}
	view_active = 1;
	return 1;
}
