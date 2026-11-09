/* The in-game menus (ui.cpp, Dear ImGui): settings (F1) and debug tools (F2). */
#ifndef UI_H
#define UI_H
#include <SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

/* what the debug tools ask of the game loop */
struct DebugState {
	int paused;          /* the game waits at the next frame */
	int step;            /* frames to run while paused */
	int fastForward;     /* run without waiting, show every few frames */
	int layerMask;       /* bits: BG0-BG3, OBJ (ppu.c) */
	long pauseAt;        /* pause when this frame is reached (0: no) */
	int overlay;         /* frame, position and bookmark drawn over the game */
};
extern struct DebugState debug;

/* debug options (Debug window, F2): each starts from its environment
   variable (headless runs and routes set them that way) and can be changed
   live; dbg_changed() makes the view work its maps out again */
struct DbgOpts {
	/* wide view */
	int noCrop;        /* MMZ_NOCROP: no cropping where the camera never goes */
	int noShown;       /* MMZ_NOSHOWN: no shown map (everything counts as shown) */
	int hideUnshown;   /* MMZ_HIDEUNSHOWN: level art drawn only where shown */
	int fillHide;      /* MMZ_FILLHIDE: the gap fill worked out but not drawn */
	int fillOnly;      /* MMZ_FILLONLY=bg: only that BG's fill (-1 all) */
	/* overlays (drawn by the menu over the game) */
	int ovShown, ovFill, ovChunk, ovCrop, ovGrid;
	/* stderr logs */
	int logView, logCrop, logChunk, logFit, logFill, logFillMap, logOwMap, logShown, logFx, logSprite, logLag, logSkip, logEffects;
	/* cheats */
	int infLife;
	int gen;           /* bumped by dbg_changed() */
};
extern struct DbgOpts dbgo;
void dbg_init_env(void);
void dbg_changed(void);
int dbg_describe(char *out, int n);   /* the options that are on, one line ("" none) */
/* view.c, for the overlays and the teleport */
int view_cell(int gx, int gy);         /* bits: 1 shown, 2 kept, 4 solid, 8 reached; -1 not known */
int view_chunk_src(int cx, int cy);    /* chunk_source(): -1 none, 0 video memory, 1+ a copy */
int view_crop_rect(float *l, float *t, float *r, float *b);   /* 1 when cropping */

void ui_init(SDL_Window *window, SDL_Renderer *renderer);
/* an event for the menus; 1 if they took it (the game does not see it) */
int ui_event(const SDL_Event *e);
/* draws the game picture and the menus, and presents */
void ui_present(SDL_Texture *game);
/* 1 while the game should wait (the settings are open) */
int ui_pauses_game(void);
/* 1 while a menu has the keyboard or a binding is being changed */
int ui_wants_input(void);
/* 1 while a binding waits for its new key or controller input */
int ui_rebinding(void);
/* opens or closes the settings (controller hotkey) */
void ui_toggle_settings(void);
void ui_quick_report(void);   /* the quick report button: a report with no note, no window */
/* once a frame, from the game: freezes, mission override, statistics */
void ui_game_frame(long frame);
/* testing: open the menus at set frames, save pictures in DIR, quit */
void ui_test(const char *dir);

#ifdef __cplusplus
}
#endif
#endif
