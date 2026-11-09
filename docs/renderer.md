# Native renderer (wide view)

Status: design + stage 1 (BG layers) + stage 2 (sprites). Replaces the reactive wide view (port/view.c up to 79d18387), which drew
the GBA's video memory and bolted a world around it (shown/kept maps, chunkOff, crop, VRAM-matched layers).
The PPU emulation (port/ppu.c) stays as the reference picture and the fallback.

## 1. Principle

The PC picture is rendered from **game state**, not from hardware registers or video memory history:

    picture = f(game state this frame, output rect)

- game state = camera, area + variant, the three StageLayer structs (positions, scale, offset, shake, handlers),
  the stage's live metatile buffer (patches), graphics-set table, progress flags, object/OAM data.
- output rect = any size / aspect, in world pixels; the GBA's 240x160 is just one camera rect inside it.
- Nothing depends on what was visited, what was in VRAM before, or the output size (size only changes how much
  is visible). Same state + same rect -> same pixels.

## 2. Data flow (per frame, at V-blank)

```
ROM tables ─┐                            ┌─> Scene.layers[0..2]  (world-space tilemaps, own gfx per chunk)
RAM state ──┼─> scene_build() (scene.c) ─┼─> Scene.extent        (room chunk mask, per area/room, cut-only)
            │                            ├─> Scene.camera        (GBA rect in world px)
            │                            └─> Scene.sprites / fx  (stage 2 / 3)
            └─> GfxCache (per area, per (hi,lo) set pair, decoded from ROM; built at area load)

scene_render(rect, w, h) ─> rows in parallel: per output pixel -> world (x,y) per layer -> metatile -> tile
                            -> 4bpp pixel from the chunk's own set -> palette -> composite (priority/blend)
```

## 3. What the game state provides (MMZ1 addresses; see docs/wideview-research.md)

| Item | Source |
|---|---|
| area, variants | gStage.area 0x0200520C, gStage.areaVariants 0x02005208 |
| area descriptor | sAreaTable 0x08293BEC [area][variant]: left/top chunk, gfxMap, layerMap (levels) |
| layer state | gStage.layers[3] 0x02004FF0 (0x70 each): bg.x/y +0x14 (= pos*scale>>8 + offset, area px), metatiles +0x20, chunkTiles +0x24, layout +0x28, viewOffset +0x2C (shake, 24.8), pos +0x34, scale +0x44, offset +0x4C, bgId +0x54 |
| layer 0 metatiles (with live patches) | gStage.metatileStride 0x0200543C, gStage.metatiles 0x02005440 (area-local, row stride) |
| layers 1/2 | their layout (chunk map) + chunkTiles from ROM |
| BG enable / priority | gBgRegs 0x02004F30 (the game's shadow DISPCNT/BGCNT), not the IO registers |
| graphics sets | gfxMap per chunk (hi = slot 0, lo = slot 1; 14 = right chunk, 15 = chunk below); sStageGfxSets 0x086B0000 |
| loaded sets | gStage.gfxSlots 0x02005430 (used only to take live animation, see 4) |
| camera | gStage.camera 0x02005200 (centre, 24.8); gCamera 0x02022C44 limits/mode |

## 4. Layers (modelled, stage 1)

A layer k is drawn when the game has it set up for the current area (layer.areaId, valid ROM pointers) and its
BG is on in gBgRegs. A world-space layer pixel at area pixel (lx, ly):

- position: layer pixel = output pixel's world position - GBA rect origin + bg.x/y + shake (viewOffset>>8).
  This is the game's own rule (StageLayer_Draw) evaluated for any output pixel, at any size; parallax falls out
  of bg.x already carrying scale/offset.
- layer 0: metatile = gStage.metatiles[row*stride + col] (live patches: doors, blocks). layers 1/2: layout chunk
  -> chunkTiles -> metatile. metatile -> 4 tilemap entries (bg.metatiles).
- graphics: the chunk under the pixel's **layer-0 world position** gives the set pair (with the 14/15
  indirection): exactly the sets the game would have loaded with the camera there. Tiles and palette come from
  GfxCache[(area, hi, lo)]: the ROM data of both sets decoded once at area load into their own VRAM/palette
  ranges (masks record which bytes/colours the sets own). Bytes the sets do not own (common tiles, common
  palettes) are read live (they are the same for every chunk). When the pair equals the loaded slots the live
  VRAM/palette is used for the whole pair, so tile and palette animations play there; elsewhere the decoded
  frame shows. The choice depends only on this frame's gfxSlots, never on history.
- backgrounds (scale != 1:1) repeat sideways and continue their top/bottom rows (a port extension; the data
  has no repeat).
- no data at a position (null chunk, outside the layout): transparent (what is behind shows).

### Labels (each chunk's background, known ahead)

