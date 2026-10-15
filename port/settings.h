#ifndef SETTINGS_H
#define SETTINGS_H
#include <SDL.h>

struct Settings {
	char rom[512];
	char save[512];          /* empty: next to the ROM, as .sav */
	int scale;
	int fullscreen;
	int volume;              /* percent */
	SDL_Scancode keys[10];   /* per GBA button, KEYINPUT order */
	SDL_GameControllerButton pad[10];
};
extern struct Settings settings;
extern const char *const kButtonNames[10];

void settings_load(const char *file);   /* NULL: mmz.ini next to the executable */
void settings_save(void);
const char *settings_path(void);
#endif
