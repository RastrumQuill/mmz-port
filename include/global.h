#ifndef GLOBAL_H
#define GLOBAL_H

#include "gba/types.h"
#include "gba/io_reg.h"

#define NAKED __attribute__((naked))

#define INCLUDE_ASM(path) asm(".syntax unified\n.include \"" path "\"\n.syntax divided\n")

// A function that is still assembly: its body comes from
// asm/nonmatching/UNIT/NAME.inc (written by tools/disasm/split.py).
#define ASM_FUNC(path, decl) \
    NAKED decl {             \
        INCLUDE_ASM(path);   \
    }

// A function decompiled to C that does not compile to the same code yet.
// The matching build uses the assembly; NON_MATCHING=1 builds the C.
//     NONMATCH("asm/nonmatching/UNIT/NAME.inc", void Name(void)) {
//         ...
//     }
//     END_NONMATCH
#if NON_MATCHING
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