`labels_build` (view.c) labels every chunk of the area once per area and
flag key (CUR_AREA, the area's state bits in 0x02005208 -- which area
descriptor, e.g. above/below ground -- and a hash of the progress block at
0x02022AD0..+0x1B). A change of key relabels and is logged
(`labels: ... flags changed`). A label is the stage layers the chunk's layer
map cell has handlers for and its graphics set pair; a chunk with neither
(door / edge chunks) takes the nearest labelled chunk's in its row/column
(`neighbour`), else is flagged `empty`. Outside the GBA screen the renderer
draws each chunk's labelled layers with its pair decoded from the ROM (gcache),
whatever video memory holds or the game has on; inside, the PPU's own
registers and video memory. Layer 0's metatile buffer cells the game has not
built yet (0) come from the area's layout. A BG the game has not turned on
yet goes behind everything (priority 3): the area setup's BGCNT is not what the
layer's handler ends up with (m1 cave BG3: setup 1, handler 3) -- not derived
from the ROM yet. `MMZ_LABELS=0` restores the old live-VRAM rule;
`MMZ_LABELS_TSV=path` appends the table (generated: docs/wideview-labels.tsv
via port/tools/labels_tsv.py). Each frame the renderer checks that no stage
layer is drawn outside its chunk's labels (`labelcheck:`; motioncheck fails
on it).

Known gaps: palette bank 1 in m1 (17-31) is loaded by something other than the
set pair (not in gcache): until the game loads it, those colours come from
live palettes. BG priorities for not-yet-on layers are a rule, not data.

## 5. Extent (rooms)

Computed once per (area, variant, room) and only changed by a cut:

