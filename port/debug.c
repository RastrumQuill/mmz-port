/* Debugging help: where the player is (for reports and bookmarks), and the
 * warp that goes back there.
 *
 * A bookmark is one line, e.g. "mmz:m9 a2 v0 cp1 x1234 y567 cx1240 cy540":
 * the mission (as picked at the base), the area and its variant, the
 * checkpoint reached, Zero's position and the camera's centre, in pixels.
 *
 * The warp plays the game's own way there, not a memory restore: from the
 * title (fast-forwarded, Start / A pressed now and then, as --skip-intro)
 * the chosen mission is forced at the base, and the checkpoint the bookmark
 * had reached is set while the stage starts, so the stage starts at it.
 * Once a second of play has passed, Zero and the camera are put at the
 * bookmark's position. The checkpoint gets the right stage state (doors,
 * events); the move from the checkpoint to the spot does not walk through
 * events in between, so a spot behind a scripted event may look different.
 *
 * "mmz:base a9 x.. y.." is the Resistance base (stage 0, mission 0, between
 * missions): the warp continues the save, which starts in the base with the
 * terminal's menu open (StageMode_Continue), closes it with B and then puts
 * Zero in the bookmark's room and spot.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lift.h"
#include "pc.h"
#include "ui.h"
#include "debug.h"

/* RAM addresses (the decompilation's include/: stage_area.h, stage_main.h,
   game_state.h, camera.h, zero.h, hitbox.h) */
#define ADDR_MISSION    0x0202A574u   /* the mission picked at the base */
#define ADDR_STAGE      0x02022B60u   /* gStageState.stage */
#define ADDR_ZERO       0x02022B7Cu   /* gStageState.cutscene.slots[0].actor: Zero */
#define ADDR_CHECKPOINT 0x02022AECu   /* gUnk_02022AD0.unk_1C: the checkpoint reached */
#define ADDR_AREA       0x0200520Cu   /* gStage.area (| 0x80) */
#define ADDR_VARIANTS   0x02005208u   /* gStage.areaVariants: 2 bits per area */
#define ADDR_CAMERA     0x02022C44u   /* gCamera: x, y at +0x38, target at +0x30 */
#define ADDR_OVERLAY    0x020236E2u   /* gGameMode.sub: stage play's overlay (1: the terminal's menu) */
#define ADDR_HITBOXES   0x02004FA0u   /* gHitboxes: flags (bit n: side n cannot be hurt), killMask */
#define ZERO_X 0x4C                   /* struct Zero: x, y, vx, vy (24.8) */
#define ZERO_HP 0x8C                  /* hitbox.hp */

#define RD8(a) (*(volatile u8 *)(uintptr_t)(a))
#define RD16(a) (*(volatile u16 *)(uintptr_t)(a))
#define RD32(a) (*(volatile s32 *)(uintptr_t)(a))

static u32 zero_addr(void) {
	u32 z = (u32)RD32(ADDR_ZERO);
	return z >= 0x02000000 && z < 0x0203FF00 ? z : 0;
}

void loc_now(struct Location *l) {
	memset(l, 0, sizeof *l);
	l->mission = RD8(ADDR_MISSION);
	l->stage = RD16(ADDR_STAGE);
	l->area = RD16(ADDR_AREA) & 0x7F;
	l->variant = l->area < 16 ? (RD32(ADDR_VARIANTS) >> (l->area * 2)) & 3 : 0;
	l->checkpoint = RD8(ADDR_CHECKPOINT);
	l->inStage = view_gameplay && zero_addr();
	u32 z = zero_addr();
	if (z) { l->x = RD32(z + ZERO_X) >> 8; l->y = RD32(z + ZERO_X + 4) >> 8; }
	l->camX = RD32(ADDR_CAMERA + 0x38) >> 8;
	l->camY = RD32(ADDR_CAMERA + 0x3C) >> 8;
}

