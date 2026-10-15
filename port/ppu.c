/* The GBA picture, drawn one scanline at a time from the game's video
 * memory and registers: backgrounds (modes 0-5), sprites, windows, colour
 * effects and mosaic. Each line is drawn when the clock (hw.c) passes it,
 * so registers changed between lines (H-blank DMA, V-count interrupts)
 * take effect where they would on a GBA.
 */
#include <string.h>
#include "lift.h"
#include "pc.h"
#include "ui.h"

#define io ((u8 *)0x04000000)
#define pal ((u8 *)0x05000000)
#define vram ((u8 *)0x06000000)
#define oam ((u8 *)0x07000000)
#define IO16(o) (*(u16 *)(io + (o)))
#define IO32(o) (*(u32 *)(io + (o)))
#define PAL16(i) (*(u16 *)(pal + (i) * 2))

u32 ppu_frame[SCREEN_W * SCREEN_H];

#define TRANSPARENT 0x8000

/* internal affine reference points of BG2 and BG3 (20.8 fixed point) */
static s32 refX[2], refY[2];

static s32 ref_reg(u32 o) {
	s32 v = IO32(o) & 0x0FFFFFFF;
	if (v & 0x08000000) v |= 0xF0000000;
	return v;
}
void ppu_affine_written(u32 o) {
	int bg = o >= 0x38;
	u32 base = bg ? 0x38 : 0x28;
	refX[bg] = ref_reg(base);
	refY[bg] = ref_reg(base + 4);
}
void ppu_vblank(void) {
	for (int bg = 0; bg < 2; bg++) {
		u32 base = bg ? 0x38 : 0x28;
		refX[bg] = ref_reg(base);
		refY[bg] = ref_reg(base + 4);
	}
}

static u16 bgLine[4][SCREEN_W];
/* sprites: colour, priority, flags */
static u16 objColor[SCREEN_W];
static u8 objPrio[SCREEN_W];
static u8 objSemi[SCREEN_W];
static u8 objWin[SCREEN_W];

static void mosaic_x(u16 *line, int size) {
	if (size <= 1) return;
	for (int x = 0; x < SCREEN_W; x++) line[x] = line[x - x % size];
}

static void draw_text_bg(int bg, int line) {
	u16 cnt = IO16(0x08 + bg * 2);
	u16 *outp = bgLine[bg];
	int hofs = IO16(0x10 + bg * 4) & 0x1FF, vofs = IO16(0x12 + bg * 4) & 0x1FF;
	u32 charBase = ((cnt >> 2) & 3) * 0x4000, screenBase = ((cnt >> 8) & 0x1F) * 0x800;
	int bpp8 = cnt & 0x80;
	int size = cnt >> 14;
	int w = (size & 1) ? 512 : 256, h = (size & 2) ? 512 : 256;
	int mosaic = cnt & 0x40;
	int my = ((IO16(0x4C) >> 4) & 15) + 1, mx = (IO16(0x4C) & 15) + 1;
	if (mosaic) line -= line % my;
	int y = (line + vofs) & (h - 1);
	int ty = y >> 3;
	for (int px = 0; px < SCREEN_W; px++) {
		int x = (px + hofs) & (w - 1);
		int tx = x >> 3;
		int block = (tx >> 5) + (ty >> 5) * (w >> 8);
		u32 ea = screenBase + block * 0x800 + ((ty & 31) * 32 + (tx & 31)) * 2;
		u16 e = *(u16 *)(vram + (ea & 0xFFFF));
		int fx = x & 7, fy = y & 7;
		if (e & 0x400) fx = 7 - fx;
		if (e & 0x800) fy = 7 - fy;
		u32 tile = e & 0x3FF;
		u16 c = TRANSPARENT;
		if (bpp8) {
			u32 a = charBase + tile * 64 + fy * 8 + fx;
			if (a < 0x10000) { u8 idx = vram[a]; if (idx) c = PAL16(idx) & 0x7FFF; }
		} else {
			u32 a = charBase + tile * 32 + fy * 4 + (fx >> 1);
			if (a < 0x10000) {
				u8 idx = (vram[a] >> ((fx & 1) * 4)) & 15;
				if (idx) c = PAL16((e >> 12) * 16 + idx) & 0x7FFF;
			}
		}
		outp[px] = c;
	}
	if (mosaic) mosaic_x(outp, mx);
}

