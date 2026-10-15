/* The GBA hardware around the game code, for the PC build: the scanline
 * clock, interrupts, timed DMA, timers and the sound FIFOs.
 *
 * There is no CPU emulation, so time is counted in memory reads: every
 * READS_PER_LINE reads by the game the display moves on one scanline (drawn
 * by ppu.c), with the H-blank, V-count and V-blank events of real hardware.
 * The game's busy-wait loops read memory, so they wait as they would on a
 * GBA. Interrupt handlers run between two reads, from the current state.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lift.h"
#include "pc.h"

#define io ((u8 *)0x04000000)
#define IO16(o) (*(u16 *)(io + (o)))
#define IO32(o) (*(u32 *)(io + (o)))

int hw_reads_per_line = 220;
int hw_line;           /* VCOUNT */
static int readCount;
static int busy;       /* no time passes inside interrupt handlers and drawing */

/* ------------------------------------------------------------------ DMA */

struct Dma { u32 src, dst, count; u16 cnt; int active; };
static struct Dma dma[4];

static void dma_run(int ch) {
	struct Dma *d = &dma[ch];
	u16 cnt = d->cnt;
	int word = cnt & 0x400, w = word ? 4 : 2;
	int dctl = (cnt >> 5) & 3, sctl = (cnt >> 7) & 3;
	u32 n = IO16(0xB8 + ch * 12);
	if (n == 0) n = ch == 3 ? 0x10000 : 0x4000;
	u32 dst = d->dst;
	for (u32 i = 0; i < n; i++) {
		if (word) lift_write32(dst, lift_read32(d->src));
		else lift_write16(dst, lift_read16(d->src));
		if (sctl == 0) d->src += w; else if (sctl == 1) d->src -= w;
		if (dctl == 0 || dctl == 3) dst += w; else if (dctl == 1) dst -= w;
	}
	if (dctl != 3) d->dst = dst;
	else d->dst = IO32(0xB4 + ch * 12);   /* increment and reload */
	if (!(cnt & 0x200)) {                 /* not repeating: done */
		d->active = 0;
		IO16(0xBA + ch * 12) &= 0x7FFF;
	}
	if (cnt & 0x4000) hw_irq(1 << (8 + ch));
}

/* Sound DMA (channels 1 and 2, start timing 3): 4 words to the FIFO */
static void dma_fifo(int ch) {
	struct Dma *d = &dma[ch];
	for (int i = 0; i < 4; i++) {
		u32 v = lift_read32(d->src & ~3u);
		d->src += 4;
		audio_fifo_write(d->dst == 0x040000A4 ? 1 : 0, v);
	}
}

static void dma_timed(int timing) {
	for (int ch = 0; ch < 4; ch++)
		if (dma[ch].active && ((dma[ch].cnt >> 12) & 3) == timing && !(timing == 3 && (ch == 1 || ch == 2)))
			dma_run(ch);
}

void hw_fifo_request(int fifo) {
	for (int ch = 1; ch <= 2; ch++)
		if (dma[ch].active && ((dma[ch].cnt >> 12) & 3) == 3 && dma[ch].dst == (fifo ? 0x040000A4u : 0x040000A0u))
			dma_fifo(ch);
}

/* ---------------------------------------------------------------- timers */

struct Timer { u16 reload, counter; u16 ctl; int sub; };
static struct Timer timers[4];

u16 hw_timer_reload(int i) { return timers[i].reload; }

static void timer_overflow(int i);
static void timer_add(int i, int ticks) {
	struct Timer *t = &timers[i];
	while (ticks > 0) {
		int left = 0x10000 - t->counter;
		if (ticks < left) { t->counter += ticks; return; }
		ticks -= left;
		t->counter = t->reload;
		timer_overflow(i);
	}
}
static void timer_overflow(int i) {
	if (timers[i].ctl & 0x40) hw_irq(1 << (3 + i));
	audio_timer_overflow(i);
	if (i < 3 && (timers[i + 1].ctl & 0x84) == 0x84) timer_add(i + 1, 1);   /* count-up */
}
static void timers_run(int cycles) {
	static const int shift[4] = { 0, 6, 8, 10 };
	for (int i = 0; i < 4; i++) {
		struct Timer *t = &timers[i];
		if (!(t->ctl & 0x80) || (t->ctl & 4)) continue;
		int s = shift[t->ctl & 3];
		t->sub += cycles;
		int ticks = t->sub >> s;
		t->sub -= ticks << s;
		timer_add(i, ticks);
	}
}

/* ------------------------------------------------------------ interrupts */

/* The game's dispatcher (copied from ROM 0x080001BC to 0x030003B8): the
 * first pending interrupt in this order, a handler from the table at
 * 0x03000380. */
static const struct { u16 bit; u8 slot; } sIrqOrder[] = {
	{ 0x0001, 0 }, { 0x0002, 1 }, { 0x0004, 2 }, { 0x0008, 3 }, { 0x0010, 4 }, { 0x0020, 5 },
	{ 0x0040, 6 }, { 0x0080, 7 }, { 0x0200, 10 }, { 0x0400, 11 }, { 0x0100, 9 }, { 0x0800, 12 },
	{ 0x1000, 13 },
};

