# Mega Man Zero PC port

The game compiled natively for PC: the decompilation's C (`lifted/`, every
function translated from the original code and checked against it, and the
readable C in `src/`) with a platform layer in place of the GBA hardware.
No emulation: the ROM is only read for the game's data.

This folder will move to its own fork of the decompilation; the
decompilation stays free of platform code.

| File | What it does |
|---|---|
| `hw.c` | the scanline clock, interrupts, timed DMA, timers |
| `tasks.c` | the game's cooperative tasks, on native stacks |
| `ppu.c` | the picture: backgrounds, sprites, windows, effects |
| `audio.c` | the Direct Sound FIFOs the game's mixer feeds |
| `main.c` | SDL2 window, input, sound, save file; headless test mode |

Build (needs SDL2): `make port` from the repository root, then
`build_port/mmz --rom baserom.gba`.

Keys: arrows, X = A, Z = B, A = L, S = R, Enter = Start, Backspace = Select.
A gamepad works too.

Testing against mGBA: `build_port/mmz --headless --route ROUTE` plays a
`tools/emu` route and writes its screenshots; `tools/compare.py PC_DIR
MGBA_DIR` compares them with the mGBA runner's.