void loc_format(const struct Location *l, char *out, size_t n) {
	if (l->mission == 0)   /* the base */
		snprintf(out, n, "mmz:base a%d v%d x%d y%d cx%d cy%d", l->area, l->variant, l->x, l->y, l->camX, l->camY);
	else snprintf(out, n, "mmz:m%d a%d v%d cp%d x%d y%d cx%d cy%d", l->mission, l->area, l->variant, l->checkpoint,
	         l->x, l->y, l->camX, l->camY);
}

int loc_parse(const char *s, struct Location *l) {
	memset(l, 0, sizeof *l);
	l->mission = -1;
	l->x = l->y = l->camX = l->camY = -1;
	const char *p = strstr(s, "mmz:");
	if (!p) return 0;
	p += 4;
	if (!strncmp(p, "base", 4)) { l->mission = 0; p += 4; }
	while (*p) {
		while (*p == ' ' || *p == '\t' || *p == ',') p++;
		if (!*p || *p == '\r' || *p == '\n') break;
		char key[4] = { 0 };
		int k = 0;
		while (k < 3 && *p >= 'a' && *p <= 'z') key[k++] = *p++;
		char *end;
		long v = strtol(p, &end, 10);
		if (end == p) return 0;
		p = end;
		if (!strcmp(key, "m")) l->mission = v;
		else if (!strcmp(key, "a")) l->area = v;
		else if (!strcmp(key, "v")) l->variant = v;
		else if (!strcmp(key, "cp")) l->checkpoint = v;
		else if (!strcmp(key, "x")) l->x = v;
		else if (!strcmp(key, "y")) l->y = v;
		else if (!strcmp(key, "cx")) l->camX = v;
		else if (!strcmp(key, "cy")) l->camY = v;
		/* unknown keys: later additions, ignored */
	}
	return l->mission >= 0 && l->mission < 18;
}

/* ------------------------------------------------------------------ warp */

static struct Location warpTo;
static int warpState;   /* 0 none, 1 to the stage, 2 placing, 3 done */
static long warpFrames, warpStable;
int warp_verbose;

char warp_origin[160];
void warp_start(const struct Location *l) {
	warpTo = *l;
	loc_format(l, warp_origin, sizeof warp_origin);
	warpState = 1;
	warpFrames = warpStable = 0;
}

int warp_active(void) { return warpState == 1 || warpState == 2; }

static void place(void) {
	u32 z = zero_addr();
	if (!z || warpTo.x < 0 || warpTo.y < 0) return;   /* no position: where the checkpoint starts */
	RD32(z + ZERO_X) = warpTo.x << 8;
	RD32(z + ZERO_X + 4) = warpTo.y << 8;
	RD32(z + ZERO_X + 8) = RD32(z + ZERO_X + 12) = 0;
	int cx = warpTo.camX >= 0 ? warpTo.camX : warpTo.x, cy = warpTo.camY >= 0 ? warpTo.camY : warpTo.y - 20;
	RD32(ADDR_CAMERA + 0x30) = RD32(ADDR_CAMERA + 0x38) = cx << 8;
	RD32(ADDR_CAMERA + 0x34) = RD32(ADDR_CAMERA + 0x3C) = cy << 8;
}

