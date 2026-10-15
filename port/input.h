/* Input (input.c): keyboard and every connected controller, as the GBA's
   buttons, and the controller hotkeys. */
#ifndef INPUT_H
#define INPUT_H
#include <SDL.h>
#include "settings.h"

#ifdef __cplusplus
extern "C" {
#endif

void input_hints(void);                  /* before SDL_Init */
void input_init(void);                   /* after: loads gamecontrollerdb.txt */
void input_event(const SDL_Event *e);    /* controllers connected / removed */
void input_poll(void);                   /* once per event loop: hotkeys */
Uint16 input_buttons(void);              /* KEYINPUT bits held (1 = pressed) */
extern int input_fast;                   /* the fast-forward hotkey is held */

/* changing a binding: the next controller input, as a binding (joy: for a
   joystick without an SDL mapping) */
void input_capture_begin(void);
int input_capture(const SDL_Event *e, struct Bind *b, int *joy);

int input_devices(void);
const char *input_device_name(int i, int *recognised);
int input_have_joysticks(void);          /* any without an SDL mapping */

#ifdef __cplusplus
}
#endif
#endif
