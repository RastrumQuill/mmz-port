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
 *   view = gba                how much of the world: gba, x2, x3, x4, mmx
 *                             (Mega Man X, 256x224), custom (view_width x
 *                             view_height), window (the window's shape,
 *                             view_window_height world pixels high)
 *   key_a = X                 keyboard keys, by SDL name ("Left Shift", "Z")
 *   pad_a = b                 gamepad buttons, by SDL name (a, b, x, y,
 *                             leftshoulder, rightshoulder, start, back, dpup...)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL.h>
#include "settings.h"

struct Settings settings;

/* GBA buttons in KEYINPUT bit order */
const char *const kButtonNames[10] = { "a", "b", "select", "start", "right", "left", "up", "down", "r", "l" };
static const char *const kDefaultKeys[10] = { "X", "Z", "Backspace", "Return", "Right", "Left", "Up", "Down", "S", "A" };
static const char *const kDefaultPad[10] = { "b", "a", "back", "start", "dpright", "dpleft", "dpup", "dpdown",
                                             "rightshoulder", "leftshoulder" };

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
	for (int i = 0; i < 10; i++) {
		settings.keys[i] = SDL_GetScancodeFromName(kDefaultKeys[i]);
		settings.pad[i] = SDL_GameControllerGetButtonFromString(kDefaultPad[i]);
	}
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
	else if (!strncmp(key, "key_", 4) || !strncmp(key, "pad_", 4)) {
		for (int i = 0; i < 10; i++) {
			if (strcmp(key + 4, kButtonNames[i])) continue;
			if (key[0] == 'k') {
				SDL_Scancode sc = SDL_GetScancodeFromName(value);
				if (sc != SDL_SCANCODE_UNKNOWN) settings.keys[i] = sc;
			} else {
				SDL_GameControllerButton b = SDL_GameControllerGetButtonFromString(value);
				if (b != SDL_CONTROLLER_BUTTON_INVALID) settings.pad[i] = b;
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
	fprintf(f, "view = %s\nview_width = %d\nview_height = %d\nview_window_height = %d\n", kViewNames[settings.viewMode],
	        settings.viewW, settings.viewH, settings.viewHeight);
	fprintf(f, "\n# keyboard (SDL key names)\n");
	for (int i = 0; i < 10; i++) fprintf(f, "key_%s = %s\n", kButtonNames[i], SDL_GetScancodeName(settings.keys[i]));
	fprintf(f, "\n# gamepad (SDL button names)\n");
	for (int i = 0; i < 10; i++) fprintf(f, "pad_%s = %s\n", kButtonNames[i], SDL_GameControllerGetStringForButton(settings.pad[i]));
	fclose(f);
}

const char *settings_path(void) { return path; }