int warp_step(u16 *keys) {
	if (!warp_active()) return 0;
	warpFrames++;
	if (warpState == 1 && warpTo.mission == 0) {
		/* the base: Continue starts there with the terminal's menu up */
		int playing = view_gameplay && zero_addr();
		/* (a new game picks mission 1: back to 0, the base, before it starts) */
		if (!playing && RD8(ADDR_MISSION) != 0 && !getenv("WARPNOPOKE")) RD8(ADDR_MISSION) = 0;
		int here = playing && RD16(ADDR_STAGE) == 0 && RD8(ADDR_MISSION) == 0 && RD8(ADDR_OVERLAY) == 0;
		warpStable = here ? warpStable + 1 : 0;
		if (warp_verbose && warpFrames % (warp_verbose > 1 ? 50 : 300) == 0)
			fprintf(stderr, "warp: frame %ld mode %02X.%02X.%02X stage %d mission %d playing %d\n", warpFrames, RD8(0x020236E0), RD8(0x020236E1), RD8(ADDR_OVERLAY), RD16(ADDR_STAGE), RD8(ADDR_MISSION), playing);
		if (warpStable >= 60) { warpState = 2; warpFrames = 0; }
		else {
			debug.fastForward = 1;
			int t = warpFrames % 40;
			*keys = t < 4 ? (warpFrames < 2400 && warpFrames % 80 < 40 ? 1 << 3 : 1 << 0) : 0;   /* Start (title), else A */
			if (playing) *keys = t < 4 && RD8(ADDR_OVERLAY) ? 1 << 1 : 0;   /* B: out of the menu */
			if (warpFrames > 20000) { fprintf(stderr, "warp: did not reach the base\n"); warpState = 0; debug.fastForward = 0; }
			return 1;
		}
	} else if (warpState == 1) {
		/* the mission is forced at the base; the checkpoint while the stage starts */
		/* only once the game has picked one (the base's mission choice, or
		   a new game's first): forced earlier, a save does not load right */
		int picked = RD8(ADDR_MISSION) != 0;
		if (picked && !getenv("WARPNOPOKE")) RD8(ADDR_MISSION) = warpTo.mission;
		int playing = view_gameplay && zero_addr();
		if (picked && (!playing || warpStable < 2)) RD8(ADDR_CHECKPOINT) = warpTo.checkpoint;
		warpStable = playing && RD8(ADDR_MISSION) == warpTo.mission ? warpStable + 1 : 0;
		if (warp_verbose && warpFrames % (warp_verbose > 1 ? 50 : 300) == 0)
			fprintf(stderr, "warp: frame %ld mode %02X.%02X stage %d mission %d playing %d (view %d zero %X event %04X)\n", warpFrames, RD8(0x020236E0), RD8(0x020236E1), RD16(ADDR_STAGE), RD8(ADDR_MISSION), playing, view_gameplay, zero_addr(), RD16(0x02022B6E));
		if (warpStable >= 60) { warpState = 2; warpFrames = 0; }
		else {
			debug.fastForward = 1;
			int t = warpFrames % 40;
			*keys = t < 4 ? (warpFrames < 2400 && warpFrames % 80 < 40 ? 1 << 3 : 1 << 0) : 0;   /* Start (title), else A */
			if (playing) *keys = 0;   /* (A would talk to whoever is near) */
			if (warpFrames > 20000) { fprintf(stderr, "warp: did not reach mission %d\n", warpTo.mission); warpState = 0; debug.fastForward = 0; }
			return 1;
		}
	}
	/* a few frames: the camera and the area follow, objects of the area spawn */
	*keys = 0;
	place();
	if (warpFrames >= 4) {
		warpState = 3;
		debug.fastForward = 0;
		struct Location l;
		loc_now(&l);
		char b[160];
		loc_format(&l, b, sizeof b);
		fprintf(stderr, "warp: at %s\n", b);
	}
	return 1;
}

/* --------------------------------------------------------------- cheats */

int cheat_invincible, cheat_no_enemies;
static int setFlag;

void cheats_frame(void) {
	/* gHitboxes.flags bit 0: Zero's side cannot be hurt (as the game sets
	   for its own scenes); killMask bit 1: every enemy body dies (as when
	   a boss is beaten) */
	if (cheat_invincible) { if (!(RD8(ADDR_HITBOXES) & 1)) setFlag = 1; RD8(ADDR_HITBOXES) |= 1; }
	else if (setFlag) { RD8(ADDR_HITBOXES) &= ~1; setFlag = 0; }
	if (cheat_no_enemies && view_gameplay) RD8(ADDR_HITBOXES + 1) |= 2;
	/* infinite life: Zero's life kept at the most it has been since the
	   cheat went on (a pickup that raises it raises the mark) */
	static int top = -1;
	u32 z = zero_addr();
	if (!dbgo.infLife || !z || !view_gameplay) { if (!dbgo.infLife) top = -1; return; }
	s16 *hp = (s16 *)(uintptr_t)(z + ZERO_HP);
	if (*hp > top) top = *hp;
	if (top > 0 && *hp < top) *hp = (s16)top;
}

