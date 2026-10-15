/* Input: keyboard and controllers, as the GBA's 10 buttons.
 *
 * Every connected controller works, and they can come and go while the game
 * runs. Controllers SDL recognises (Xbox, PlayStation, Switch and most others,
 * with the community database gamecontrollerdb.txt next to the executable)
 * use the pad_* bindings, by button position: "a" is the bottom face button
 * on every controller, whatever its label. Joysticks SDL has no mapping for
 * use the joy_* bindings (raw buttons, hats and axes).
 *
 * Hotkeys on a controller: the menu binding (Guide by default) or Back and
 * Start together opens and closes the settings; the fast-forward binding
 * (right trigger) fast-forwards while held.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include "settings.h"
#include "input.h"
#include "ui.h"

#define MAX_DEV 8
static struct Dev {
	SDL_JoystickID id;
	SDL_GameController *gc;   /* recognised controller */
	SDL_Joystick *js;         /* its joystick, or a joystick SDL has no mapping for */
	Sint16 rest[16];          /* axis positions when a binding started (capture) */
} devs[MAX_DEV];
static int devCount;

static int menuHeld, fastHeld;
int input_fast;

void input_hints(void) {
	/* buttons by position: Nintendo controllers' A (east) is "b" like Xbox's B */
	SDL_SetHint(SDL_HINT_GAMECONTROLLER_USE_BUTTON_LABELS, "0");
}

void input_init(void) {
	char path[600];
	char *base = SDL_GetBasePath();
	snprintf(path, sizeof path, "%sgamecontrollerdb.txt", base ? base : "");
	SDL_free(base);
	SDL_GameControllerAddMappingsFromFile(path);   /* optional */
}

static struct Dev *find(SDL_JoystickID id) {
	for (int i = 0; i < devCount; i++)
		if (devs[i].id == id) return &devs[i];
	return NULL;
}

static void add(int index, int controller) {
	SDL_JoystickID id = SDL_JoystickGetDeviceInstanceID(index);
	if (find(id) || devCount == MAX_DEV) return;
	struct Dev *d = &devs[devCount];
	memset(d, 0, sizeof *d);
	if (controller) {
		d->gc = SDL_GameControllerOpen(index);
		if (!d->gc) return;
		d->js = SDL_GameControllerGetJoystick(d->gc);
	} else {
		d->js = SDL_JoystickOpen(index);
		if (!d->js) return;
	}
	d->id = SDL_JoystickInstanceID(d->js);
	devCount++;
}

static void drop(SDL_JoystickID id) {
	struct Dev *d = find(id);
	if (!d) return;
	if (d->gc) SDL_GameControllerClose(d->gc);
	else SDL_JoystickClose(d->js);
	*d = devs[--devCount];
}

void input_event(const SDL_Event *e) {
	switch (e->type) {
	case SDL_CONTROLLERDEVICEADDED: add(e->cdevice.which, 1); break;
	case SDL_JOYDEVICEADDED:
		if (!SDL_IsGameController(e->jdevice.which)) add(e->jdevice.which, 0);
		break;
	case SDL_CONTROLLERDEVICEREMOVED: drop(e->cdevice.which); break;
	case SDL_JOYDEVICEREMOVED: drop(e->jdevice.which); break;
	}
}

static int threshold(void) {
	int dz = settings.deadzone < 5 ? 5 : settings.deadzone > 95 ? 95 : settings.deadzone;
	return 32767 * dz / 100;
}

static int active(const struct Dev *d, struct Bind b, int thr) {
	int v;
	if (d->gc) {
		switch (b.type) {
		case BIND_BUTTON: return SDL_GameControllerGetButton(d->gc, (SDL_GameControllerButton)b.index);
		case BIND_AXIS:
			v = SDL_GameControllerGetAxis(d->gc, (SDL_GameControllerAxis)b.index);
			return b.dir > 0 ? v > thr : v < -thr;
		}
		return 0;
	}
	switch (b.type) {
	case BIND_JBUTTON: return SDL_JoystickGetButton(d->js, b.index);
	case BIND_JHAT: return (SDL_JoystickGetHat(d->js, b.index) & b.dir) != 0;
	case BIND_JAXIS:
		v = SDL_JoystickGetAxis(d->js, b.index);
		return b.dir > 0 ? v > thr : v < -thr;
	}
	return 0;
}

static int held(int bind, int thr) {
	for (int i = 0; i < devCount; i++)
		if (active(&devs[i], devs[i].gc ? settings.pad[bind] : settings.joy[bind], thr)) return 1;
	return 0;
}

