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
 *   icall RET CALLEE ENTRY  an indirect call (lift_call) returning to RET; ENTRY:
 *                           the call site of the last function entered (the
 *                           caller of a call veneer, when RET is in one)
 *   touch SITE       ADDR  r|w     memory (EWRAM, IWRAM, I/O; 4-byte words)
 *                                  read or written by the code at SITE
 */
#ifdef MAPTRACE
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOI __attribute__((no_instrument_function))

struct Pair { uintptr_t a, b, c; };
static struct Pair *set;
static size_t cap, used;
static int registered;

static void NOI flush(void);

static size_t NOI hash(uintptr_t a, uintptr_t b, uintptr_t c) {
	uint64_t h = (uint64_t)a * 0x9E3779B97F4A7C15ull ^ ((uint64_t)b + 0x632BE59BD9B4E019ull) * 0xC2B2AE3D27D4EB4Full ^ (uint64_t)c * 0x165667B19E3779F9ull;
	return (size_t)(h ^ (h >> 29));
}

static void NOI add(uintptr_t a, uintptr_t b, uintptr_t c) {
	if (used * 2 >= cap) {
		size_t ncap = cap ? cap * 2 : 1 << 16;
		struct Pair *n = calloc(ncap, sizeof *n);
		if (!n) return;
		for (size_t i = 0; i < cap; i++)
			if (set[i].a) {
				size_t k = hash(set[i].a, set[i].b, set[i].c) & (ncap - 1);
				while (n[k].a) k = (k + 1) & (ncap - 1);
				n[k] = set[i];
			}
		free(set);
		set = n; cap = ncap;
		if (!registered) { registered = 1; atexit(flush); }
	}
	size_t k = hash(a, b, c) & (cap - 1);
	while (set[k].a) {
		if (set[k].a == a && set[k].b == b && set[k].c == c) return;
		k = (k + 1) & (cap - 1);
	}
	set[k].a = a; set[k].b = b; set[k].c = c;
	used++;
}

/* kinds in the low bits of b (code addresses are even on x86-64 only by
   chance, so the kind goes into the top bits instead) */
#define K_CALL  ((uintptr_t)0 << 62)
#define K_ICALL ((uintptr_t)1 << 62)
#define K_READ  ((uintptr_t)2 << 62)
#define K_WRITE ((uintptr_t)3 << 62)

/* the call site of the last function entered: for an indirect call made by a
   call veneer (a function that only jumps to a register), the veneer's caller */
static uintptr_t lastSite;

/* Host code of call veneers (MMZ_MAP_VENEERS: their GBA addresses, comma
   separated; tools/map_edges.py --veneers prints them). The lifter puts a
   veneer into the C function of the code before it and jumps to its target
   from there, so a call made from that code is credited to the veneer's own
   caller instead. */
#include "lift.h"
static uintptr_t venLo[16], venHi[16];
static int nVen = -1;
static int NOI cmp_ptr(const void *a, const void *b) { uintptr_t x = *(const uintptr_t *)a, y = *(const uintptr_t *)b; return x < y ? -1 : x > y; }
static void NOI init_veneers(void) {
	nVen = 0;
	const char *e = getenv("MMZ_MAP_VENEERS");
	if (!e) return;
	uintptr_t *starts = malloc(gLiftTableSize * sizeof *starts);
	int n = 0;
	for (int i = 0; i < gLiftTableSize; i++) if (gLiftTable[i].isFunction) starts[n++] = (uintptr_t)gLiftTable[i].fn;
	qsort(starts, n, sizeof *starts, cmp_ptr);
	for (const char *p = e; *p && nVen < 16;) {
		u32 v = (u32)strtoul(p, (char **)&p, 16);
		if (*p == ',') p++;
		/* the lifted function holding v: the function entry at or before it */
		int best = -1;
		for (int i = 0; i < gLiftTableSize; i++)
			if (gLiftTable[i].isFunction && (gLiftTable[i].addr & ~1u) <= v && (best < 0 || gLiftTable[i].addr > gLiftTable[best].addr)) best = i;
		/* (only a veneer that starts its C function: one inside other code
		   would take that code's calls along) */
		if (best < 0 || (gLiftTable[best].addr & ~1u) != v) continue;
		uintptr_t lo = (uintptr_t)gLiftTable[best].fn, hi = (uintptr_t)-1;
		for (int i = 0; i < n; i++) if (starts[i] > lo) { hi = starts[i]; break; }
		venLo[nVen] = lo; venHi[nVen++] = hi;
	}
	free(starts);
}
static int NOI in_veneer(uintptr_t a) {
	if (nVen < 0) init_veneers();
	for (int i = 0; i < nVen; i++) if (a >= venLo[i] && a < venHi[i]) return 1;
	return 0;
}

void NOI __cyg_profile_func_enter(void *fn, void *site) {
	uintptr_t s = (uintptr_t)site;
	if (in_veneer(s)) s = lastSite;
	lastSite = s;
	add(s, (uintptr_t)fn | K_CALL, 0);
}
void NOI __cyg_profile_func_exit(void *fn, void *site) { (void)fn; (void)site; }

void NOI map_icall(void *ret, void (*fn)(void)) { add((uintptr_t)ret, (uintptr_t)fn | K_ICALL, lastSite); }

void NOI map_touch(void *site, uint32_t addr, int write) {
	uint32_t region = addr >> 24;
	if (region != 2 && region != 3 && region != 4) return;
	add((uintptr_t)site, (uintptr_t)(addr & ~3u) | (write ? K_WRITE : K_READ), 0);
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
		else if (k == 1) fprintf(f, "icall\t%lx\t%lx\t%lx\n", (unsigned long)set[i].a, (unsigned long)b, (unsigned long)set[i].c);
		else fprintf(f, "call\t%lx\t%lx\n", (unsigned long)set[i].a, (unsigned long)b);
	}
	fclose(f);
}
#endif
