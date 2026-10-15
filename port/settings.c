/* Settings: mmz.ini next to the executable (or --config FILE). Written with
 * the defaults on the first start, so it can be edited by hand:
 *
 *   rom = baserom.gba
 *   scale = 3
 *   fullscreen = 0
 *   volume = 100
 *   mute = 0
 *   integer_scale = 1         only whole multiples of the GBA picture
 *   smooth = 0                linear filtering
 *   cpu_speed = 400           CPU per frame, percent of the GBA's (100: slows
 *                             down where the GBA did)
 *   view = gba                how much of the world: gba, x2, x3, x4, mmx
 *                             (Mega Man X, 256x224), custom (view_width x
 *                             view_height), window (the window's shape,
 *                             view_window_height world pixels high)
 *   key_a = X                 keyboard keys, by SDL name ("Left Shift", "Z")
 *   pad_a = b                 controller buttons by SDL name (a, b, x, y,
 *                             leftshoulder, rightshoulder, start, back, guide,
 *                             dpup...), or axes: lefttrigger, righttrigger,
 *                             leftx+, lefty-... (positions, not labels: "a" is
 *                             the bottom face button on every controller)
 *   pad_menu, pad_fastforward controller hotkeys (settings, fast-forward)
 *   joy_a = b1                joysticks SDL has no mapping for: button b<n>,
 *                             hat h<n>up/down/left/right, axis a<n>+ / a<n>-
 *   stick_moves = 1           the left stick works as the D-pad
 *   stick_deadzone = 40       percent
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include "settings.h"

struct Settings settings;

/* GBA buttons in KEYINPUT bit order */
const char *const kButtonNames[BINDS] = { "a", "b", "select", "start", "right", "left", "up", "down", "r", "l",
                                          "menu", "fastforward" };
static const char *const kDefaultKeys[10] = { "X", "Z", "Backspace", "Return", "Right", "Left", "Up", "Down", "S", "A" };
static const char *const kDefaultPad[BINDS] = { "b", "a", "back", "start", "dpright", "dpleft", "dpup", "dpdown",
                                                "rightshoulder", "leftshoulder", "guide", "righttrigger" };
/* a common layout of generic USB pads */
static const char *const kDefaultJoy[BINDS] = { "b1", "b0", "b8", "b9", "h0right", "h0left", "h0up", "h0down",
                                                "b5", "b4", "", "b7" };

static const char *const kHatNames[4] = { "up", "right", "down", "left" };   /* SDL_HAT_* bits */

struct Bind bind_parse(const char *s, int joy) {
	struct Bind b = { BIND_NONE, 0, 0 };
	char name[64];
	int n, len;
	if (joy) {
		if (sscanf(s, "b%d%n", &n, &len) == 1 && !s[len]) { b.type = BIND_JBUTTON; b.index = n; }
		else if (sscanf(s, "a%d%n", &n, &len) == 1 && (s[len] == '+' || s[len] == '-') && !s[len + 1]) {
			b.type = BIND_JAXIS; b.index = n; b.dir = s[len] == '+' ? 1 : -1;
		} else if (sscanf(s, "h%d%n", &n, &len) == 1) {
			for (int i = 0; i < 4; i++)
				if (!strcmp(s + len, kHatNames[i])) { b.type = BIND_JHAT; b.index = n; b.dir = 1 << i; }
		}
		return b;
	}
	SDL_GameControllerButton btn = SDL_GameControllerGetButtonFromString(s);
	if (btn != SDL_CONTROLLER_BUTTON_INVALID) { b.type = BIND_BUTTON; b.index = btn; return b; }
	snprintf(name, sizeof name, "%s", s);
	len = (int)strlen(name);
	int dir = 1;
	if (len && (name[len - 1] == '+' || name[len - 1] == '-')) { dir = name[len - 1] == '+' ? 1 : -1; name[len - 1] = 0; }
	SDL_GameControllerAxis ax = SDL_GameControllerGetAxisFromString(name);
	if (ax != SDL_CONTROLLER_AXIS_INVALID) {
		b.type = BIND_AXIS; b.index = ax;
		b.dir = ax >= SDL_CONTROLLER_AXIS_TRIGGERLEFT ? 1 : dir;
	}
	return b;
}

