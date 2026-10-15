/* Interfaces between the parts of the PC build. */
#ifndef PC_H
#define PC_H
#include "lift.h"

/* hw.c */
extern int hw_line, hw_cycle_scale;
void hw_irq(u16 bit);
void hw_fifo_request(int fifo);
void hw_reset(void);
u16 hw_timer_reload(int timer);

/* ppu.c */
#define SCREEN_W 240
#define SCREEN_H 160
extern u32 ppu_frame[SCREEN_W * SCREEN_H];   /* 0x00RRGGBB */
void ppu_draw_line(int line);
void ppu_vblank(void);
void ppu_affine_written(u32 o);

/* audio.c */
void audio_fifo_write(int fifo, u32 word);
void audio_timer_overflow(int timer);
void audio_io_written(u32 o);
void audio_line(void);
/* stereo s16 samples made since the last call, at audio_rate() Hz */
int audio_take(s16 *out, int maxFrames);
int audio_rate(void);

/* tasks.c */
void tasks_reset(void);

/* main.c */
void frontend_frame(void);   /* called at the start of every V-blank */
u16 frontend_keys(void);     /* KEYINPUT: 0 bits are pressed buttons */

#endif
