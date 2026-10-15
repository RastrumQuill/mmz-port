/* Sprites for the zoomed-out view (view.c).
 *
 * The game draws sprites by queueing draw tasks on a renderer and flushing
 * it (sub_0800338C): every task's callback gets the camera's draw pivot and
 * writes OAM entries for the pieces inside 240x160 (plus a margin), with
 * GBA screen coordinates (8 and 9 bits, so nothing further out can be
 * expressed). For the wider view the flush is run again with the pivot's
 * top-left moved by whole screens, for every screen-sized cell the view
 * overlaps; what those passes write is collected with full coordinates into
 * an extended sprite list and taken back out of the game's OAM buffer, so the
 * game's own sprites are exactly what it made. A piece is kept from the pass
 * whose cell holds its top-left corner, so nothing is listed twice.
 *
 * Only callbacks known to just write OAM are run again (the extra passes must
 * not repeat side effects such as tile uploads).
 *
 * The list is swapped when the game copies its OAM buffer to OAM, so it
 * always matches the sprites on screen.
 */
#include <string.h>
#include "lift.h"
#include "pc.h"

#define OAM_BUF 0x03001BB0u    /* the game's OAM buffer (128 entries) */
#define OAM_PTR 0x03001FB0u    /* its write pointer */

#define MAX_EXT 1024
static struct ExtSprite lists[2][MAX_EXT];
static int counts[2];
static int building;           /* index of the list being made */
/* OAM buffer entries the flush's GBA pass wrote this frame (collected
   already); anything else in the buffer was written by other code */
#define MAX_RANGES 16
static u32 rangeFrom[MAX_RANGES], rangeTo[MAX_RANGES];
static int ranges;

const struct ExtSprite *view_sprites;
int view_sprite_count = -1;    /* -1: none (use OAM) */

/* the port's own reads of game memory: no time passes on the GBA clock */
static inline u16 peek16(u32 a) { return *(const u16 *)(uintptr_t)a; }
static inline u32 peek32(u32 a) { return *(const u32 *)(uintptr_t)a; }

/* draw callbacks that only write OAM entries */
static int pure_callback(u32 fn) {
	switch (fn & ~1u) {
	case 0x08002184:   /* metasprite, by flip: sub_080021A8 / 2280 / 2380 / 2480 */
		return 1;
	}
	return 0;
}


static void add(int x, int y, u32 e) {
	struct ExtSprite *s;
	if (counts[building] >= MAX_EXT) return;
	s = &lists[building][counts[building]++];
	s->x = x;
	s->y = y;
	s->a0 = peek16(e);
	s->a1 = peek16(e + 2);
	s->a2 = peek16(e + 4);
}

/* The entries written since `from`, with positions relative to cell
   (cx, cy). A piece is kept by the cell holding its top-left corner, except
   that the outermost cells (and callbacks only run once) keep everything
   towards the outside. */
static void collect(u32 from, int cx, int cy, int once) {
	u32 to = peek32(OAM_PTR);
	for (u32 e = from; e < to; e += 8) {
		u16 a0 = peek16(e), a1 = peek16(e + 2);
		int y = a0 & 0xFF, x = a1 & 0x1FF;
		if (y >= 160) y -= 256;   /* the callbacks keep y in -64..159, x in -128..239 */
		if (x >= 240) x -= 512;
		if (x < 0 && !once && cx > -view_cells_left) continue;
		if (x >= 240 && !once && cx < view_cells_right) continue;
		if (y < 0 && !once && cy > -view_cells_up) continue;
		if (y >= 160 && !once && cy < view_cells_down) continue;
		add(x + cx * 240, y + cy * 160, e);
	}
}

static void call_task(u32 node, u32 pivot) {
	cpu.r[0] = node;
	cpu.r[1] = pivot;
	cpu.r[14] = LIFT_RETURN_MAGIC;
	lift_tail = 0;
	lift_call(lift_read32(node + 4));
}

/* the GBA pass: every task, as the game does; always listed, so the list is
   ready when the view widens */
