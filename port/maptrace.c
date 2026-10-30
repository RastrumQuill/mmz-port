/* Call and memory recording for the program map (DTK map.build --dynamic).
 *
 * Built only with `make MAPTRACE=1` (into build_map/): the game's C (lifted/
 * and src/) is compiled with -finstrument-functions, so every call enters
 * map_enter() below; lift_call() (indirect calls through code addresses) and
 * the memory accessors report too. Pairs of host code addresses are kept
 * (each once) and written when the game exits to MMZ_MAP_OUT (default
 * map_raw.tsv); tools/map_edges.py turns them into function names with the
 * executable's symbol table.
 *
 *   call  CALL_SITE  CALLEE        a call from the code at CALL_SITE
 *   icall RET        CALLEE        an indirect call (lift_call) returning to RET
 *   touch SITE       ADDR  r|w     memory (EWRAM, IWRAM, I/O; 4-byte words)
 *                                  read or written by the code at SITE
 */
#ifdef MAPTRACE
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOI __attribute__((no_instrument_function))

struct Pair { uintptr_t a, b; };
static struct Pair *set;
static size_t cap, used;
static int registered;

static void NOI flush(void);

static size_t NOI hash(uintptr_t a, uintptr_t b) {
	uint64_t h = (uint64_t)a * 0x9E3779B97F4A7C15ull ^ ((uint64_t)b + 0x632BE59BD9B4E019ull) * 0xC2B2AE3D27D4EB4Full;
	return (size_t)(h ^ (h >> 29));
}

static void NOI add(uintptr_t a, uintptr_t b) {
	if (used * 2 >= cap) {
		size_t ncap = cap ? cap * 2 : 1 << 16;
		struct Pair *n = calloc(ncap, sizeof *n);
		if (!n) return;
		for (size_t i = 0; i < cap; i++)
			if (set[i].a) {
				size_t k = hash(set[i].a, set[i].b) & (ncap - 1);
				while (n[k].a) k = (k + 1) & (ncap - 1);
				n[k] = set[i];
			}
		free(set);
		set = n; cap = ncap;
		if (!registered) { registered = 1; atexit(flush); }
	}
	size_t k = hash(a, b) & (cap - 1);
	while (set[k].a) {
		if (set[k].a == a && set[k].b == b) return;
		k = (k + 1) & (cap - 1);
	}
	set[k].a = a; set[k].b = b;
	used++;
}

/* kinds in the low bits of b (code addresses are even on x86-64 only by
   chance, so the kind goes into the top bits instead) */
#define K_CALL  ((uintptr_t)0 << 62)
#define K_ICALL ((uintptr_t)1 << 62)
#define K_READ  ((uintptr_t)2 << 62)
#define K_WRITE ((uintptr_t)3 << 62)

void NOI __cyg_profile_func_enter(void *fn, void *site) { add((uintptr_t)site, (uintptr_t)fn | K_CALL); }
void NOI __cyg_profile_func_exit(void *fn, void *site) { (void)fn; (void)site; }

void NOI map_icall(void *ret, void (*fn)(void)) { add((uintptr_t)ret, (uintptr_t)fn | K_ICALL); }

void NOI map_touch(void *site, uint32_t addr, int write) {
	uint32_t region = addr >> 24;
	if (region != 2 && region != 3 && region != 4) return;
	add((uintptr_t)site, (uintptr_t)(addr & ~3u) | (write ? K_WRITE : K_READ));
}

static void NOI flush(void) {
	const char *path = getenv("MMZ_MAP_OUT");
	FILE *f = fopen(path ? path : "map_raw.tsv", "w");
	if (!f) return;
	static const char *kind[] = { "call", "icall", "r", "w" };
	for (size_t i = 0; i < cap; i++) {
		if (!set[i].a) continue;
		int k = (int)(set[i].b >> 62);
		uintptr_t b = set[i].b & ~((uintptr_t)3 << 62);
		if (k >= 2) fprintf(f, "touch\t%lx\t%08lx\t%s\n", (unsigned long)set[i].a, (unsigned long)b, kind[k]);
		else fprintf(f, "%s\t%lx\t%lx\n", kind[k], (unsigned long)set[i].a, (unsigned long)b);
	}
	fclose(f);
}
#endif
