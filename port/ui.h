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
};
extern struct DebugState debug;

void ui_init(SDL_Window *window, SDL_Renderer *renderer);
/* an event for the menus; 1 if they took it (the game does not see it) */
int ui_event(const SDL_Event *e);
/* draws the game picture and the menus, and presents */
void ui_present(SDL_Texture *game);
/* 1 while the game should wait (the settings are open) */
int ui_pauses_game(void);
/* 1 while a menu has the keyboard or a binding is being changed */
int ui_wants_input(void);
/* once a frame, from the game: freezes, mission override, statistics */
void ui_game_frame(long frame);
/* testing: open the menus at set frames, save pictures in DIR, quit */
void ui_test(const char *dir);

#ifdef __cplusplus
}
#endif
#endif