/* ------------------------------------------------------- teleport */

/* moves Zero to global pixels x, y if he can be there: the view's shown
   map says the cell is open and reached from where he stands (and the one
   above, his head), as the warp needs; 0 if not */
int teleport_safe(int x, int y) {
	int c = view_cell(x, y), up = view_cell(x, y - 16);
	return c >= 0 && (c & 8) && !(c & 4) && up >= 0 && !(up & 4);
}
int teleport_to(int x, int y) {
	u32 z = zero_addr();
	if (!z || !view_gameplay || !teleport_safe(x, y)) return 0;
	RD32(z + ZERO_X) = x << 8;
	RD32(z + ZERO_X + 4) = y << 8;
	RD32(z + ZERO_X + 8) = 0;   /* vx, vy */
	RD32(z + ZERO_X + 12) = 0;
	return 1;
}

/* ---------------------------------------------------- debug options */

struct DbgOpts dbgo = { .fillOnly = -1 };

static int env_on(const char *n) { return getenv(n) != NULL; }
void dbg_init_env(void) {
	const char *e;
	dbgo.noCrop = env_on("MMZ_NOCROP");
	dbgo.noShown = env_on("MMZ_NOSHOWN");
	dbgo.hideUnshown = env_on("MMZ_HIDEUNSHOWN");
	dbgo.fillHide = env_on("MMZ_FILLHIDE");
	dbgo.fillOnly = (e = getenv("MMZ_FILLONLY")) ? atoi(e) : -1;
	dbgo.logView = env_on("VIEWDEBUG");
	dbgo.logCrop = env_on("CROPDEBUG");
	dbgo.logChunk = (e = getenv("CHUNKDEBUG")) ? (e[0] == '2' ? 2 : 1) : 0;
	dbgo.logFit = env_on("FITDEBUG");
	dbgo.logFill = env_on("MMZ_FILLDEBUG");
	dbgo.logFillMap = env_on("MMZ_FILLMAP");
	dbgo.logOwMap = env_on("MMZ_OWMAP");
	dbgo.logShown = (e = getenv("SHOWNDEBUG")) ? (e[0] == 'L' ? 'L' : 1) : 0;
	dbgo.logFx = env_on("FXDEBUG");
	dbgo.logSprite = env_on("SPRITEDEBUG");
	dbgo.logLag = env_on("LAGDEBUG");
	dbgo.logSkip = env_on("SKIPDEBUG");
	dbgo.logEffects = env_on("EFFECTSDEBUG");
}
void dbg_changed(void) { dbgo.gen++; }

