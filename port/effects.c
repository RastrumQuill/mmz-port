/* The screen-effects finder: logs when a screen-covering effect starts,
 * changes kind or stops, with the frame and where the player is, so each
 * one can be looked at and given a wide-view treatment (world space, the
 * whole view, or the GBA screen only).
 *
 * Watched each frame (the registers each GBA line was drawn with, the
 * palettes, the sprites):
 *   blend    BLDCNT's mode (alpha / brighten / darken) and targets; the
 *            BLDALPHA / BLDY range while it lasts
 *   window   DISPCNT's window bits, WIN0/WIN1 rects, WININ / WINOUT
 *   mosaic   MOSAIC set
 *   lines    registers that differ between the GBA's lines (HBlank / HDMA
 *            writes: waves, gradients, split screens), with the lines
 *   palette  many palette entries changed in a frame (fades, flashes;
 *            "anim" for a few entries changing again and again)
 *   bigobj   sprites of 64x64 and up, or affine double-size ones
 *
 * Out: stderr when Logging / Screen effects is on (EFFECTSDEBUG), a TSV
 * with MMZ_EFFECTS_TSV=FILE (frame, mission, stage, area, x, y, kind,
 * event, detail), and the Debug window's list (effects_line).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pc.h"
#include "ui.h"
#include "debug.h"

extern long frameCount;
const unsigned char *view_line_regs(int line);

#define LINES 160
#define NK 6
static const char *kindName[NK] = { "blend", "window", "mosaic", "lines", "palette", "bigobj" };
static char cur[NK][160];      /* the effect's signature this frame ("" off) */
static long since[NK];
static int lo[NK], hi[NK];     /* blend: the BLDALPHA / BLDY range while it lasts */
#define RING 48
static char ring[RING][200];
static int ringN;
static FILE *tsv;

static void emit(int k, const char *ev, const char *detail) {
	struct Location l;
	loc_now(&l);
	char line[200];
	snprintf(line, sizeof line, "%ld m%d a%d %s %s %s", frameCount, l.mission, l.area, kindName[k], ev, detail);
	snprintf(ring[ringN % RING], sizeof ring[0], "%s", line);
	ringN++;
	if (dbgo.logEffects) fprintf(stderr, "effects: %s\n", line);
	if (!tsv) {
		static int tried;
		const char *p = getenv("MMZ_EFFECTS_TSV");
		if (!tried && p) { tried = 1; tsv = fopen(p, "w"); if (tsv) fprintf(tsv, "frame\tmission\tstage\tarea\tx\ty\tkind\tevent\tdetail\n"); }
	}
	if (tsv) { fprintf(tsv, "%ld\t%d\t%d\t%d\t%d\t%d\t%s\t%s\t%s\n", frameCount, l.mission, l.stage, l.area, l.x, l.y, kindName[k], ev, detail); fflush(tsv); }
}

static void update(int k, const char *sig, const char *stopDetail) {
	if (!strcmp(cur[k], sig)) return;
	if (cur[k][0]) {
		char d[200];
		snprintf(d, sizeof d, "%s (%ld frames)%s%s", cur[k], frameCount - since[k], stopDetail ? " " : "", stopDetail ? stopDetail : "");
		emit(k, sig[0] ? "change" : "stop", d);
	}
	if (sig[0]) { if (!cur[k][0]) emit(k, "start", sig); since[k] = frameCount; }
	snprintf(cur[k], sizeof cur[k], "%s", sig);
}

#define L16(line, o) (*(const u16 *)(view_line_regs(line) + (o)))

