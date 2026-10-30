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

/* sprites.c: sprites beyond the GBA screen, for the zoomed-out view */
struct ExtSprite { int x, y; u16 a0, a1, a2; };   /* x, y from the GBA screen's top-left */
extern const struct ExtSprite *view_sprites;
extern int view_sprite_count;                     /* -1: not made (OAM is used) */
void sprites_commit(void);

/* view.c: the zoomed-out view */
extern int view_cells_left, view_cells_right, view_cells_up, view_cells_down;
extern int view_gameplay;
extern int hw_cpu_speed;
extern int view_ext_left, view_ext_right, view_ext_up, view_ext_down;
extern int view_w, view_h, view_active, view_hud_edges;
extern u32 *view_frame;
void view_fit_apply(int *w, int *h);
void view_record_line(int line);
int view_render(void);

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
