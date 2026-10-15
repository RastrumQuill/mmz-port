# Mega Man Zero PC port

A native PC version of **Mega Man Zero** (Game Boy Advance), with no
emulation: the game's code from the [decompilation](https://github.com/RastrumQuill/mmz),
compiled for PC, with a platform layer in place of the GBA hardware, plus
features of its own (a zoomed-out view, controller support, settings and
debug menus).

**Playing, building and how it works: [`port/README.md`](port/README.md).**

This repository is a fork of the decompilation: everything outside `port/`
is the decompilation, kept in step by merging it in
(`git remote add decomp https://github.com/RastrumQuill/mmz` once, then
`git pull decomp <branch>`). Work on the game's code itself (matching
functions, names, documentation) belongs in the decompilation; platform code
and PC features belong here.

No game data is included. You need your own Mega Man Zero (USA) ROM.

---

# Mega Man Zero decompilation

A work-in-progress decompilation of **Mega Man Zero** (Game Boy Advance) for
modding and a native PC port. The goal for the PC port is a larger view of the
game world (zoomed out), which needs changes across the camera, map streaming,
enemy spawning and sprite systems.

This repository does not contain any game data. You need your own copy of the
game:

| File | Game | SHA-1 |
|---|---|---|
| `baserom.gba` | Mega Man Zero (USA, Europe) | `193b14120119162518a73c70876f0b8bffdbd96e` |

## Status

* The ROM is fully disassembled (5,920 functions) and rebuilds byte for byte.
* Every ROM address in the code and data is a symbol, so code and data can
  move. This is checked by a relocation test (see below), which plays the
  intro and the opening mission identically to the original.
* C is compiled with agbcc (the original compiler) into the same ROM. The
  input code (`src/input.c`) is the first decompiled file.

## Lifted C and the equivalence check

The goal is C whose functions give the same results as the originals, not
byte-identical C. Two generated layers make that cheap:

* `lifted/` (`make lift`): every function translated to C instruction by
  instruction by `tools/lift/lift.py`. Registers are variables, memory goes
  through accessors that reproduce the ARM7 (unaligned accesses, I/O), and
  calls are C calls. It is unreadable but complete, and it runs anywhere C
  does. It is the base the PC port runs on until functions are rewritten by
  hand. The ARM sound mixer is lifted too; the task switching code
  (`sub_080002DC`, `sub_08000300`, `sub_08000328`) and the start-up and
  interrupt code are left to the runtime.
* `ref/ghidra/` (`make ghidra-ref`): Ghidra's decompilation of every function,
  as a starting point for readable C.

`make check-lifted` builds the check and plays a route in mGBA. Each time a
function is entered it copies the machine state, lets the original run to its
return, runs the C version from the copy, and compares the results: r0, the
registers a function must preserve, and all of memory and the I/O registers.
Results go to `build_lift/results.tsv`. The C runs in `exec32`, a 32-bit
process with the GBA memory mapped at its own addresses, so game pointers work
as they are; `harness` (mGBA) shares that memory with it (`tools/lift/shm.h`).

Random play from a save, with the mission byte overwritten so it reaches every
stage (`tools/emu/fuzz_route.py FRAMES SEED SLOT MISSION`, run with
`SAVE=file.sav`): 2358 functions tested, all identical except the two task
switching functions, which need the PC runtime.

Readable C replaces lifted code one function at a time. Lifted functions are
weak `lift_NAME` symbols; a C function in `src/` replaces its lifted version
with `LIFT_EXPORT_VOID(Name)` or `LIFT_EXPORT(type, Name)` next to it, and can
call code that is still lifted with `LIFT_CALL(Name, a0, a1, a2, a3)` (see
`tools/lift/lift.h`). `src/` is built with `PLATFORM_PC` for this, and then
checked like the lifted code. `src/input.c` is checked this way.

Things the check has to model, because the game depends on them:
* Reads through null pointers return the last BIOS opcode (the game does
  this).
* Unaligned 32-bit stores write to the aligned address (the input code does
  this).
* I/O registers keep only their existing bits.
* Dead stack space below the stack pointer is ignored, as are registers
  written by H-blank DMA and the BIOS's own stack.

## The other games

`games/mmz2`, `games/mmz3` and `games/mmz4` hold the same pipeline for
Mega Man Zero 2, 3 and 4 (USA), as a reference codebase. Mega Man Zero 1 is
the main project; the others get the same treatment later.

| Game | Functions | Rebuilds byte for byte | Lifted C | Ghidra C |
|---|---|---|---|---|
| Mega Man Zero 2 (USA) | 6,807 | yes | compiles | yes |
| Mega Man Zero 3 (USA) | 5,852 | yes | compiles | yes |
| Mega Man Zero 4 (USA) | 7,477 | yes | compiles | yes |

