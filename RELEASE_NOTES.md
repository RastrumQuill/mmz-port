Changes since v0.3.0-alpha

This is a graphics work-in-progress release. Releases stay on 0.4.x until the
wide-view graphics issues below are fixed; 0.5.0 comes only after that.

Wide view camera
- The view size is fixed for the whole stage and never resizes.
- The camera follows the game camera and stops only at the edges of a room.
- Connected parts of a level count as one room, which grows as you walk in.
  The camera jumps only on a door, a teleport, or going above/below ground.
- Dialogs and in-stage events stay in the wide view (set MMZ_EVENTS_GBA=1 for
  the old zoom to the GBA picture).
- Short blank frames during fades keep the last wide frame instead of
  flashing to the GBA picture.
- The "One-screen rooms: GBA picture" option (fit_one_screen_rooms in mmz.ini)
  is off by default. The old fit_small_rooms setting is ignored.

Backgrounds
- Background layers scroll with the wide view, not with Zero's camera.
- A layer's art outside its painted area repeats the edge, or wraps if the
  art covers the whole layout.
- Tiles the game changes at run time are drawn live, with matching colours
  outside the GBA screen.

Renderer
- New native wide-view renderer: background layers and sprites are drawn from
  game state in world space, not stretched from the GBA screen.

Debugging
- Screen effects finder: logs blends, windows, mosaic, per-line effects,
  palette fades and big or rotated sprites. See the "Screen effects" debug
  panel, or set EFFECTSDEBUG / MMZ_EFFECTS_TSV.
- View logs on stderr: "view:" (wide/GBA switches and why), "room:" (room cuts
  and growth), "fit:" (view size).
- Problem reports record the Debug window cheats, so replays stay in sync.

Known issues (must be fixed before 0.5.0)
- Black areas where a room has no level tiles (for example the lower left of
  the intro area).
- The base has not been checked with the new camera yet.
- Full-screen effects (lasers, line effects in stage 3) are not yet adapted to
  the wide view.
- The base entry teleport and its above/below-ground switch are not logged yet.
- m16 cp1: teal vs pink block not checked against the GBA yet.
- m11 cp1: orange strip at the bottom not checked yet.
- m5 station: the view is narrower than a 21:9 window.
- Making gap-fill data takes about 25 minutes.