/* the left stick (a joystick's first two axes) as the D-pad */
static Uint16 stick(const struct Dev *d, int thr) {
	int x, y;
	Uint16 m = 0;
	if (d->gc) {
		x = SDL_GameControllerGetAxis(d->gc, SDL_CONTROLLER_AXIS_LEFTX);
		y = SDL_GameControllerGetAxis(d->gc, SDL_CONTROLLER_AXIS_LEFTY);
	} else if (SDL_JoystickNumAxes(d->js) >= 2) {
		x = SDL_JoystickGetAxis(d->js, 0);
		y = SDL_JoystickGetAxis(d->js, 1);
	} else {
		return 0;
	}
	if (x > thr) m |= 1 << 4;
	if (x < -thr) m |= 1 << 5;
	if (y < -thr) m |= 1 << 6;
	if (y > thr) m |= 1 << 7;
	return m;
}

void input_poll(void) {
	int thr = threshold();
	int menu = held(BIND_MENU, thr), fast = held(BIND_FAST, thr);
	for (int i = 0; i < devCount; i++)
		if (devs[i].gc && SDL_GameControllerGetButton(devs[i].gc, SDL_CONTROLLER_BUTTON_BACK) &&
		    SDL_GameControllerGetButton(devs[i].gc, SDL_CONTROLLER_BUTTON_START))
			menu = 1;
	if (!ui_rebinding()) {
		if (menu && !menuHeld) ui_toggle_settings();
		if (fast != fastHeld) input_fast = fast;
	}
	menuHeld = menu;
	fastHeld = fast;
}

Uint16 input_buttons(void) {
	const Uint8 *k = SDL_GetKeyboardState(NULL);
	int thr = threshold();
	Uint16 m = 0;
	for (int i = 0; i < 10; i++) {
		if (k[settings.keys[i]]) m |= 1 << i;
		if (held(i, thr)) m |= 1 << i;
	}
	if (settings.stickMoves)
		for (int i = 0; i < devCount; i++) m |= stick(&devs[i], thr);
	/* Back + Start opens the settings: the game does not see them */
	if (menuHeld) m &= ~(1 << 2 | 1 << 3);
	return m;
}

/* ---------------------------------------------------------- rebinding */

void input_capture_begin(void) {
	for (int i = 0; i < devCount; i++) {
		int n = SDL_JoystickNumAxes(devs[i].js);
		for (int a = 0; a < n && a < 16; a++) devs[i].rest[a] = SDL_JoystickGetAxis(devs[i].js, a);
	}
}

int input_capture(const SDL_Event *e, struct Bind *b, int *joy) {
	struct Dev *d;
	switch (e->type) {
	case SDL_CONTROLLERBUTTONDOWN:
		b->type = BIND_BUTTON; b->index = e->cbutton.button; b->dir = 0;
		*joy = 0;
		return 1;
	case SDL_CONTROLLERAXISMOTION:
		if (abs(e->caxis.value) < 24000) return 0;
		b->type = BIND_AXIS; b->index = e->caxis.axis;
		b->dir = e->caxis.axis >= SDL_CONTROLLER_AXIS_TRIGGERLEFT || e->caxis.value > 0 ? 1 : -1;
		*joy = 0;
		return 1;
	}
	/* raw events: only from joysticks SDL has no mapping for (controllers
	   send both kinds) */
	switch (e->type) {
	case SDL_JOYBUTTONDOWN:
		d = find(e->jbutton.which);
		if (!d || d->gc) return 0;
		b->type = BIND_JBUTTON; b->index = e->jbutton.button; b->dir = 0;
		break;
	case SDL_JOYHATMOTION: {
		static const int bits[4] = { SDL_HAT_UP, SDL_HAT_RIGHT, SDL_HAT_DOWN, SDL_HAT_LEFT };
		d = find(e->jhat.which);
		if (!d || d->gc) return 0;
		int bit = 0;
		for (int i = 0; i < 4; i++)
			if (e->jhat.value == bits[i]) bit = bits[i];
		if (!bit) return 0;
		b->type = BIND_JHAT; b->index = e->jhat.hat; b->dir = bit;
		break;
	}
	case SDL_JOYAXISMOTION: {
		d = find(e->jaxis.which);
		if (!d || d->gc || e->jaxis.axis >= 16) return 0;
		int moved = e->jaxis.value - d->rest[e->jaxis.axis];
		if (abs(moved) < 24000) return 0;
		b->type = BIND_JAXIS; b->index = e->jaxis.axis; b->dir = moved > 0 ? 1 : -1;
		break;
	}
	default:
		return 0;
	}
	*joy = 1;
	return 1;
}

/* ------------------------------------------------------------ listing */

int input_devices(void) { return devCount; }

const char *input_device_name(int i, int *recognised) {
	*recognised = devs[i].gc != NULL;
	const char *n = devs[i].gc ? SDL_GameControllerName(devs[i].gc) : SDL_JoystickName(devs[i].js);
	return n ? n : "(unnamed)";
}

int input_have_joysticks(void) {
	for (int i = 0; i < devCount; i++)
		if (!devs[i].gc) return 1;
	return 0;
}
