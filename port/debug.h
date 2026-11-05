/* Debugging help (debug.c): locations, bookmarks, the warp, cheats. */
#ifndef DEBUG_H
#define DEBUG_H
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif

/* where the player is; positions in pixels */
struct Location {
	int mission, stage, area, variant, checkpoint, inStage;
	int x, y, camX, camY;   /* Zero; the camera's centre (-1 in a bookmark: none) */
};
void loc_now(struct Location *l);
void loc_format(const struct Location *l, char *out, size_t n);   /* the bookmark line */
int loc_parse(const char *s, struct Location *l);                  /* 1 if it is one */

/* the warp: from the title to the bookmark (see debug.c) */
void warp_start(const struct Location *l);
int warp_active(void);
int warp_step(unsigned short *keys);   /* every frame; 1 while it holds the buttons */
extern int warp_verbose;
extern char warp_origin[160];   /* the last warp's bookmark ("" if none) */

/* toggles (Debug window) */
extern int cheat_invincible, cheat_no_enemies;
void cheats_frame(void);
int zero_hp(void);

/* main.c: start the game again with --warp BOOKMARK (the Debug window's Go) */
void frontend_restart_warp(const char *bookmark);

#define MAX_BOOKMARKS 64
struct Bookmark { char name[64]; char text[160]; };
extern struct Bookmark bookmarks[MAX_BOOKMARKS];
extern int bookmarkCount;
void bookmarks_load(void);
void bookmarks_save(void);
const char *bookmark_add_here(void);   /* F5: the new bookmark's text (or NULL) */
void bookmark_remove(int i);

#ifdef __cplusplus
}
#endif
#endif