static void draw_affine_bg(int bg, int line) {
	u16 cnt = IO16(0x08 + bg * 2);
	u16 *outp = bgLine[bg];
	int k = bg - 2;
	u32 regs = bg == 2 ? 0x20 : 0x30;
	s32 pa = (s16)IO16(regs), pc = (s16)IO16(regs + 4);
	u32 charBase = ((cnt >> 2) & 3) * 0x4000, screenBase = ((cnt >> 8) & 0x1F) * 0x800;
	int size = 128 << (cnt >> 14);
	int wrap = cnt & 0x2000;
	s32 x = refX[k], y = refY[k];
	(void)line;
	for (int px = 0; px < SCREEN_W; px++, x += pa, y += pc) {
		int ix = x >> 8, iy = y >> 8;
		if (wrap) { ix &= size - 1; iy &= size - 1; }
		else if (ix < 0 || iy < 0 || ix >= size || iy >= size) { outp[px] = TRANSPARENT; continue; }
		u8 tile = vram[(screenBase + (iy >> 3) * (size >> 3) + (ix >> 3)) & 0xFFFF];
		u32 a = charBase + tile * 64 + (iy & 7) * 8 + (ix & 7);
		u8 idx = a < 0x10000 ? vram[a] : 0;
		outp[px] = idx ? PAL16(idx) & 0x7FFF : TRANSPARENT;
	}
	if (cnt & 0x40) mosaic_x(outp, (IO16(0x4C) & 15) + 1);
}

static void draw_bitmap_bg(int mode, int line) {
	u16 *outp = bgLine[2];
	u16 dispcnt = IO16(0);
	u32 page = (dispcnt & 0x10) ? 0xA000 : 0;
	s32 pa = (s16)IO16(0x20), pc = (s16)IO16(0x24);
	s32 x = refX[0], y = refY[0];
	int w = mode == 5 ? 160 : 240, h = mode == 5 ? 128 : 160;
	(void)line;
	for (int px = 0; px < SCREEN_W; px++, x += pa, y += pc) {
		int ix = x >> 8, iy = y >> 8;
		if (ix < 0 || iy < 0 || ix >= w || iy >= h) { outp[px] = TRANSPARENT; continue; }
		if (mode == 4) {
			u8 idx = vram[page + iy * 240 + ix];
			outp[px] = idx ? PAL16(idx) & 0x7FFF : TRANSPARENT;
		} else {
			u32 base = mode == 5 ? page : 0;
			outp[px] = *(u16 *)(vram + base + (iy * w + ix) * 2) & 0x7FFF;
		}
	}
}

static const u8 sObjSize[3][4][2] = {
	{ { 8, 8 }, { 16, 16 }, { 32, 32 }, { 64, 64 } },
	{ { 16, 8 }, { 32, 8 }, { 32, 16 }, { 64, 32 } },
	{ { 8, 16 }, { 8, 32 }, { 16, 32 }, { 32, 64 } },
};