const char *bind_format(struct Bind b, char *buf, int size) {
	const char *n;
	buf[0] = 0;
	switch (b.type) {
	case BIND_BUTTON:
		n = SDL_GameControllerGetStringForButton((SDL_GameControllerButton)b.index);
		snprintf(buf, size, "%s", n ? n : "");
		break;
	case BIND_AXIS:
		n = SDL_GameControllerGetStringForAxis((SDL_GameControllerAxis)b.index);
		snprintf(buf, size, "%s%s", n ? n : "", b.index >= SDL_CONTROLLER_AXIS_TRIGGERLEFT ? "" : b.dir > 0 ? "+" : "-");
		break;
	case BIND_JBUTTON: snprintf(buf, size, "b%d", b.index); break;
	case BIND_JAXIS: snprintf(buf, size, "a%d%c", b.index, b.dir > 0 ? '+' : '-'); break;
	case BIND_JHAT:
		for (int i = 0; i < 4; i++)
			if (b.dir == 1 << i) snprintf(buf, size, "h%d%s", b.index, kHatNames[i]);
		break;
	}
	return buf;
}

static char path[512];

const char *const kViewNames[VIEW_MODES] = { "gba", "x2", "x3", "x4", "mmx", "custom", "window" };

void settings_view_size(int winW, int winH, int *w, int *h) {
	static const int sizes[5][2] = { { 240, 160 }, { 480, 320 }, { 720, 480 }, { 960, 640 }, { 256, 224 } };
	int vw, vh;
	if (settings.viewMode < VIEW_CUSTOM) {
		vw = sizes[settings.viewMode][0];
		vh = sizes[settings.viewMode][1];
	} else if (settings.viewMode == VIEW_CUSTOM) {
		vw = settings.viewW;
		vh = settings.viewH;
	} else {   /* the window's shape, at the chosen height */
		vh = settings.viewHeight;
		vw = winH > 0 ? (int)((long long)vh * winW / winH) : vh * 3 / 2;
	}
	vw &= ~1;
	vh &= ~1;
	if (vw < 240) vw = 240;
	if (vh < 160) vh = 160;
	if (vw > 2560) vw = 2560;
	if (vh > 1440) vh = 1440;
	*w = vw;
	*h = vh;
}

void settings_defaults(void) {
	settings.scale = 3;
	settings.fullscreen = 0;
	settings.volume = 100;
	settings.mute = 0;
	settings.integerScale = 1;
	settings.smooth = 0;
	settings.viewMode = VIEW_MMX;   /* Mega Man X: 256x224 */
	settings.viewW = 400;
	settings.viewH = 240;
	settings.viewHeight = 240;
	settings.hudEdges = 1;
	settings.cpuSpeed = 400;   /* no slowdown where the GBA ran out of time */
	for (int i = 0; i < 10; i++) settings.keys[i] = SDL_GetScancodeFromName(kDefaultKeys[i]);
	for (int i = 0; i < BINDS; i++) {
		settings.pad[i] = bind_parse(kDefaultPad[i], 0);
		settings.joy[i] = bind_parse(kDefaultJoy[i], 1);
	}
	settings.stickMoves = 1;
	settings.deadzone = 40;
}

static void set_defaults(void) {
	memset(&settings, 0, sizeof settings);
	snprintf(settings.rom, sizeof settings.rom, "baserom.gba");
	settings_defaults();
}

static char *trim(char *s) {
	while (*s == ' ' || *s == '\t') s++;
	char *e = s + strlen(s);
	while (e > s && (e[-1] == ' ' || e[-1] == '\t' || e[-1] == '\r' || e[-1] == '\n')) *--e = 0;
	return s;
}

