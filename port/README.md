# Mega Man Zero PC port

The game compiled natively for PC: the decompilation's C (`lifted/`, every
function translated from the original code and checked against it, and the
readable C in `src/`) with a platform layer in place of the GBA hardware.
No emulation: the ROM is only read for the game's data (graphics, sound,
stages). You need your own Mega Man Zero (USA) ROM.

This is the port's fork of the decompilation
([RastrumQuill/mmz](https://github.com/RastrumQuill/mmz)); the decompilation
stays free of platform code.

## Playing

Download `mmz-windows.zip` (or `mmz-linux.zip`) from the
[releases](https://github.com/RastrumQuill/mmz-port/releases).

Windows: unzip, run `mmz.exe`. On the first start it asks for the ROM (or
put it next to `mmz.exe` as `baserom.gba`). Saves go next to the ROM as
`.sav` (the same format as GBA emulators, so emulator saves work).

| GBA | Keyboard | Controller |
|---|---|---|
| D-pad | arrows | D-pad, left stick |
| A | X | right face button (Xbox B, PlayStation Circle, Switch A) |
| B | Z | bottom face button (Xbox A, PlayStation Cross, Switch B) |
| L / R | A / S | shoulder buttons |
| Start / Select | Enter / Backspace | Start / Back |
| settings | F1 | Guide, or Back + Start (B closes them) |
| fast-forward (held) | Tab | right trigger |

**Controllers.** Any number can be connected, and plugged in or out while
playing. Xbox, PlayStation, Switch and most other controllers are
recognised (with `gamecontrollerdb.txt`, the community mapping list, next
to the executable); buttons go by position, so the layout is the same on
every controller. A joystick with no mapping still works through its raw
buttons, hat and axes (its own column in the controls). The settings menu
can be used entirely with a controller.

| Key | |
|---|---|
| F1 | settings: video, sound, controls (the game waits while it is open) |
| F2 | debug tools |
| F11 | full screen |
| P / N | pause / one frame while paused |
| Tab (held) | fast-forward |

**Settings (F1).** Window scale, full screen, whole-number scaling, smooth
pixels, volume, mute. Controls: pick a binding and press the new key or
controller button, trigger or stick direction (Esc cancels, Delete or a
right-click clears); the controller hotkeys and the stick's dead zone are
there too. Everything is kept in `mmz.ini` next to the executable (written
with the defaults on the first start; it can also be edited by hand:
`key_<button>` takes SDL key names, `pad_<button>` SDL controller button or
axis names such as `a`, `dpup`, `righttrigger`, `leftx-`, and `joy_<button>`
raw joystick inputs such as `b3`, `h0up`, `a1+`).

**Debug tools (F2).**
* Status: frame, speed, scanline, game mode, mission, area, camera position.
* Speed: pause, frame step, fast-forward, and the timing calibration.
* Layers: show or hide each background and the sprites.
* Mission warp: with Force on, any mission picked at the base loads the
  chosen stage.
* RAM freezes: addresses written every frame, like cheat codes.
* RAM search: narrow down EWRAM/IWRAM bytes by how they change (to find
  health, ammunition...), then freeze them.
* Viewers: memory (hex), palette, tiles (any VRAM block and palette),
  sprites (the OAM table), I/O registers.

**Testing.** `mmz --skip-intro` fast-forwards through the title, menus and
cutscenes (pressing Start / A) to the first moment of play.

## Building

Linux (needs SDL2): `make port` from the repository root, then
`build_port/mmz`.

Windows, cross-compiled with MinGW and the SDL2 MinGW development package:
`make -C port WINDOWS=1 SDL2_DIR=.../SDL2-2.30.x/x86_64-w64-mingw32 dist`
makes `build_port_win/mmz-windows.zip`.

Releases are built by GitHub Actions (`.github/workflows/build.yml`): every
push is built, and pushing a tag `v*` publishes a release with both zips.

## How it works

| File | What it does |
|---|---|
| `hw.c` | the clock, interrupts, timed DMA, timers |
| `tasks.c` | the game's cooperative tasks, on native stacks (fibers on Windows) |
| `ppu.c` | the picture: backgrounds, sprites, windows, effects |
| `audio.c` | the Direct Sound FIFOs the game's mixer feeds |
| `settings.c` | `mmz.ini` |
| `input.c` | keyboard and controllers (hot-plugging, bindings, hotkeys) |
| `ui.cpp` | the settings and debug menus ([Dear ImGui](https://github.com/ocornut/imgui), in `third_party/`) |
| `main.c` | SDL2 window, sound, save file; headless test mode |

There is no CPU emulation: the lifted code counts the cycles its
instructions and memory accesses would take, and the display moves a
scanline every 1232 cycles, so the game's timing (waiting for V-blank,
per-line effects, slowdown) follows the GBA's.

## Testing against mGBA

`build_port/mmz --ui-test DIR` opens the menus at set frames and saves
pictures of them (works with `SDL_VIDEODRIVER=offscreen`).

`build_port/mmz --headless --route ROUTE [--wav FILE]` plays a `tools/emu`
route without a window and writes its screenshots (and the sound);
`tools/compare.py PC_DIR MGBA_DIR` compares them with the mGBA runner's.
On the intro route every screenshot up to the opening mission is identical.