static void draw_sprites(int line) {
	u16 dispcnt = IO16(0);
	int oneD = dispcnt & 0x40;
	int bitmapMode = (dispcnt & 7) >= 3;
	int omx = ((IO16(0x4C) >> 8) & 15) + 1, omy = ((IO16(0x4C) >> 12) & 15) + 1;
	for (int x = 0; x < SCREEN_W; x++) { objColor[x] = TRANSPARENT; objPrio[x] = 4; objSemi[x] = 0; objWin[x] = 0; }
	for (int i = 0; i < 128; i++) {
		u16 a0 = *(u16 *)(oam + i * 8), a1 = *(u16 *)(oam + i * 8 + 2), a2 = *(u16 *)(oam + i * 8 + 4);
		int affine = a0 & 0x100;
		if (!affine && (a0 & 0x200)) continue;
		int mode = (a0 >> 10) & 3;
		if (mode == 3) continue;
		int shape = a0 >> 14;
		if (shape == 3) continue;
		int w = sObjSize[shape][a1 >> 14][0], h = sObjSize[shape][a1 >> 14][1];
		int bw = w, bh = h;
		if (affine && (a0 & 0x200)) { bw *= 2; bh *= 2; }
		int sy = a0 & 0xFF;
		int iy = (line - sy) & 0xFF;
		if (iy >= bh) continue;
		int sx = a1 & 0x1FF;
		if (sx >= 240) sx -= 512;
		int mosaic = a0 & 0x1000;
		if (mosaic) iy -= iy % omy;
		int bpp8 = a0 & 0x2000;
		u32 tileBase = a2 & 0x3FF;
		int prio = (a2 >> 10) & 3;
		int palBank = a2 >> 12;
		s32 pa = 256, pb = 0, pc = 0, pd = 256;
		if (affine) {
			int m = (a1 >> 9) & 31;
			pa = *(s16 *)(oam + m * 32 + 6);
			pb = *(s16 *)(oam + m * 32 + 14);
			pc = *(s16 *)(oam + m * 32 + 22);
			pd = *(s16 *)(oam + m * 32 + 30);
		}
		for (int bx = 0; bx < bw; bx++) {
			int px = sx + bx;
			if (px < 0 || px >= SCREEN_W) continue;
			int tx, ty;
			if (affine) {
				int dx = bx - bw / 2, dy = iy - bh / 2;
				tx = ((pa * dx + pb * dy) >> 8) + w / 2;
				ty = ((pc * dx + pd * dy) >> 8) + h / 2;
				if (tx < 0 || ty < 0 || tx >= w || ty >= h) continue;
			} else {
				tx = (a1 & 0x1000) ? w - 1 - bx : bx;
				ty = (a1 & 0x2000) ? h - 1 - iy : iy;
			}
			if (mosaic) tx -= tx % omx;
			u32 tileNum;
			if (oneD) tileNum = tileBase + ((ty >> 3) * (w >> 3) + (tx >> 3)) * (bpp8 ? 2 : 1);
			else tileNum = tileBase + (ty >> 3) * 32 + (tx >> 3) * (bpp8 ? 2 : 1);
			tileNum &= 0x3FF;
			if (bitmapMode && tileNum < 512) continue;
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
			/* the lowest OAM index wins between sprites of the same priority */
			if ((objColor[px] & TRANSPARENT) || prio < objPrio[px]) {
				objColor[px] = c;
				objPrio[px] = prio;
				objSemi[px] = mode == 1;
			}
		}
	}
}

static int in_range(int v, int a, int b, int max) {
	if (b > max || a > b) b = max;   /* hardware: a garbage end means to the edge */
	return v >= a && v < b;
}

static u16 blend(u16 a, u16 b, int eva, int evb) {
	int r = ((a & 31) * eva + (b & 31) * evb) >> 4;
	int g = (((a >> 5) & 31) * eva + ((b >> 5) & 31) * evb) >> 4;
	int bl = (((a >> 10) & 31) * eva + ((b >> 10) & 31) * evb) >> 4;
	if (r > 31) r = 31;
	if (g > 31) g = 31;
	if (bl > 31) bl = 31;
	return r | g << 5 | bl << 10;
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
	r = (r << 3) | (r >> 2); g = (g << 3) | (g >> 2); b = (b << 3) | (b >> 2);
	return r << 16 | g << 8 | b;
}