static void apply(const char *key, const char *value) {
	if (!strcmp(key, "rom")) snprintf(settings.rom, sizeof settings.rom, "%s", value);
	else if (!strcmp(key, "save")) snprintf(settings.save, sizeof settings.save, "%s", value);
	else if (!strcmp(key, "scale")) settings.scale = atoi(value);
	else if (!strcmp(key, "fullscreen")) settings.fullscreen = atoi(value);
	else if (!strcmp(key, "volume")) settings.volume = atoi(value);
	else if (!strcmp(key, "mute")) settings.mute = atoi(value);
	else if (!strcmp(key, "integer_scale")) settings.integerScale = atoi(value);
	else if (!strcmp(key, "smooth")) settings.smooth = atoi(value);
	else if (!strcmp(key, "view")) {
		for (int i = 0; i < VIEW_MODES; i++)
			if (!strcmp(value, kViewNames[i])) settings.viewMode = i;
	}
	else if (!strcmp(key, "view_width")) settings.viewW = atoi(value);
	else if (!strcmp(key, "view_height")) settings.viewH = atoi(value);
	else if (!strcmp(key, "view_window_height")) settings.viewHeight = atoi(value);
	else if (!strcmp(key, "hud_edges")) settings.hudEdges = atoi(value);
	else if (!strcmp(key, "cpu_speed")) settings.cpuSpeed = atoi(value);
	else if (!strcmp(key, "log")) settings.log = atoi(value);
	else if (!strcmp(key, "stick_moves")) settings.stickMoves = atoi(value);
	else if (!strcmp(key, "stick_deadzone")) settings.deadzone = atoi(value);
	else if (!strncmp(key, "key_", 4) || !strncmp(key, "pad_", 4) || !strncmp(key, "joy_", 4)) {
		for (int i = 0; i < BINDS; i++) {
			if (strcmp(key + 4, kButtonNames[i])) continue;
			if (key[0] == 'k') {
				SDL_Scancode sc = SDL_GetScancodeFromName(value);
				if (sc != SDL_SCANCODE_UNKNOWN && i < 10) settings.keys[i] = sc;
			} else {
				struct Bind b = bind_parse(value, key[0] == 'j');
				if (b.type != BIND_NONE || !*value) (key[0] == 'j' ? settings.joy : settings.pad)[i] = b;
			}
		}
	}
}

void settings_load(const char *file) {
	set_defaults();
	if (file) {
		snprintf(path, sizeof path, "%s", file);
	} else {
		char *base = SDL_GetBasePath();
		snprintf(path, sizeof path, "%smmz.ini", base ? base : "");
		SDL_free(base);
	}
	FILE *f = fopen(path, "r");
	if (!f) { settings_save(); return; }
	char line[600];
	while (fgets(line, sizeof line, f)) {
		char *s = trim(line);
		if (!*s || *s == '#' || *s == ';' || *s == '[') continue;
		char *eq = strchr(s, '=');
		if (!eq) continue;
		*eq = 0;
		apply(trim(s), trim(eq + 1));
	}
	fclose(f);
}

void settings_save(void) {
	FILE *f = fopen(path, "w");
	if (!f) return;
	fprintf(f, "# Mega Man Zero PC settings\n");
	fprintf(f, "rom = %s\n", settings.rom);
	if (settings.save[0]) fprintf(f, "save = %s\n", settings.save);
	fprintf(f, "scale = %d\nfullscreen = %d\nvolume = %d\nmute = %d\ninteger_scale = %d\nsmooth = %d\n",
	        settings.scale, settings.fullscreen, settings.volume, settings.mute, settings.integerScale, settings.smooth);
	fprintf(f, "\n# view: gba, x2, x3, x4, mmx, custom (view_width x view_height), window\n"
	           "# (the window's shape, view_window_height world pixels high)\n");
	fprintf(f, "view = %s\nview_width = %d\nview_height = %d\nview_window_height = %d\nhud_edges = %d\n",
	        kViewNames[settings.viewMode], settings.viewW, settings.viewH, settings.viewHeight, settings.hudEdges);
	fprintf(f, "\n# CPU time the game gets per frame, percent of the GBA's (100: the GBA's slowdown)\ncpu_speed = %d\n", settings.cpuSpeed);
	fprintf(f, "\n# 1: write mmz.log next to this file (for reporting problems)\nlog = %d\n", settings.log);
	fprintf(f, "\n# keyboard (SDL key names)\n");
	for (int i = 0; i < 10; i++) fprintf(f, "key_%s = %s\n", kButtonNames[i], SDL_GetScancodeName(settings.keys[i]));
	char buf[32];
	fprintf(f, "\n# controllers: SDL button names by position (a = bottom face button), or axes\n"
	           "# (lefttrigger, righttrigger, leftx+, lefty-...); empty for none\n");
	for (int i = 0; i < BINDS; i++) fprintf(f, "pad_%s = %s\n", kButtonNames[i], bind_format(settings.pad[i], buf, sizeof buf));
	fprintf(f, "\n# joysticks without an SDL mapping: b<n> button, h<n>up/down/left/right hat, a<n>+/- axis\n");
	for (int i = 0; i < BINDS; i++) fprintf(f, "joy_%s = %s\n", kButtonNames[i], bind_format(settings.joy[i], buf, sizeof buf));
	fprintf(f, "stick_moves = %d\nstick_deadzone = %d\n", settings.stickMoves, settings.deadzone);
	fclose(f);
}

const char *settings_path(void) { return path; }
