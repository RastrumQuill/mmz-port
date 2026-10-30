# What the GBA camera never showed

The wide view shows more of each stage than the GBA's 240x160 screen did. The level data covers most of it
(`view.c` draws stage layers from it, not from video memory), but some places have nothing: the game never
needed them. This is how the port handles them, and what is still open.

## 1. Rooms smaller than the view: fit (built, `fit_small_rooms`)

An area's chunks have a bounding box. When the box is smaller than the view in either direction, the view is
shrunk to the largest size with the same shape that fits inside it (never smaller than 240x160), and the
picture is scaled up to the window as usual: the room fills the screen instead of floating in black. The size
eases over about 15 frames when it changes, and changes only when the area does (doors, area changes).
Off: the old behaviour (the room centred, black around it).

## 2. Areas that are not rectangles: fill (built, `fill_gaps`)

Empty chunks inside the bounding box (an L-shaped area, the space below the first room) are filled once per
area by a wave function collapse over 16x16 metatiles, per stage layer:

- adjacency (which metatile may be right of / below which) and frequencies are learned from the layer's real
  chunks in the same area;
- each empty chunk takes the graphics group (graphics-set byte) of its nearest real chunk, preferring sideways
  neighbours (walls and floors continue more often sideways than up and down), and only metatiles used with
  that group, so every tile it draws is loaded;
- real cells around the gap constrain it; the cell with the fewest possibilities is collapsed first, weighted
  by frequency, seeded by the area (the same picture every time);
- a cell left with no possibility takes the metatile that agrees with most of its decided neighbours.

Filled cells are only pictures: collision, enemies and the game itself do not see them.

## 3. Still open

- **Outside the bounding box** of an area that is bigger than the view (the view keeps inside the box, so this
  shows only at its edges when the box is narrower than the view in one direction and fit is off).
- **Single-screen rooms with special graphics** (boss rooms, elevators, the base): their layers are often not
  stage chunk layers at all, so neither fit nor fill applies; the GBA picture is shown in the middle. Options:
  1. fit (zoom to 240x160 for those rooms: what the GBA showed, full screen);
  2. graphics the game has elsewhere: several rooms appear in cutscenes, in the intro, or as larger
     backgrounds (title, stage select). `asset.gfx` / `asset.map` (DTK) can export them; a per-room table could
     map a room to a picture to draw behind its edges (hand-picked, checked in, no generated content);
  3. extending the room's background layer by mirroring/tiling its edge columns (cheap; works for skies and
     plain walls, poor for detailed ones).
- **Effects sized for the GBA screen**: windows that span the whole GBA screen now span the view (the rain
  that showed as a small box); per-scanline effects (water, waves: 160-line buffers) still only cover the GBA
  rows (the decomp names them, `src/stage_layer_fx.c` / `src/stage_area_code.c`, so they can be extended).
- **Area 2's train** wraps its far layer every 240 px (one chunk); a wider view may show the wrap.
