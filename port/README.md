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
| F5 | bookmark this place |
| F12 | report a problem |
| F9 | quick report: saves the same zip as F12 with no window or note (rebind in Settings, Controls; controllers can map it too) |
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

**Game CPU (F1, Video).** The game counts the time its code would take on a
GBA, so it slows down where the GBA would (many enemies on screen, and much
more in the wide views, where enemies around the screen are active too). By
default it gets 4x the GBA's CPU time per frame, so there are no lag
frames; the game still runs at the GBA's 59.73 frames a second (faster only
while fast-forwarding), and music and effects keep their timing. "GBA" puts
the original slowdown back (`cpu_speed` in `mmz.ini`, `--cpu-speed`).

**Reporting problems.** Set `log = 1` in `mmz.ini`: `mmz.log` next to the
executable then lists frames that took long (stalls) and stretches where the
game finished no frames, with the game's state.

**Debug tools (F2).**
* Status: frame, speed, scanline, game mode, mission, area, checkpoint,
  Zero's and the camera's position, Zero's life, and this place's bookmark
  (Copy puts it on the clipboard).
* Bookmarks: F5 saves the place you are at to `bookmarks.txt` (next to
  `mmz.ini`, one `name<TAB>mmz:...` per line; also copied to the
  clipboard). The list has Go / Copy / delete and an editable name; the
  paste box takes any bookmark (from a report or an issue). A bookmark is
  one line: `mmz:m9 a4 v1 cp0 x7164 y767 cx7164 cy720` = mission (as
  picked at the base), area, area variant, checkpoint reached, Zero x/y,
  camera centre x/y, in pixels (only `m` is needed; leaving out `x`/`y`
  starts at the checkpoint).
* Warp (Go, `--warp "mmz:..."`, route `warp mmz:...`): the game is started
  again and plays its own way there, fast-forwarded: through the title and
  menus (Start / A), the mission is forced once the game picks one (the
  base's mission choice, or a new game's first), the bookmark's checkpoint
  is set while the stage starts (so the stage's own checkpoint start runs),
  and after a second of play Zero and the camera are put at the position.
  Works from a new game and from a save. Not a memory restore, so the
  stage state is the checkpoint's: events between the checkpoint and the
  spot have not happened.
* Base warp: `mmz:base a9 v0 x10328 y1439 cx10328 cy1423` (only `base` is
  needed) is the Resistance base between missions (stage 0, mission 0).
  The warp lets the save's start (or a new game, its mission put back to
  0) go to the base, closes the terminal's menu with B and puts Zero at
  the position. F5, F12 and `where` write such a line while in the base.
