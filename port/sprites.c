#include <stdio.h>
#include <stdlib.h>
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

const struct ExtSprite *view_sprites;
int view_sprite_count = -1;    /* -1: none (use OAM) */

/* the port's own reads of game memory: no time passes on the GBA clock */
static inline u16 peek16(u32 a) { return *(const u16 *)(uintptr_t)a; }
static inline u32 peek32(u32 a) { return *(const u32 *)(uintptr_t)a; }

/* Draw callbacks that are not sprites (src/ in the decomp says what they do):
   they are not run again for the other cells. Every other callback is: the
   game's RAM is put back after each extra pass, so whatever else it does
   (graphics queued, counters, state) is undone and only its OAM entries are
   kept. */
static int pure_callback(u32 fn) {
	switch (fn & ~1u) {
	case 0x080070DC:   /* Stage_Draw: the stage layers */
	case 0x0808C3AC:   /* kind 5 window effect: H-blank DMA to the window registers */
		return 0;
	}
	return 1;
}

#define EWRAM_SIZE 0x40000
#define IWRAM_SIZE 0x8000
static u8 *ramSave;

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
			if (getenv("SPRITEDEBUG")) {   /* testing: each draw callback the game uses, once */
				static u32 seen[256]; static int ns;
				u32 fn = peek32(node + 4); int k;
				for (k = 0; k < ns && seen[k] != fn; k++) ;
				if (k == ns && ns < 256) { seen[ns++] = fn; extern long frameCount; fprintf(stderr, "sprite callback %08X (frame %ld)\n", fn, frameCount); }
			}
			call_task(node, pivot);
			collect(from, 0, 0, !pure_callback(peek32(node + 4)));
		}
}

/* a pass for another cell: the tasks that can be run again, then taken back
   out of the game's OAM buffer */
static void run_cell_pass(u32 r, u32 pivot, int cx, int cy) {
	u32 from = lift_read32(OAM_PTR);
	u32 sp = cpu.r[13];
	for (int i = 0; i < 4; i++)
		for (u32 node = lift_read32(r + i * 4); node; node = lift_read32(node))
			if (pure_callback(lift_read32(node + 4))) call_task(node, pivot);
	collect(from, cx, cy, 0);
	/* the game's RAM as it was before the pass (the stack below sp too: the
	   pivot lives there) */
	memcpy((void *)(uintptr_t)0x02000000, ramSave, EWRAM_SIZE);
	memcpy((void *)(uintptr_t)0x03000000, ramSave + EWRAM_SIZE, IWRAM_SIZE);
	cpu.r[13] = sp;
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
		run_gba_pass(r, pivot);
		if (wide) {
			s32 left = lift_read32(pivot + 8), top = lift_read32(pivot + 12);
			if (!ramSave) ramSave = malloc(EWRAM_SIZE + IWRAM_SIZE);
			memcpy(ramSave, (void *)(uintptr_t)0x02000000, EWRAM_SIZE);
			memcpy(ramSave + EWRAM_SIZE, (void *)(uintptr_t)0x03000000, IWRAM_SIZE);
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
long sprite_commits;   /* frames the game finished (testing: LAGDEBUG) */
void sprites_commit(void) {
	sprite_commits++;
	view_sprites = lists[building];
	view_sprite_count = counts[building];
	building ^= 1;
	counts[building] = 0;
}
