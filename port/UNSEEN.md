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
area, below the level only (worked out once into `fills.bin`, `make -C port fills`): each empty 16x16
metatile repeats the lowest real metatile above it in its column, so posts, pillars and walls go on down, drawn
with the graphics of the real chunk above. Gaps above or beside the level (sky, open space) stay as they are.

(Tried first: a wave function collapse over the area's metatiles, then extending every edge. Both put blocks
where they do not belong: the commonest wall block in stacks, a lamp's top up into the sky, stripes in the
desert sky.)

Filled cells are only pictures: collision, enemies and the game itself do not see them.

## 3. Per-line scroll effects: worked out per layer (built, `MMZ_LINE_FX=0` turns it off)

Five stage layer draw handlers scroll a BG line by line with a 160-line H-blank DMA table (the decomp's
`src/stage_layer_fx.c` and `src/stage_area_code.c`): a slant (one pixel every 4 lines) with a shimmer band
below it, shimmer bands at the bottom of the screen, a shimmer on every line, and area 4's water (lines from
the surface up sway sideways, more the farther from the surface, up to 8 px). Replaying the table covers
only the GBA rows. Instead, the port recognises the handler (the layer's draw address), finds the table's
phase (and whether it starts a line late) from the lines the game wrote, and works the offset out for every
row of the view from the same formula: the slant continues above the GBA screen, the bands below it, and
the water's surface stays at its place in the world (layer row 400). Only the waved BG moves; sprites and
the other layers are untouched. If the lines do not match the formula (the game is not running the table
that frame, or it changed), the lines are used as they are.

The water's original alternates neighbouring lines by an eighth of a period (an interlace that only reads
right at the GBA's size); the view uses the middle of the two.

Still to do: drawing at the display's resolution (sub-pixel offsets), so the 1-pixel shimmer and the sway
are smooth when scaled up.

## 4. Still open

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
  that showed as a small box). Per-line scroll effects: see 3.
- **Area 2's train** wraps its far layer every 240 px (one chunk); a wider view may show the wrap.
