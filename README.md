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
* Decompilation to C has not started yet.

## Building

Needs `binutils-arm-none-eabi`, `make` and Python 3.

```sh
cp /path/to/your/rom.gba baserom.gba
make            # builds mmz.gba and checks the SHA-1
make moved      # builds mmz_moved.gba with code and data moved (relocation test)
```

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