int dbg_describe(char *out, int n) {
	struct { const char *name; int on; } t[] = {
		{ "no-crop", dbgo.noCrop }, { "no-shown-map", dbgo.noShown }, { "hide-unshown", dbgo.hideUnshown },
		{ "fill-hidden", dbgo.fillHide }, { "fill-only-bg", dbgo.fillOnly >= 0 },
		{ "ov-shown", dbgo.ovShown }, { "ov-fill", dbgo.ovFill }, { "ov-chunks", dbgo.ovChunk }, { "ov-crop", dbgo.ovCrop }, { "ov-grid", dbgo.ovGrid },
		{ "log-view", dbgo.logView }, { "log-crop", dbgo.logCrop }, { "log-chunks", dbgo.logChunk }, { "log-fit", dbgo.logFit },
		{ "log-fill", dbgo.logFill }, { "log-fillmap", dbgo.logFillMap }, { "log-owmap", dbgo.logOwMap }, { "log-shown", dbgo.logShown },
		{ "log-fx", dbgo.logFx }, { "log-sprites", dbgo.logSprite }, { "log-lag", dbgo.logLag }, { "log-skip", dbgo.logSkip }, { "log-effects", dbgo.logEffects },
		{ "invincible", cheat_invincible }, { "no-enemies", cheat_no_enemies }, { "infinite-life", dbgo.infLife },
	};
	int k = 0;
	out[0] = 0;
	for (size_t i = 0; i < sizeof t / sizeof t[0] && k < n - 1; i++)
		if (t[i].on) k += snprintf(out + k, n - k, "%s%s", k ? " " : "", t[i].name);
	if (dbgo.fillOnly >= 0 && k < n - 1) k += snprintf(out + k, n - k, " (bg %d)", dbgo.fillOnly);
	return k < n ? k : n - 1;
}

int zero_hp(void) {
	u32 z = zero_addr();
	return z ? *(s16 *)(uintptr_t)(z + ZERO_HP) : -1;
}
void zero_set_hp(int hp) {   /* (routes: as if hurt, to test the life cheat) */
	u32 z = zero_addr();
	if (z) *(s16 *)(uintptr_t)(z + ZERO_HP) = (s16)hp;
}

/* ------------------------------------------------------------ bookmarks */

/* bookmarks.txt next to mmz.ini: one per line, "name<TAB>mmz:..." */
#include "settings.h"
struct Bookmark bookmarks[MAX_BOOKMARKS];
int bookmarkCount;

static const char *bookmarks_path(void) {
	static char p[700];
	snprintf(p, sizeof p, "%s", settings_path());
	char *s = strrchr(p, '/'), *b = strrchr(p, '\\');
	if (b > s) s = b;
	snprintf(s ? s + 1 : p, sizeof p - (s ? s + 1 - p : 0), "bookmarks.txt");
	return p;
}

void bookmarks_load(void) {
	bookmarkCount = 0;
	FILE *f = fopen(bookmarks_path(), "r");
	if (!f) return;
	char line[400];
	while (bookmarkCount < MAX_BOOKMARKS && fgets(line, sizeof line, f)) {
		line[strcspn(line, "\r\n")] = 0;
		char *tab = strchr(line, '\t');
		char *bm = strstr(line, "mmz:");
		if (!bm) continue;
		struct Bookmark *k = &bookmarks[bookmarkCount++];
		if (tab && tab < bm) { *tab = 0; snprintf(k->name, sizeof k->name, "%s", line); }
		else snprintf(k->name, sizeof k->name, "%d", bookmarkCount);
		snprintf(k->text, sizeof k->text, "%s", bm);
	}
	fclose(f);
}

void bookmarks_save(void) {
	FILE *f = fopen(bookmarks_path(), "w");
	if (!f) return;
	for (int i = 0; i < bookmarkCount; i++) fprintf(f, "%s\t%s\n", bookmarks[i].name, bookmarks[i].text);
	fclose(f);
}

const char *bookmark_add_here(void) {
	if (bookmarkCount == MAX_BOOKMARKS) return NULL;
	struct Location l;
	loc_now(&l);
	struct Bookmark *k = &bookmarks[bookmarkCount++];
	extern long frameCount;
	snprintf(k->name, sizeof k->name, "mission %d area %d (frame %ld)", l.mission, l.area, frameCount);
	loc_format(&l, k->text, sizeof k->text);
	bookmarks_save();
	return k->text;
}

void bookmark_remove(int i) {
	if (i < 0 || i >= bookmarkCount) return;
	memmove(&bookmarks[i], &bookmarks[i + 1], (bookmarkCount - i - 1) * sizeof *bookmarks);
	bookmarkCount--;
	bookmarks_save();
}