static const struct { int off; const char *name; } lineRegs[] = {
	{ 0x00, "DISPCNT" }, { 0x08, "BG0CNT" }, { 0x0A, "BG1CNT" }, { 0x0C, "BG2CNT" }, { 0x0E, "BG3CNT" },
	{ 0x10, "BG0HOFS" }, { 0x12, "BG0VOFS" }, { 0x14, "BG1HOFS" }, { 0x16, "BG1VOFS" },
	{ 0x18, "BG2HOFS" }, { 0x1A, "BG2VOFS" }, { 0x1C, "BG3HOFS" }, { 0x1E, "BG3VOFS" },
	{ 0x40, "WIN0H" }, { 0x42, "WIN1H" }, { 0x44, "WIN0V" }, { 0x46, "WIN1V" }, { 0x48, "WININ" }, { 0x4A, "WINOUT" },
	{ 0x4C, "MOSAIC" }, { 0x50, "BLDCNT" }, { 0x52, "BLDALPHA" }, { 0x54, "BLDY" },
};

void effects_frame(void) {
	if (!view_line_regs(0)) return;
	char sig[160], *p;
	/* blend (as the middle line has it) */
	u16 bld = L16(80, 0x50), alpha = L16(80, 0x52), bldy = L16(80, 0x54) & 31;
	int mode = (bld >> 6) & 3;
	sig[0] = 0;
	if (mode) snprintf(sig, sizeof sig, "%s 1st %02X 2nd %02X", mode == 1 ? "alpha" : mode == 2 ? "brighten" : "darken", bld & 0x3F, (bld >> 8) & 0x3F);
	int v = mode == 1 ? (alpha & 31) << 8 | (alpha >> 8 & 31) : bldy;
	char range[48];
	snprintf(range, sizeof range, mode == 1 || strstr(cur[0], "alpha") ? "EVA/EVB %X..%X" : "EVY %d..%d", lo[0], hi[0]);
	if (strcmp(cur[0], sig)) { update(0, sig, cur[0][0] ? range : NULL); lo[0] = hi[0] = v; }
	else if (mode) { if (v < lo[0]) lo[0] = v; if (v > hi[0]) hi[0] = v; }
	/* windows */
	u16 dc = L16(80, 0x00);
	sig[0] = 0; p = sig;
	if (dc & 0x2000) p += sprintf(p, "win0 %d..%d x %d..%d ", L16(80, 0x40) >> 8, L16(80, 0x40) & 0xFF, L16(80, 0x44) >> 8, L16(80, 0x44) & 0xFF);
	if (dc & 0x4000) p += sprintf(p, "win1 %d..%d x %d..%d ", L16(80, 0x42) >> 8, L16(80, 0x42) & 0xFF, L16(80, 0x46) >> 8, L16(80, 0x46) & 0xFF);
	if (dc & 0x8000) p += sprintf(p, "objwin ");
	if (dc & 0xE000) sprintf(p, "in %04X out %04X", L16(80, 0x48), L16(80, 0x4A));
	/* (the rects move with what they frame: only the kind is the signature) */
	{
		char kind[64]; kind[0] = 0;
		if (dc & 0x2000) strcat(kind, "win0 ");
		if (dc & 0x4000) strcat(kind, "win1 ");
		if (dc & 0x8000) strcat(kind, "objwin ");
		if (strcmp(cur[1], kind)) { if (kind[0]) { update(1, kind, NULL); emit(1, "rect", sig); } else update(1, "", NULL); }
	}
	/* mosaic */
	u16 mos = L16(80, 0x4C);
	sig[0] = 0;
	if (mos) snprintf(sig, sizeof sig, "%04X", mos);
	update(2, sig, NULL);
	/* registers that differ between lines */
	sig[0] = 0; p = sig;
	for (unsigned i = 0; i < sizeof lineRegs / sizeof *lineRegs; i++) {
		int o = lineRegs[i].off, first = -1, last = -1;
		u16 v0 = L16(0, o);
		for (int l = 1; l < LINES; l++) if (L16(l, o) != v0) { if (first < 0) first = l; last = l; }
		if (first >= 0 && p - sig < (int)sizeof sig - 32) p += sprintf(p, "%s %d..%d ", lineRegs[i].name, first, last);
	}
	/* (the lines a split moves on change every frame: the registers are the signature) */
	{
		char regs[160]; char *q = regs; regs[0] = 0;
		for (char *t = sig; *t;) {
			char name[16]; int a, b, n = 0;
			if (sscanf(t, "%15s %d..%d %n", name, &a, &b, &n) < 3 || !n) break;
			q += sprintf(q, "%s ", name);
			t += n;
		}
		if (strcmp(cur[3], regs)) { update(3, regs, NULL); if (regs[0]) emit(3, "lines", sig); }
	}
	/* palettes */
	{
		static u16 last[512];
		static int haveLast;
		static u8 hist[120];          /* frames with palette changes, the last 120 */
		static int histN, animOn;
		static long bigUntil, lastChange;
		const u16 *pal = (const u16 *)(uintptr_t)0x05000000;
		int changed = 0, bgC = 0, objC = 0;
		for (int i = 0; i < 512; i++) if (pal[i] != last[i]) { changed++; if (i < 256) bgC++; else objC++; }
		if (!haveLast) changed = bgC = objC = 0;
		u8 *hp = &hist[frameCount % 120];
		histN += (changed > 0) - *hp; *hp = changed > 0;
		if (changed > 48) bigUntil = frameCount + 4;
		if (changed > 0) lastChange = frameCount;
		/* a palette animation: changes on >= 8 of the last 120 frames, over once 120 frames pass with none */
		if (histN >= 8) animOn = 1;
		else if (frameCount - lastChange > 120) animOn = 0;
		sig[0] = 0;
		if (frameCount < bigUntil) snprintf(sig, sizeof sig, "fade/flash");
		else if (animOn) snprintf(sig, sizeof sig, "anim");
		if (strcmp(cur[4], sig)) {
			char d[64];
			snprintf(d, sizeof d, "%d entries (bg %d obj %d)", changed, bgC, objC);
			update(4, sig, NULL);
			if (sig[0]) emit(4, "entries", d);
		}
		memcpy(last, pal, sizeof last);
		haveLast = 1;
	}
	/* big sprites */
	{
		static const u8 sz[3][4][2] = { { { 8, 8 }, { 16, 16 }, { 32, 32 }, { 64, 64 } },
		                                { { 16, 8 }, { 32, 8 }, { 32, 16 }, { 64, 32 } },
		                                { { 8, 16 }, { 8, 32 }, { 16, 32 }, { 32, 64 } } };
		const u16 *oam = (const u16 *)(uintptr_t)0x07000000;
		int n = 0, big = 0, dbl = 0;
		for (int i = 0; i < 128; i++) {
			u16 a0 = oam[i * 4], a1 = oam[i * 4 + 1];
			if ((a0 & 0x300) == 0x200) continue;   /* hidden */
			int shape = a0 >> 14, size = a1 >> 14;
			if (shape == 3) continue;
			int w = sz[shape][size][0], h = sz[shape][size][1];
			if (a0 & 0x100 && a0 & 0x200) { w *= 2; h *= 2; dbl++; }
			if (w * h >= 64 * 64) big++;
			n++;
		}
		sig[0] = 0;
		if (big) snprintf(sig, sizeof sig, "%s", dbl ? "big (double-size affine)" : "big");
		char d[48];
		snprintf(d, sizeof d, "%d of %d sprites", big, n);
		if (strcmp(cur[5], sig)) { update(5, sig, NULL); if (sig[0]) emit(5, "count", d); }
	}
}

/* the Debug window's list: the i-th newest line, NULL past the end */
const char *effects_line(int i) {
	if (i >= ringN || i >= RING) return NULL;
	return ring[(ringN - 1 - i) % RING];
}
/* the effects on now ("" none) */
const char *effects_now(void) {
	static char s[400];
	char *p = s; s[0] = 0;
	for (int k = 0; k < NK; k++) if (cur[k][0] && p - s < 300) p += snprintf(p, 400 - (p - s), "%s: %.60s; ", kindName[k], cur[k]);
	return s;
}
