/* Sound for the PC build: the two Direct Sound FIFOs the game's mixer
 * (m4a) feeds by DMA. A sample is taken from each FIFO when its timer
 * overflows, as on the GBA, and the mix is kept for the frontend at the
 * rate of the timer that drives FIFO A. The PSG channels are not made yet.
 */
#include <string.h>
#include "lift.h"
#include "pc.h"

#define io ((u8 *)0x04000000)
#define IO16(o) (*(u16 *)(io + (o)))

struct Fifo { s8 data[32]; int r, n; s8 sample; };
static struct Fifo fifos[2];

#define OUT_FRAMES 16384
static s16 out[OUT_FRAMES * 2];
static int outW, outR;

static void fifo_push(struct Fifo *f, u8 b) {
	if (f->n >= 32) return;
	f->data[(f->r + f->n) & 31] = (s8)b;
	f->n++;
}

void audio_fifo_write(int fifo, u32 word) {
	for (int i = 0; i < 4; i++) fifo_push(&fifos[fifo], word >> (i * 8));
}

static void emit(void) {
	u16 cnt = IO16(0x082);
	if (!(IO16(0x084) & 0x80)) cnt = 0;
	int a = fifos[0].sample * ((cnt & 4) ? 4 : 2);   /* 100% or 50% */
	int b = fifos[1].sample * ((cnt & 8) ? 4 : 2);
	int l = 0, r = 0;
	if (cnt & 0x0200) l += a;
	if (cnt & 0x0100) r += a;
	if (cnt & 0x2000) l += b;
	if (cnt & 0x1000) r += b;
	if (((outW + 1) % OUT_FRAMES) == outR) return;   /* full: drop */
	out[outW * 2] = l * 64;
	out[outW * 2 + 1] = r * 64;
	outW = (outW + 1) % OUT_FRAMES;
}

void audio_timer_overflow(int timer) {
	u16 cnt = IO16(0x082);
	for (int k = 0; k < 2; k++) {
		int t = (cnt >> (10 + k * 4)) & 1;
		if (t != timer) continue;
		struct Fifo *f = &fifos[k];
		if (f->n) { f->sample = f->data[f->r]; f->r = (f->r + 1) & 31; f->n--; }
		if (f->n <= 16) hw_fifo_request(k);
		if (k == 0) emit();
	}
}

void audio_io_written(u32 o) {
	if (o == 0x082) {
		u16 cnt = IO16(0x082);
		if (cnt & 0x0800) { fifos[0].n = 0; fifos[0].r = 0; }
		if (cnt & 0x8000) { fifos[1].n = 0; fifos[1].r = 0; }
		IO16(0x082) = cnt & 0x77FF;   /* the reset bits read back as 0 */
	} else if (o >= 0xA0 && o < 0xA8) {
		u16 v = IO16(o);
		struct Fifo *f = &fifos[o >= 0xA4];
		fifo_push(f, v);
		fifo_push(f, v >> 8);
	}
}

void audio_line(void) {}

int audio_rate(void) {
	int t = (IO16(0x082) >> 10) & 1;
	u16 reload = hw_timer_reload(t);
	return reload ? 16777216 / (0x10000 - reload) : 0;
}

int audio_take(s16 *dst, int maxFrames) {
	int n = 0;
	while (outR != outW && n < maxFrames) {
		dst[n * 2] = out[outR * 2];
		dst[n * 2 + 1] = out[outR * 2 + 1];
		outR = (outR + 1) % OUT_FRAMES;
		n++;
	}
	return n;
}