static void run_gba_pass(u32 r, u32 pivot) {
	for (int i = 0; i < 4; i++)
		for (u32 node = lift_read32(r + i * 4); node; node = lift_read32(node)) {
			u32 from = peek32(OAM_PTR);
			call_task(node, pivot);
			collect(from, 0, 0, !pure_callback(peek32(node + 4)));
		}
}

/* a pass for another cell: the tasks that can be run again, then taken back
   out of the game's OAM buffer */
static void run_cell_pass(u32 r, u32 pivot, int cx, int cy) {
	u32 from = lift_read32(OAM_PTR);
	for (int i = 0; i < 4; i++)
		for (u32 node = lift_read32(r + i * 4); node; node = lift_read32(node))
			if (pure_callback(lift_read32(node + 4))) call_task(node, pivot);
	collect(from, cx, cy, 0);
	lift_write32(OAM_PTR, from);
}

/* sub_0800338C(renderer): draw every queued task */
void lift_sub_0800338C(void) {
	u32 lr = LIFT_ENTRY_LR();
	u32 r = cpu.r[0];
	u32 r4 = cpu.r[4], r5 = cpu.r[5], r6 = cpu.r[6];
	if (lift_read32(r + 0x10)) {
		u32 sp = cpu.r[13];
		u32 pivot = sp - 16 - 0x18;   /* where the original keeps it */
		cpu.r[13] = pivot;
		cpu.r[0] = pivot;
		cpu.r[1] = lift_read32(r + 0x10);
		cpu.r[2] = lift_read32(r + 0x14);
		cpu.r[14] = LIFT_RETURN_MAGIC;
		lift_tail = 0;
		extern void lift_sub_08001F54(void);
		lift_sub_08001F54();
		int wide = view_cells_left || view_cells_right || view_cells_up || view_cells_down;
		u32 gbaFrom = peek32(OAM_PTR);
		run_gba_pass(r, pivot);
		if (ranges < MAX_RANGES) { rangeFrom[ranges] = gbaFrom; rangeTo[ranges++] = peek32(OAM_PTR); }
		if (wide) {
			s32 left = lift_read32(pivot + 8), top = lift_read32(pivot + 12);
			for (int cy = -view_cells_up; cy <= view_cells_down; cy++)
				for (int cx = -view_cells_left; cx <= view_cells_right; cx++) {
					if (!cx && !cy) continue;
					lift_write32(pivot + 8, left + cx * 240 * 256);
					lift_write32(pivot + 12, top + cy * 160 * 256);
					run_cell_pass(r, pivot, cx, cy);
				}
			lift_write32(pivot + 8, left);
			lift_write32(pivot + 12, top);
		}
		cpu.r[13] = sp;
	}
	cpu.r[4] = r4; cpu.r[5] = r5; cpu.r[6] = r6;
	lift_ret = lr;
}

/* the game copied its OAM buffer to OAM: what was collected is on screen now */
void sprites_commit(void) {
	/* sprites the game put in its buffer without the renderer (some bosses
	   and effects): as they are, relative to the GBA screen */
	u32 end = peek32(OAM_PTR);
	if (end < OAM_BUF || end > OAM_BUF + 128 * 8) end = OAM_BUF + 128 * 8;
	for (u32 e = OAM_BUF; e < end; e += 8) {
		int mine = 0;
		for (int k = 0; k < ranges; k++)
			if (e >= rangeFrom[k] && e < rangeTo[k]) mine = 1;
		if (mine) continue;
		u16 a0 = peek16(e), a1 = peek16(e + 2);
		if (!(a0 & 0x100) && (a0 & 0x200)) continue;   /* hidden */
		int y = a0 & 0xFF, x = a1 & 0x1FF;
		if (y >= 160 + 32) y -= 256;
		if (x >= 240 + 64) x -= 512;
		add(x, y, e);
	}
	ranges = 0;
	view_sprites = lists[building];
	view_sprite_count = counts[building];
	building ^= 1;
	counts[building] = 0;
}
