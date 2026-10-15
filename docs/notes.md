# Notes on Mega Man Zero 1

Findings that the readable decompilation and the PC port build on.

## Camera

The stage camera lives at `0x02022C3C`. Its layout is the same as the
`Camera` struct in the Mega Man Zero 3 decompilation (rmz3):

| Offset | Field |
|---|---|
| 0x19 | chase mode (bit 3: ease toward the target) |
| 0x1C | set once the mode's update has run |
| 0x22 | counter for the timed eases |
| 0x30 | target position (x, y; 24.8 fixed point) |
| 0x38 | viewport: the centre of the screen (x, y) |
| 0x40 | forced scroll speed (x, y) |
| 0x48 | pointer to the followed position |
| 0x4C | dx, ddx, dy, ddy |
| 0x5C | left, right, top, bottom limits |

* `sub_08013C28`: set up from a template (mode, chase mode, position,
  scroll speed, limits).
* `sub_08013C94`: move the viewport toward the target. Mode 1 closes a
  quarter of the distance each frame; modes 2 and 4 ease over 1024 and 256
  steps; others jump.
* `sub_08013E00`: forced scrolling (target += speed, then ease).
* The screen's left edge is the viewport x minus 120 pixels (half of 240),
  which is where the larger PC view has to change things.

## Tasks

The game runs up to three cooperative tasks (slots of 24 bytes at
`0x03001748`: state, restart flag, sleep counter, saved LR, saved SP).
`sub_080002DC` starts or resumes a task on its own stack, `sub_08000300`
yields back to the scheduler (saving LR and SP), `sub_08000328` ends the
task. The scheduler is `sub_08000C1C`. On PC each task needs its own native
stack (for example ucontext), because a task yields from inside nested calls.

## Reads that depend on the hardware

* Reads through a null pointer land in the BIOS area and return the last
  opcode the BIOS fetched (after an SWI: `0xE3A02004`).
* Reads through such a value (or any unmapped address) return the opcode the
  CPU prefetched: in Thumb, the halfword two instructions ahead, twice.
* Unaligned 32-bit stores go to the aligned address (`ResetKeyState` does
  this).

## Save file

SRAM, 32 KB. A save with three finished files (rank S, Ultimate mode) starts
at the last mission, Neo Arcadia Core. `tools/emu/fuzz_route.py FRAMES SEED
SLOT` continues from a file of the save (run with `SAVE=file.sav`).
