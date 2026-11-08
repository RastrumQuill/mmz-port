Changes since v0.2.9-alpha

Wide view
- The view is cropped to what the GBA camera can show; it zooms to fit the height and keeps the window's shape.
- The shown map (where the camera can go) now counts ladders as open.
- Level art the GBA never shows is drawn only where it goes on from shown space.
- Train level drawn right across the wide view.
- Objects outside the rooms you can reach are hidden.

Gap fill
- New offline WFC gap fill for empty parts of areas. Off by default (black).
- To turn on: Settings (F1) > Video > "Fill empty parts of areas" > Tile fill.
  Then press "Make it now" (about 25 min, 4 cores, runs in the background),
  or run `mmz --gen-fills` once. It writes fills.bin next to mmz.ini.
- fills.bin is made from your ROM and is never shipped.

Reports
- Quick report: F9 saves a full report zip with no window (can be mapped to a controller).
- Reports cut file paths to file names and leave personal mmz.ini lines out.

Debug window (F2)
- Cheats: invincible, no enemies, infinite life.
- Teleport: warp to a mission and checkpoint, or move Zero to a point (only open, reachable spots).
- Wide-view options, overlays (shown map, gap fill, chunk sources, crop), logging.
- Checks: view check, view probe, view chunks.

Known issues
- m16 cp1: teal vs pink block not checked against the GBA yet.
- m11 cp1: orange strip at the bottom not checked yet.
- m5 station: the view is narrower than a 21:9 window.
- Making fill data takes about 25 minutes.
