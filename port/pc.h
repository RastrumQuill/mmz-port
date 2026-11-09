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
extern u8 ppu_layers[SCREEN_W * SCREEN_H];      /* top | second << 4 (ppu.c) */
void ppu_draw_line(int line);
void ppu_vblank(void);
void ppu_affine_written(u32 o);

/* sprites.c: sprites beyond the GBA screen, for the zoomed-out view */
/* a sprite piece of the wide view (sprites.c): x, y from the GBA screen's
   top-left (its renderer's screen); wx, wy the same in world pixels */
struct ExtSprite { int x, y; u16 a0, a1, a2; int wx, wy; };
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
extern u8 *view_layers;   /* per view pixel: top | second << 4 (view.c) */
void view_fit_apply(int *w, int *h);
void view_record_line(int line);
int view_render(void);
const unsigned char *view_line_regs(int line);   /* the registers GBA line drew with (DISPCNT..BLDY) */
void effects_frame(void);                        /* effects.c: the screen-effects finder, each frame */
const char *effects_line(int i);                 /* its log, newest first (NULL: no more) */
const char *effects_now(void);
void view_gba_origin(int *ox, int *oy);
int view_dump_bg(int bg, u32 **out, int *w, int *h, char *info, unsigned long n);   /* (debug) a parallax layer's whole art */
void view_gba_global(int *x, int *y);   /* the GBA screen's top-left in the world, last frame drawn */
extern int view_level_only, view_native_only, view_gba_pasted;   /* viewcheck (main.c) */   /* where the GBA screen is in view_frame */

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