- room = the chunks of the current area (grid nibble) reachable from the camera's chunk without crossing a
  layerMap level step > 1 or a level-15 chunk (the camera's edge-pull rule, sub_080066F8). Rooms the camera
  never shows together are never drawn together.
- recomputed only when the camera's chunk leaves the room (door, teleport, area change, Stage_Init): a cut.
- level-15 chunks of the area next to the room (the camera never centres there, but they hold the walls / ground
  the GBA screen shows at the room's edge) are drawn with it; they do not join rooms and are not in its box.
- outside the room: black, for every layer. The offline gap fill (fills.bin, `fill_gaps`) is not used by this
  renderer at all: whatever the setting, the picture is the level data; black is where the area grid has no chunk.
- active camera limits (gCamera mode 4/5) clip the extent as hard edges.

## 6. View placement and size

- The GBA rect is centred, then clamped per axis (place_axis): sideways into the room's box, up/down into the
  room's rows **under the view's columns** (local_span), then sideways into the room's columns over the rows shown.
  A room is often not a rectangle (m1: the base corridor is one chunk tall, its room reaches 5 rows down through a
  shaft 16 chunks away): clamping into the bounding box pinned the GBA rect to the top with 2/3 of the view black.
- Fit (settings.fitRooms): square pixels; the view height is fitted to the room's height under the current view's
  columns (not the room box), the width follows the window aspect; never above the asked size, down to the GBA
  screen (then the GBA picture is shown). The size eases (0.15/frame) when that height changes.
- Layers whose BG is off on the GBA screen (the handler of the layer map cell under the screen's top-left has
  none) are drawn outside the GBA rect where the chunk's own cell has a native handler for them, scrolled by the
  game's rule from the screen position (pos*scale>>8 + offset). Before, such a layer (the m1 cave background) was
  black in the wide view until the GBA screen's top-left entered the cave, then appeared at once.
- Nothing about a world pixel depends on the view size.

## 7. Sprites (stage 2) and effects (stage 3)

### Sprites (stage 2, port/sprites.c + draw_sprite_row in port/view.c)

The game state for sprites is the SpriteRenderer lists (struct Sprite: frame pieces, world position 24.8, attrs,
flips, angle/scale) that the objects queue every frame, drawn by SpriteRenderer_Draw (sub_0800338C) through each
sprite's draw callback with a DrawContext (the screen's top-left in the world). The callbacks are the only code
that knows each sprite kind's layout (pieces, flips, quarter turns, affine pieces), so the port runs them for the
world instead of re-implementing them:

- Every frame the game draws, the renderer is run once for the GBA screen (its OAM, as on the GBA) and again for
  every screen-sized cell (240x160, anchored on the GBA screen) that a view of the current size can cover for
  **any** placement of the GBA rect in it (ox 0..w-240, oy 0..h-160, plus the callbacks' -128/-64 reach). So the
  set of cells depends on the view size only, never on this frame's placement, the room fit or whether the last
  frame was drawn wide; a sprite that is in the view is in the list at every size.
- Each extra pass runs on a copy of the game's RAM (restored after it: no side effect survives) with the context
  moved by whole screens and **the whole OAM buffer free**: a callback draws a sprite only if all its pieces fit,
  and the old path started the extra passes after the GBA pass's entries, so with many sprites on screen the far
  ones were dropped, more of them the more cells ran (size-dependent, and a sprite crossing the GBA edge could
  lose its outer pieces).
- Pieces are listed once: the GBA pass keeps all it makes, in OAM order (the PPU's order, so same-priority
  overlaps inside the GBA rect resolve as on the GBA); an extra pass drops what the GBA pass also makes (GBA-
  relative -128..239 x -64..159) and otherwise keeps a piece in the cell holding its top-left (the outermost cells
  keep everything outwards).
- Each piece has its world position (ExtSprite.wx/wy = context top-left + screen position). It is drawn at that
  world position relative to the screen its renderer drew for; that screen is the GBA rect (shake included),
  which is what makes the GBA rect pixel-identical to the PPU (checked with `MMZ_VIEWCHECK_SPRITES=1`, see 9).
- The list is swapped when the game DMAs its OAM buffer (hw.c), so it always belongs to the frame on screen.
- Compositing is the PPU's: per output pixel the top two of {sprite, BG0-3, backdrop} by priority (sprites first
  at equal priority, lowest list index first among sprites), affine (matrices from OAM), flips, 1D/2D mapping,
  4/8 bpp, OBJ window (mode 2), semi-transparent (mode 1) blending with the second target, windows/blend
  registers of the GBA line (rows outside the GBA rect use the nearest GBA line's registers).
- HUD/menus/cutscenes: unchanged. A HUD renderer's context is fixed, so its extra passes produce nothing
  (moved a screen away its pieces are outside the callbacks' range); HUD sprites stay where the GBA screen has
  them. Frames that fall back to the PPU picture draw OAM as before.

What the game itself culls (game logic, not changed; the view only draws what exists):

- Enemy spawning / despawning (spawn manager sub_0800E02C): objects are created only within a range of the
  camera and removed beyond another. The port already widens both ranges with the view (port_imm_SPAWN_RANGE_*,
  port_imm_CULL_* in view.c set_ranges, existing before stage 2), so at the view's edge enemies still appear /
  disappear, about one GBA margin outside the view; and their number depends on the view size (motioncheck's
  `xsprite` cross-size check reports this; it is game state, not rendering).
- Objects that stop updating / are removed by their own code when off the GBA screen (shots leaving the screen
  are deleted by their update when out of the camera's range): they vanish at that distance from the GBA rect.
  motioncheck lists these as `sprite` flags with their distance from the GBA rect (`far`).
- Blinking (invincibility, items about to vanish): the object skips drawing on alternate frames; motioncheck
  explains it (`blinks`).

### Effects (stage 3)

- Blending/fog/fades: BLDCNT/BLDALPHA/BLDY come from the game's shadow registers per frame and apply to the
  whole output (they are not positional). Windows over the full GBA width/height extend over the output; small
  windows (dialogs) stay in the GBA rect.
- Line effects (H-blank tables) are functions of the output row relative to the GBA rect (slant, wave bands, the
  area 4 water surface at its world y): fx_regs(row) is sampled per output row at any resolution, so no
  160-entry table is stretched. Stage 1 keeps the existing recogniser (find_fx).

## 8. Fallback

The native picture is used during stage play (game mode 3/4, no event script, a stage layer set up). Menus,
cutscenes, fades with no stage layer, anything not modelled: the PPU picture, scaled to the window.

## 9. Testing

- Match: headless `MMZ_VIEWCHECK=0` / route `viewcheck` render the native picture and compare its GBA rect with
  the PPU frame (pixel-identical expected; differences reported with counts). The HUD is excluded (moved).
- Temporal: port/tools/motioncheck.py (scenarios in port/tools/motion_scenarios.txt) at x2, x3, 1120x480,
  900x520: zero unexplained pop/block events outside the GBA rect except at cuts (area/room change, teleport).
- Static (per picture, motioncheck `static`): share of the view outside the GBA rect that is unfilled (layer map
  id 7), the GBA rect pushed off-centre with a mostly unfilled band on the far side, and drawn content outside the
  GBA rect from another room than the GBA screen's (config `regions` / `regionkey`: regionaudit.py --rooms-json).
  Limits in the scenario file (`static black_mean 0.08 black_max 0.30 foreign_max 0.01 events_bg 0`); any
  unexplained BG event (pop/block/layer) also fails the run. Headless runs use the window's fit (`fit_small_rooms`; env MMZ_HEADLESS_NOFIT turns it off).
- Cross-size: motioncheck's cross-view check: the same world pixel at two view sizes must be equal.
- Sprites: `MMZ_VIEWCHECK=0 MMZ_VIEWCHECK_SPRITES=1` compares sprite pixels in the GBA rect too. motioncheck's
  `sprite` flag: a sprite appearing / vanishing outside the GBA rect with no sprite near it in the other picture
  (moved by every motion, within --sprite-reach) and away from the view's leading edge; `gba_edge` when within
  --edge px (default 2: touching) of the GBA rect (a renderer cut at the old screen edge: must be 0), else `far` (game spawn/removal).
  `xsprite`: sprite pixels drawn at one view size and not at the other.

Stage 2 results (x3, all scenarios): BG events 18 (= stage 1), sprite `gba_edge` 0. Control:
`MMZ_SPRITES_GBA_ONLY=1` (sprites cut at the GBA edge) gives `gba_edge` in m1spr (3 at x2 and x3) and m7spr (1).
Remaining `far` sprite flags are objects ending (shots, dust) at varying distances; the cross-size `xsprite`
differences (m1spr x2|x3: 20/80 frames, also before stage 2) come from the size-scaled spawn/cull ranges.
