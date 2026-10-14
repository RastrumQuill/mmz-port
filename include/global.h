#ifndef GLOBAL_H
#define GLOBAL_H

#include "gba/types.h"
#include "gba/io_reg.h"

// Functions still in assembly can be included in C files with this.
#define NAKED __attribute__((naked))
#define ASM_FUNC(path, decl) \
    NAKED decl { asm(".include \"" path "\""); }

#endif