Each directory has `game.json` (code range, entry points, excluded ranges),
`functions.cfg`, `units.txt`, `asm/`, `data/`, `lifted/` and `ref/ghidra/`.
Put the game's ROM in it as `baserom.gba`, then `make` rebuilds it and checks
the SHA-1. A new game is set up with `tools/disasm/new_game.py`, then
`MMZ_GAME=DIR tools/disasm/discover.py ... --write`, `regen.py`,
`game_files.py` and `make lift`. Not done yet for these: the relocation
test, the equivalence check (it needs input routes for each game) and the
pinned data banks.

## Building

Needs `binutils-arm-none-eabi`, `make`, Python 3 with `capstone`, and
[agbcc](https://github.com/pret/agbcc) installed into `tools/agbcc`
(`./build.sh && ./install.sh path/to/mmz`).

```sh
cp /path/to/your/rom.gba baserom.gba
make              # builds mmz.gba and checks the SHA-1
make moved        # code and data moved far away (relocation test)
make nonmatching  # uses the C of functions that do not match yet
```

## Decompiling

The code is split into translation units (`tools/disasm/units.txt`). A unit
is built from `src/UNIT.c` if that exists and from `asm/UNIT.s` otherwise.
In a C file, functions that are not decompiled yet are included as assembly
with `ASM_FUNC("asm/nonmatching/UNIT/NAME.inc", decl)`; a function whose C
works but does not compile to the same code yet goes in
`NONMATCH(...) { ... } END_NONMATCH`, so the normal build stays identical and
`make nonmatching` builds the C.

* `python3 tools/asmdiff.py [FUNC]` lists functions that differ from the
  original, or shows one side by side.
* `python3 tools/score.py FILE.c FUNC [-v]` compiles a file and scores one
  function against the original (100 is a match).
* `python3 tools/match/match.py baserom.gba asm/... OBJDIR out.tsv` finds
  functions that look like ones from another game built with agbcc (used
  with [rmz3](https://github.com/mmzret/rmz3), the Mega Man Zero 3
  decompilation, which shares the engine).
* RAM variables used by C get their address in `sym_ram.ld`.
* Function names go into `tools/disasm/mmz.cfg`
  (`thumb_func ADDRESS NAME`); `regen.py` applies them everywhere.

## Testing

`tools/emu` holds a headless test runner on top of libmgba (`libmgba-dev`,
`libpng-dev`). It plays a scripted route of button presses, saves screenshots
and memory dumps, and can log memory reads. Emulation is deterministic, so two
builds can be compared frame by frame:

```sh
tools/emu/compare.sh baserom.gba mmz_moved.gba   # screenshots must be identical
python3 tools/emu/trace_stale.py 12000           # reads of the old addresses
```

`tools/emu/routes/intro.txt` starts a new game and plays through the intro,
the opening mission and a game over.

In `mmz_moved.gba` the Thumb code is 6 MB and the data 16 MB away from where
they are in the original, and the old addresses hold nothing. Any address that
is still a plain number reads empty space, and `trace_stale.py` reports where.
Each part keeps its offset within a 128 KB page, so the timing is the same as
the original.

## Layout

| Path | Contents |
|---|---|
| `asm/code.s` | the game code, disassembled (to be split into files and decompiled) |
| `data/data.s` | the data part of the ROM, labelled where code or data points into it |
| `include/` | C headers for the decompilation |
| `tools/disasm` | the tools that generate the two files above from the ROM |
| `tools/emu` | headless test runner, input routes and relocation checks |
| `tools/match` | finds functions that match ones in another decompiled game |

## Notes on the ROM

* Code: 0x08000000 to 0x080C8E22. The ARM interrupt handler at 0x080001BC is
  copied to IWRAM (0x030003B8) at start-up.
* Data: from 0x080C8E24. The data is grouped in banks padded with 0xFF.
* The bank at 0x08500000 is addressed with a constant the code builds itself
  (`movs r0, #0x85; lsls r0, #20`), so it has to stay at that address. It is
  in its own section (`.rodata.bank_08500000`); everything else can move.
* Music uses the standard m4a (Sappy) engine. Song tracks contain unaligned
  addresses after `GOTO`/`PATT` (0xB2/0xB3) commands.
* Save type: SRAM.

## Regenerating the disassembly

The disassembler is [gbadisasm](https://github.com/jiangzhengwenjz/gbadisasm)
with `tools/disasm/gbadisasm.patch` applied (it skips a label that falls inside
the previous instruction instead of stopping).

```sh
python3 tools/disasm/regen.py path/to/gbadisasm
```

`regen.py` disassembles the functions listed in `tools/disasm/mmz.cfg`, finds
the pointers in the data (`ptrscan.py`) and replaces ROM addresses with labels
(`symbolize.py`). `discover.py` remakes the function list: it starts from the
entry points and every function pointer in the ROM, and adds functions found
through pointer tables and in undecoded bytes until nothing new turns up.

Pointers in data are found from labels the code refers to, by:

* exact matches with known labels and functions,
* runs of pointers, and arrays of structs (a pointer at a regular stride),
* tables that start at a label (a pointer in the first entry and another one
  a stride later),
* m4a `GOTO`/`PATT` operands,
* script-style data (aligned addresses of something within 64 KB, next to
  other pointers).