* Position overlay (frame, mission, area, checkpoint, Zero, camera, life),
  Pause at frame N (also `--pause-at N`), Invincible (gHitboxes.flags bit
  0: Zero's side cannot be hurt, as the game sets it for its scenes), No
  enemies (gHitboxes.killMask bit 1, as when a boss is beaten: every enemy
  dies; bosses too, which may end the mission).
* Speed: pause, frame step, fast-forward, and the timing calibration.
* Layers: show or hide each background and the sprites.
* Mission warp: with Force on, any mission picked at the base loads the
  chosen stage.
* RAM freezes: addresses written every frame, like cheat codes.
* RAM search: narrow down EWRAM/IWRAM bytes by how they change (to find
  health, ammunition...), then freeze them.
* Viewers: memory (hex), palette, tiles (any VRAM block and palette),
  sprites (the OAM table), I/O registers.

**Problem reports (F12).** `report.txt` in the zip, the pre-filled GitHub
issue ("Where in the game") and `bookmark.txt` carry the mission, area,
variant, checkpoint, Zero and camera position, the bookmark line, the view
settings and the version and commit. Share offers GitHub, Email, Discord
and Google Drive: each saves the zip, copies the report text (with the
bookmark) to the clipboard, opens the reports folder and the target (the
issue page; a `mailto:` to `report_email`; the `report_discord` link;
Drive), and the player drags the zip in. Both addresses are in `mmz.ini`,
empty by default. (A Discord webhook could upload the zip by itself, but a
webhook address in a public program can be abused, so there is none.)

**Save states: not done.** The game runs as native code on its own task
stacks (fibers, `tasks.c`) with return addresses and C locals of the host
program on them; RAM can be saved, but the native stacks, the lifted
code's position in them and the platform layer's state cannot be put back
portably (and not across builds). The warp is the replacement.

**Routes for checks.** Besides button lines, `shot`, `poke`, `ff`,
`report`, `dump`, `end`: `warp mmz:...` (later lines wait until it is
there: their frames count from its end), `where` (prints the bookmark of
here and Zero's life), `cheat invincible|noenemies 1|0`, `viewcheck
[DIFF.png]` (below). E.g.

    0 warp mmz:m9 a4 v1 cp0 x7164 y767 cx7164 cy720
    60 shot door.png
    61 end

**Wide view check.** With a zoomed view on (`--view x3`), route
`viewcheck [DIFF.png]` compares the GBA's 240x160 picture with the part of
the wide view where the GBA screen sits, 2 frames later, and prints the
frame, the bookmark, the share of pixels that differ and the GBA screen's
offset. For the check that part is drawn from the level data, as the rest
of the view is (normally it comes from video memory), so a wrong room or
tile there shows. Only backgrounds are compared: pixels whose top two
layers on the GBA include the HUD (BG0, which the view moves to its edges)
or a sprite (the view draws its own) are left out. DIFF.png is three
240x160 pictures stacked: the GBA's, the view's part, and the differences
(red; dark grey: left out). `MMZ_VIEWCHECK=PCT` checks every frame and
prints frames where at least PCT percent differs (at most every 30
frames); the view is then drawn from the level data throughout. A frame
where the view pasted the GBA picture (not drawable) says so: it agrees by
construction. What is outside the GBA screen cannot be checked this way.

**Off-screen checks (wide view).** viewcheck only sees the part of the
wide view where the GBA screen is; a wrong room or graphics set further out
(issue #9: a test room under the train's floor) is invisible to it. Three
tools cover the rest:

* `viewprobe [PREFIX]` (route; headless): ground truth for the whole view
  is what the GBA itself draws with its camera there. The view is taken
  once from the level data (and again every 4 frames for a second: pixels
  that change, animated tiles and lights, are left out), then the game's
  camera (gCamera, mode 1 at speed 0) is put over the view a GBA screen at a
  time (overlapping; only where the game's camera rules let it be: not in a
  level-15 chunk, pulled back from level steps) and after 12 frames (tiles
  streamed, graphics sets loaded) the GBA picture is compared with what the
  view drew there. Only stage layers count (backgrounds behind scroll at
  their own speed), not HUD or sprite pixels on either side, not pixels the
  GBA changed in its last 6 frames, and not the gap fill (the GBA has
  nothing there by design). Pixels the camera never shows in play (the
  shown map below) are counted apart: a difference there is expected.
  Prints a line per probe (FLAG at `MMZ_PROBE_PCT`, default 0.5 percent)
  and a total; with PREFIX, PREFIX_N.png for flagged probes (the GBA's
  picture, the view's part, the differences: red, blue where never shown,
  green the fill, grey left out) and PREFIX_map.png (the view, red where it
  differs, blue where it differs but is never shown, dark where not
  compared). The camera is put back afterwards, but enemies saw it move:
  end the route after it (or warp).
* `viewchunks` (route): cheap checks from what the view worked out, per
  chunk with something in a stage layer: drawn from video memory off the
  GBA screen with sets that are not loaded (wrong-set), drawn outside the
  area's rectangle (outside-area), not drawable (undrawable: sets 14/15
  pointing at nothing, another area's chunk), and counts of the normal
  cases (copy: drawn from a copy with its own sets; off-own: under the GBA
  screen, its part off it drawn with its own sets; hidden: never shown).
  `CHUNKDEBUG=2` (with `VIEWDEBUG=1`) adds each chunk's level, whether the
  camera's chunk reaches it and its area byte to the chunk dump.
* `port/tools/viewsweep.py [--jobs N] [--out DIR] [--only m7cp0,base]`
  runs both at every place a warp reaches (the base, missions 1-17,
  checkpoints 0-3, `--view x3`) and lists what is flagged.

**What the camera can show (the shown map).** The level data has rooms the
camera never goes to although the chunk levels let it (the room under the
train's floor). The camera follows Zero, so view.c floods the area's
metatiles from where Zero is through the ones the collision lets him
through (the objects' solid blocks, doors, left out), and marks the GBA
screen the camera would show for each (16-24 pixels above him, pulled back
from level steps, not moving in level-15 chunks), plus every screen the
camera really showed. Stage-layer tiles outside it are not drawn (the gap
fill or what is behind shows, else black). A chunk under the GBA screen is
drawn with what is loaded on the screen, but its part off the screen with
its own graphics sets (never with the wrong ones; not drawable: nothing).
`MMZ_NOSHOWN=1` turns the shown map off; `SHOWNDEBUG=1` (`L`: from the
area's left) prints the flood around Zero.

**Gap fill (`fill_gaps`).** Everything the wide view shows that the area
does not (below, above and beside the level, and cells the shown map hides)
is filled by wave function collapse over 8x8 tiles (view.c, "tile fill").
A token is one 8x8 tilemap entry (tile, flips, palette) plus its graphics
class. Each gap cell's domain holds only tokens this area's camera actually
showed. The 4-direction adjacency rules and frequency weights are learned
from the shown cells, and the real cells next to the gap are the seeds.
Cells collapse lowest entropy first, with bitset propagation and a
deterministic seed per area. On a contradiction a growing square around the
cell is reset (3 tries); after that the cell is forced to its prior.
Region priors steer it:
- Each cell continues the nearest real edge: columns downward below the
  level (posts and pillars extend), rows sideways beside it. This uses a
  period of 1-4 seen at that edge.
- A solid edge without a period gets its commonest self-compatible body tile.
- Open edges, and anything above an outdoor layer, stay empty.
- A front layer never fills over content a back layer shows.
- The backdrop and level layers are filled separately.

Cost is about 0.1-1 s per layer, once. The result is cached in fills.bin
(format MMZFILL6, 8x8 cells) next to mmz.ini, or in `MMZ_FILLS`. Only
graphics sets of the cell's own class are used, loaded into separate fill
VRAM slots so the level's drawability does not change. Fill is drawing
only: no collision, and the layer matching never sees it, so GBA-visible
pixels are unchanged. `fill_gaps = 0` is black, `1` the tile WFC and `2`
the old column repeat. `MMZ_FILLDEBUG=1` prints timing and contradictions,
and `MMZ_FILLMAP=1` prints an ascii map.

fills.bin holds ROM-derived tile entries: it is generated at runtime, never
committed and never shipped.

Limits:
- The fill is plausible texture, not design.
- Some layers show small patches of misplaced tiles where contradictions
  forced a cell.
- Filled ground may look walkable, but it is not.
- Black stays outside a layer's bounds.

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
