#ifndef SETTINGS_H
#define SETTINGS_H
#include <SDL.h>

/* a controller input: a button, an axis direction (sticks, triggers), or on
   joysticks SDL has no mapping for, a raw button, hat direction or axis */
enum { BIND_NONE, BIND_BUTTON, BIND_AXIS, BIND_JBUTTON, BIND_JHAT, BIND_JAXIS };
struct Bind {
	unsigned char type, index;
	signed char dir;         /* axis: +1 / -1; hat: SDL_HAT_* bit */
};
/* bindings: the 10 GBA buttons (KEYINPUT order), then the controller hotkeys */
enum { BIND_MENU = 10, BIND_FAST, BINDS };

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
	int hudEdges;
	int cpuSpeed;            /* percent of the GBA's CPU per frame (100: its slowdown as it was) */            /* the HUD at the view's edges (else over the GBA area) */
	SDL_Scancode keys[10];   /* per GBA button, KEYINPUT order */
	struct Bind pad[BINDS];  /* recognised controllers: GBA buttons, then hotkeys */
	struct Bind joy[BINDS];  /* other joysticks (no SDL mapping) */
	int stickMoves;          /* the left stick (first axes) works as the D-pad */
	int deadzone;            /* percent of a stick's travel */
};
extern struct Settings settings;

/* how much of the world is shown */
enum { VIEW_GBA, VIEW_X2, VIEW_X3, VIEW_X4, VIEW_MMX, VIEW_CUSTOM, VIEW_WINDOW, VIEW_MODES };
extern const char *const kViewNames[VIEW_MODES];   /* for mmz.ini */
/* the view size for a mode (window size for VIEW_WINDOW) */
void settings_view_size(int winW, int winH, int *w, int *h);
extern const char *const kButtonNames[BINDS];
/* a binding in mmz.ini: controller names ("a", "dpup", "lefttrigger",
   "leftx+") or, for joysticks, "b3", "h0up", "a1-" */
struct Bind bind_parse(const char *s, int joy);
const char *bind_format(struct Bind b, char *buf, int size);

void settings_defaults(void);           /* everything but the ROM and save paths */
void settings_load(const char *file);   /* NULL: mmz.ini next to the executable */
void settings_save(void);
const char *settings_path(void);
#endif
