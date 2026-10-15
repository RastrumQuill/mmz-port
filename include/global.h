#ifndef GLOBAL_H
#define GLOBAL_H

#include "gba/types.h"
#include "gba/io_reg.h"

#define NAKED __attribute__((naked))

#ifdef PLATFORM_PC
// The C built for the PC (and for the equivalence check, tools/lift): a
// function still in assembly is the lifted C version (lifted/), so ASM_FUNC
// defines nothing, and NONMATCH functions are plain C. LIFT_EXPORT* make a C
// function replace its lifted version (see tools/lift/lift.h).
#include "../tools/lift/lift.h"
#define ASM_FUNC(path, decl)
#define NONMATCH(path, decl) decl
#define END_NONMATCH
#else
#define LIFT_EXPORT_VOID(name)
#define LIFT_EXPORT(type, name)
#endif

#define INCLUDE_ASM(path) asm(".syntax unified\n.include \"" path "\"\n.syntax divided\n")

// A function that is still assembly: its body comes from
// asm/nonmatching/UNIT/NAME.inc (written by tools/disasm/split.py).
#ifndef PLATFORM_PC
#define ASM_FUNC(path, decl) \
    NAKED decl {             \
        INCLUDE_ASM(path);   \
    }
#endif

// A function decompiled to C that does not compile to the same code yet.
// The matching build uses the assembly; NON_MATCHING=1 builds the C.
//     NONMATCH("asm/nonmatching/UNIT/NAME.inc", void Name(void)) {
//         ...
//     }
//     END_NONMATCH
#if defined(PLATFORM_PC)
#elif NON_MATCHING
#define NONMATCH(path, decl) decl
#define END_NONMATCH
#else
#define NONMATCH(path, decl) \
    NAKED decl {             \
        INCLUDE_ASM(path);   \
        if (0)
#define END_NONMATCH }
#endif

#endif