void ppu_draw_line(int line) {
	u32 *dst = ppu_frame + line * SCREEN_W;
	view_record_line(line);
	u16 dispcnt = IO16(0);
	int mode = dispcnt & 7;
	if (dispcnt & 0x80) {   /* forced blank */
		for (int x = 0; x < SCREEN_W; x++) dst[x] = 0xFFFFFF;
		goto advance;
	}
	{
		int bgOn[4] = { 0, 0, 0, 0 };
		switch (mode) {
		case 0: bgOn[0] = bgOn[1] = bgOn[2] = bgOn[3] = 1; break;
		case 1: bgOn[0] = bgOn[1] = bgOn[2] = 1; break;
		case 2: bgOn[2] = bgOn[3] = 1; break;
		default: bgOn[2] = 1; break;
		}
		for (int bg = 0; bg < 4; bg++) {
			bgOn[bg] = bgOn[bg] && (dispcnt & (0x100 << bg)) && (debug.layerMask & (1 << bg));
			if (!bgOn[bg]) continue;
			if (mode >= 3) draw_bitmap_bg(mode, line);
			else if (bg >= 2 && mode >= 1 && !(mode == 1 && bg == 3)) draw_affine_bg(bg, line);
			else draw_text_bg(bg, line);
		}
		int objOn = (dispcnt & 0x1000) && (debug.layerMask & 0x10);
		if (objOn || (dispcnt & 0x8000)) draw_sprites(line);
		int windows = dispcnt & 0xE000;
		u16 winin = IO16(0x48), winout = IO16(0x4A);
		u16 bldcnt = IO16(0x50), bldalpha = IO16(0x52);
		int effect = (bldcnt >> 6) & 3;
		int eva = bldalpha & 31, evb = (bldalpha >> 8) & 31, evy = IO16(0x54) & 31;
		if (eva > 16) eva = 16;
		if (evb > 16) evb = 16;
		if (evy > 16) evy = 16;
		int bgPrio[4];
		for (int bg = 0; bg < 4; bg++) bgPrio[bg] = IO16(0x08 + bg * 2) & 3;
		int w0y = in_range(line, IO16(0x44) >> 8, IO16(0x44) & 0xFF, 160);
		int w1y = in_range(line, IO16(0x46) >> 8, IO16(0x46) & 0xFF, 160);
		u16 backdrop = PAL16(0) & 0x7FFF;
		for (int x = 0; x < SCREEN_W; x++) {
			int ctl = 0x3F;
			if (windows) {
				if ((dispcnt & 0x2000) && w0y && in_range(x, IO16(0x40) >> 8, IO16(0x40) & 0xFF, 240)) ctl = winin & 0x3F;
				else if ((dispcnt & 0x4000) && w1y && in_range(x, IO16(0x42) >> 8, IO16(0x42) & 0xFF, 240)) ctl = (winin >> 8) & 0x3F;
				else if ((dispcnt & 0x8000) && objWin[x]) ctl = (winout >> 8) & 0x3F;
				else ctl = winout & 0x3F;
			}
			/* the top two layers: 0-3 backgrounds, 4 sprites, 5 backdrop. At
			   each priority the sprites come first, then BG0 to BG3. */
			int layer[2] = { 5, 5 };
			u16 color[2] = { backdrop, backdrop };
			int n = 0;
			for (int p = 0; p < 4 && n < 2; p++) {
				if (objOn && (ctl & 0x10) && !(objColor[x] & TRANSPARENT) && objPrio[x] == p) {
					layer[n] = 4; color[n] = objColor[x]; n++;
				}
				for (int bg = 0; bg < 4 && n < 2; bg++)
					if (bgOn[bg] && bgPrio[bg] == p && (ctl & (1 << bg)) && !(bgLine[bg][x] & TRANSPARENT)) {
						layer[n] = bg; color[n] = bgLine[bg][x]; n++;
					}
			}
			int top = layer[0], second = layer[1];
			u16 topC = color[0], secondC = color[1];
			u16 c = topC;
			if (ctl & 0x20) {
				int secondTarget = bldcnt & (0x100 << second);
				if (top == 4 && objSemi[x] && secondTarget) c = blend(topC, secondC, eva, evb);
				else if (bldcnt & (1 << top)) {
					if (effect == 1 && secondTarget) c = blend(topC, secondC, eva, evb);
					else if (effect == 2) c = brighten(topC, evy);
					else if (effect == 3) c = darken(topC, evy);
				}
			}
			dst[x] = to_rgb(c);
		}
	}
advance:
	/* the affine reference points move on by one line */
	refX[0] += (s16)IO16(0x22); refY[0] += (s16)IO16(0x26);
	refX[1] += (s16)IO16(0x32); refY[1] += (s16)IO16(0x36);
}
