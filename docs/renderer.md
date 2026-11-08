# Native renderer (wide view)

Status: design + stage 1 (BG layers). Replaces the reactive wide view (port/view.c up to 79d18387), which drew
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

## 5. Extent (rooms)

Computed once per (area, variant, room) and only changed by a cut:

- room = the chunks of the current area (grid nibble) reachable from the camera's chunk without crossing a
  layerMap level step > 1 or a level-15 chunk (the camera's edge-pull rule, sub_080066F8). Rooms the camera
  never shows together are never drawn together.
- recomputed only when the camera's chunk leaves the room (door, teleport, area change, Stage_Init): a cut.
- outside the room: black, for every layer. (The offline gap fill is not wired to this model yet: off.)
- active camera limits (gCamera mode 4/5) clip the extent as hard edges.

## 6. View placement and size

- The GBA rect is centred, then the view is clamped into the room's bounding box where the box is larger.
- Fit (settings.fitRooms): square pixels; the view height is fitted to the room box height, the width follows
  the window aspect; never above the asked size. The target changes only with the room; the size eases only then.
- Nothing about a world pixel depends on the view size.

## 7. Sprites (stage 2) and effects (stage 3)

- Sprites: from OAM / the extended sprite list (sprites.c) placed in world space (GBA rect origin + OAM x/y).
  Stage 1 keeps the current OAM-relative drawing (same result, no world culling by "shown" maps any more).
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
- Cross-size: motioncheck's cross-view check: the same world pixel at two view sizes must be equal.
