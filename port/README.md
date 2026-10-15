# Mega Man Zero PC port

The game compiled natively for PC: the decompilation's C (`lifted/`, every
function translated from the original code and checked against it, and the
readable C in `src/`) with a platform layer in place of the GBA hardware.
No emulation: the ROM is only read for the game's data (graphics, sound,
stages). You need your own Mega Man Zero (USA) ROM.

This folder will move to its own fork of the decompilation; the
decompilation stays free of platform code.

## Playing

Windows: unzip, run `mmz.exe`. On the first start it asks for the ROM (or
put it next to `mmz.exe` as `baserom.gba`). Saves go next to the ROM as
`.sav` (the same format as GBA emulators, so emulator saves work).

| GBA | Keyboard | Gamepad |
|---|---|---|
| D-pad | arrows | D-pad, left stick |
| A | X | B (east) |
| B | Z | A (south) |
| L / R | A / S | shoulder buttons |
| Start / Select | Enter / Backspace | Start / Back |

F11: full screen.

Settings are in `mmz.ini` next to the executable, written with the defaults
on the first start: `rom`, `save`, `scale`, `fullscreen`, `volume`, and
`key_<button>` / `pad_<button>` for every button (SDL key and button names,
e.g. `key_a = X`, `pad_r = rightshoulder`).

## Building

Linux (needs SDL2): `make port` from the repository root, then
`build_port/mmz`.

Windows, cross-compiled with MinGW and the SDL2 MinGW development package:
`make -C port WINDOWS=1 SDL2_DIR=.../SDL2-2.30.x/x86_64-w64-mingw32 dist`
makes `build_port_win/mmz-windows.zip`.

## How it works

| File | What it does |
|---|---|
| `hw.c` | the clock, interrupts, timed DMA, timers |
| `tasks.c` | the game's cooperative tasks, on native stacks (fibers on Windows) |
| `ppu.c` | the picture: backgrounds, sprites, windows, effects |
| `audio.c` | the Direct Sound FIFOs the game's mixer feeds |
| `settings.c` | `mmz.ini` |
| `main.c` | SDL2 window, input, sound, save file; headless test mode |

There is no CPU emulation: the lifted code counts the cycles its
instructions and memory accesses would take, and the display moves a
scanline every 1232 cycles, so the game's timing (waiting for V-blank,
per-line effects, slowdown) follows the GBA's.

## Testing against mGBA

`build_port/mmz --headless --route ROUTE [--wav FILE]` plays a `tools/emu`
route without a window and writes its screenshots (and the sound);
`tools/compare.py PC_DIR MGBA_DIR` compares them with the mGBA runner's.
On the intro route every screenshot up to the opening mission is identical.
