#ifndef SETTINGS_H
#define SETTINGS_H
#include <SDL.h>

struct Settings {
	char rom[512];
	char save[512];          /* empty: next to the ROM, as .sav */
	int scale;
	int fullscreen;
	int volume;              /* percent */
	int mute;
	int integerScale;        /* only whole multiples of 240x160 */
	int smooth;              /* linear filtering instead of sharp pixels */
	int viewMode;            /* VIEW_* */
	int viewW, viewH;        /* VIEW_CUSTOM */
	int viewHeight;          /* VIEW_WINDOW: world pixels from top to bottom */
	int hudEdges;            /* the HUD at the view's edges (else over the GBA area) */
	SDL_Scancode keys[10];   /* per GBA button, KEYINPUT order */
	SDL_GameControllerButton pad[10];
};
extern struct Settings settings;

/* how much of the world is shown */
enum { VIEW_GBA, VIEW_X2, VIEW_X3, VIEW_X4, VIEW_MMX, VIEW_CUSTOM, VIEW_WINDOW, VIEW_MODES };
extern const char *const kViewNames[VIEW_MODES];   /* for mmz.ini */
/* the view size for a mode (window size for VIEW_WINDOW) */
void settings_view_size(int winW, int winH, int *w, int *h);
extern const char *const kButtonNames[10];

void settings_defaults(void);           /* everything but the ROM and save paths */
void settings_load(const char *file);   /* NULL: mmz.ini next to the executable */
void settings_save(void);
const char *settings_path(void);
#endif