static void irq_dispatch(void) {
	if (busy || !(IO16(0x208) & 1)) return;
	u16 pending = IO16(0x200) & IO16(0x202);
	if (!pending) return;
	u32 handler = 0;
	u16 bit = 0;
	for (unsigned k = 0; k < sizeof sIrqOrder / sizeof sIrqOrder[0]; k++)
		if (pending & sIrqOrder[k].bit) {
			bit = sIrqOrder[k].bit;
			handler = lift_read32(0x03000380 + sIrqOrder[k].slot * 4);
			break;
		}
	if (!bit) return;
	busy = 1;
	IO16(0x202) &= ~bit;
	u16 ie = IO16(0x200);
	IO16(0x200) = 0x29CE & ie;   /* (the dispatcher writes 0x29CE; nesting is not modelled) */
	struct Cpu saved = cpu;
	u32 savedPc = lift_pc, savedTailLr = lift_tail_lr, savedTailLr2 = lift_tail_lr2, savedRet = lift_ret;
	int savedTail = lift_tail;
	/* the handler runs in system mode on the interrupted code's stack */
	cpu.r[13] = (cpu.r[13] - 4) & ~3u;
	cpu.r[14] = 0x030004AC;
	lift_tail = 0;
	if (handler) lift_call(handler);
	cpu = saved;
	lift_pc = savedPc; lift_tail_lr = savedTailLr; lift_tail_lr2 = savedTailLr2; lift_ret = savedRet;
	lift_tail = savedTail;
	IO16(0x200) = ie;
	busy = 0;
}

void hw_irq(u16 bit) {
	IO16(0x202) |= bit;
	irq_dispatch();
}

/* ------------------------------------------------------------ the clock */

static void next_line(void) {
	u16 stat = IO16(0x004);
	int line = hw_line;
	busy = 1;
	if (line < 160) ppu_draw_line(line);
	busy = 0;
	/* H-blank */
	IO16(0x004) = stat | 2;
	if (line < 160) dma_timed(2);
	if (stat & 0x10) hw_irq(2);
	timers_run(1232);
	/* next line */
	line = line + 1 == 228 ? 0 : line + 1;
	hw_line = line;
	stat = IO16(0x004) & ~2;
	if (line == 160) {
		stat |= 1;
		IO16(0x004) = stat;
		busy = 1;
		ppu_vblank();
		frontend_frame();
		busy = 0;
		dma_timed(1);
		if (stat & 8) hw_irq(1);
	} else if (line == 227) {
		stat &= ~1;
	}
	if (line == (stat >> 8)) {
		stat |= 4;
		IO16(0x004) = stat;
		if (stat & 0x20) hw_irq(4);
	} else {
		stat &= ~4;
	}
	IO16(0x004) = (IO16(0x004) & 0xFF00) | (stat & 0xFF);
	IO16(0x006) = line;
	audio_line();
}

void rt_tick(void) {
	if (busy) return;
	if (++readCount >= hw_reads_per_line) {
		readCount = 0;
		next_line();
	}
}

void rt_io_read(u32 o) {
	switch (o) {
	case 0x006: IO16(0x006) = hw_line; break;
	case 0x130: IO16(0x130) = frontend_keys(); break;
	case 0x100: case 0x104: case 0x108: case 0x10C: IO16(o) = timers[(o - 0x100) / 4].counter; break;
	}
}

void rt_io_write(u32 o, u32 old) {
	if (o >= 0x100 && o < 0x110) {
		int i = (o - 0x100) / 4;
		u16 v = IO16(o);
		if (o & 2) {
			if ((v & 0x80) && !(timers[i].ctl & 0x80)) { timers[i].counter = timers[i].reload; timers[i].sub = 0; }
			timers[i].ctl = v;
		} else {
			timers[i].reload = v;
			IO16(o) = timers[i].counter;  /* reads give the counter */
		}
		return;
	}
	if (o >= 0xBA && o < 0xE0 && (o - 0xBA) % 12 == 0) {
		int ch = (o - 0xBA) / 12;
		u16 cnt = IO16(o);
		dma[ch].cnt = cnt;
		if ((cnt & 0x8000) && !(old & 0x8000)) {
			dma[ch].src = IO32(0xB0 + ch * 12);
			dma[ch].dst = IO32(0xB4 + ch * 12);
			dma[ch].active = ((cnt >> 12) & 3) != 0;   /* immediate ones already ran */
		} else if (!(cnt & 0x8000)) {
			dma[ch].active = 0;
		}
		return;
	}
	if ((o >= 0x28 && o < 0x30) || (o >= 0x38 && o < 0x40)) ppu_affine_written(o);
	if (o >= 0x60 && o < 0xA8) audio_io_written(o);
	if (o == 0x208 || o == 0x200) irq_dispatch();
}

void hw_reset(void) {
	memset(dma, 0, sizeof dma);
	memset(timers, 0, sizeof timers);
	hw_line = 0;
	readCount = 0;
	busy = 0;
}
