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

void settings_defaults(void) {
	settings.scale = 3;
	settings.fullscreen = 0;
	settings.volume = 100;
	settings.mute = 0;
	settings.integerScale = 1;
	settings.smooth = 0;
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
	fprintf(f, "\n# keyboard (SDL key names)\n");
	for (int i = 0; i < 10; i++) fprintf(f, "key_%s = %s\n", kButtonNames[i], SDL_GetScancodeName(settings.keys[i]));
	fprintf(f, "\n# gamepad (SDL button names)\n");
	for (int i = 0; i < 10; i++) fprintf(f, "pad_%s = %s\n", kButtonNames[i], SDL_GameControllerGetStringForButton(settings.pad[i]));
	fclose(f);
}

const char *settings_path(void) { return path; }
