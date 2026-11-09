#!/usr/bin/env python3
"""Pop-in check for a wide view, in motion (temporal, not stills).

Generic: nothing here knows the game. The game's specifics (route commands
to run after the warp, memory to log, view sizes) live in the scenario
file's config part. What the emulator must provide is the route command
`shots PREFIX K [ADDR:LEN,...]`: every K frames PREFIX_FRAME.png (the view),
PREFIX_FRAME.layers.png (red = per-pixel top | second << 4 layer ids, 4 =
sprites, bit 3 = gap fill; optional) and a PREFIX.tsv line: frame, view
size, the GBA screen's place in the view (ox oy) and in the world (gx gy),
camera, player, DISPCNT, each BG's CNT/HOFS/VOFS, the IO registers
0x00-0x55 (hex) and the watched memory (hex).

Per pair of pictures, outside the GBA screen:
  * each pixel is moved back by every candidate motion (each shown BG's
    scroll change, so parallax layers have their own; the camera's; none,
    for the HUD); a pixel that matches under any of them is scrolling;
  * the leading edge (a motion's source off the view), sprites (now or
    before, from the layer map) and pictures where most of the GBA screen
    also changes (fades, room changes) are not judged;
  * the rest is grouped into blocks (4x4 cells, components >= 8x8). A block
    is explained (kept in summary.json with the reason, not flagged) when
    its content was at the same place (per motion) in the last --history
    pictures (tile animation; not for pops bigger than 32x32), when its
    change is faint, when it is the old block with its colours remapped one
    to one (palette animation), or when it is the last picture moved <= 8 px.

Flags:  pop     black <-> non-black that no motion explains
        block   other tiles appearing / changing inside the view (>= 8x8)
        layer   a BG turned on/off in DISPCNT, or most of the outside
                changing at once while the GBA screen does not
        sprite  a sprite (layer map id 4) appearing or vanishing outside the
                GBA screen with no sprite near it in the other picture (per
                motion, within --sprite-reach px) and away from the view's
                leading edge; `gba_edge` when it is within --edge px of the
                GBA screen (a renderer cut at the old screen edge), else
                `far` (usually the game spawning / removing an object)
        xview   the same frame at two view sizes, aligned on the GBA screen:
                a region black at one size and drawn at the other (where
                both views cover it; HUD bands left out); `xsprite` the
                same for sprite pixels (from the layer maps)

Static checks, per picture (they fail the run, exit 1): the share of the view
outside the GBA screen that is unfilled (`black`), the GBA screen pushed
off-centre with a mostly unfilled band on the other side (`place`), drawn
content outside the GBA screen from another room than the GBA screen's
(`foreign`, from the config's `regions CMD` / `regionkey EXPR`), and any
unexplained background event. Limits: config `static NAME LIMIT ...`;
`env NAME=VALUE` is passed to the emulator.

Every change of a render register (DISPCNT, BGxCNT, windows, blending,
mosaic; `reg NAME OFF LEN` adds one) or watched memory is logged with its
frame (flag_changes), and each event lists the ones in its frames.

Output per scenario and view (OUT/NAME/VIEW/): summary.json, sheet.png
(flagged frames, before | after; red pop, yellow block, magenta layer,
blue the GBA screen), walk.mp4 (ffmpeg) or walk.gif; per scenario
OUT/NAME/xview_sheet.png; OUT/summary.json for all. Pictures are deleted
as they are used (--keep keeps them).

    port/tools/motioncheck.py [--scenarios port/tools/motion_scenarios.txt]
        [--only issue11,m1cp0] [--views x2,x3,1120x480,900x520] [--every 1]
        [--out DIR] [--jobs 2] [--mmz build_port/mmz]

Scenario file: config lines first (`views`, `settle N`, `setup T CMD`,
`watch NAME ADDR:LEN`, `reg NAME OFF LEN`), then per scenario a line
`[name]`, `warp BOOKMARK`, `frames N`, `setup T CMD` (after the config's;
T counted from the warp), and route lines `T KEYS` (T counted
from when the shots start; KEYS as the route's: RIGHT,A / - for none) or
`repeat T0 T1 PERIOD HOLD KEYS ELSE`. Run from the repository root with the
ROM in the environment as the emulator needs it (MMZ_ROM).
"""
import argparse, json, os, re, shutil, subprocess, sys, concurrent.futures as cf
from PIL import Image, ImageChops, ImageDraw, ImageFilter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "../.."))
SETTLE = 90        # frames after the warp before the shots
THRESH = 24        # luma difference that counts as a change
CELL = 4
FAINT = 56         # a block whose change stays this small is a palette animation / glow
SPRITE_LAYER = 4   # the layer map's id for sprites (top layer = value & 7)

# ------------------------------------------------------------ scenarios

def parse_scenarios(path):
    out, cur = [], None
    for line in open(path):
        line = line.split("#", 1)[0].strip()
        if not line: continue
        if cur is None and not line.startswith("["): continue   # the config part
        m = re.match(r"\[(\S+)\]$", line)
        if m:
            cur = {"name": m.group(1), "warp": None, "frames": 600, "lines": [], "setup": []}
            out.append(cur); continue
        w = line.split()
        if w[0] == "warp": cur["warp"] = line[5:].strip()
        elif w[0] == "frames": cur["frames"] = int(w[1])
        elif w[0] == "setup": cur["setup"].append((int(w[1]), " ".join(w[2:])))
        elif w[0] == "repeat":
            t0, t1, per, hold = map(int, w[1:5])
            keys, other = w[5], w[6] if len(w) > 6 else "-"
            for t in range(t0, t1, per):
                cur["lines"].append((t, keys)); cur["lines"].append((t + hold, other))
        else: cur["lines"].append((int(w[0]), " ".join(w[1:])))
    return out

def route_text(sc, cfg, prefix, every):
    S = cfg["settle"]
    watch = ",".join(w for _, w in cfg["watch"])
    r = [f"0 warp {sc['warp']}"] + [f"{t} {c}" for t, c in cfg["setup"] + sc.get("setup", [])] + [f"{S} shots {prefix} {every} {watch}".rstrip()]
    for t, cmd in sorted(sc["lines"], key=lambda x: x[0]):
        if t < sc["frames"]: r.append(f"{S + t} {cmd}")
    r += [f"{S + sc['frames']} shots -", f"{S + sc['frames'] + 1} end"]
    return "\n".join(r) + "\n"

# ------------------------------------------------------------ analysis

STR = {"png", "io", "watch"}

def parse_row(head, line):
    v = line.rstrip("\n").split("\t")
    if len(v) != len(head): return None
    return {k: (x if k in STR else int(x)) for k, x in zip(head, v)}

def follow_tsv(p, proc):
    """the sidecar's rows as the game writes them (ends when the game does)"""
    import time
    while not os.path.exists(p):
        if proc.poll() is not None: return
        time.sleep(0.2)
    with open(p) as f:
        head = None; buf = ""
        while True:
            line = f.readline()
            if not line:
                if proc.poll() is not None:
                    rest = f.read()
                    if not rest: return
                    line = rest
                else:
                    time.sleep(0.05); continue
            buf += line
            if not buf.endswith("\n"): continue
            line, buf = buf, ""
            if head is None: head = line.rstrip("\n").split("\t"); continue
            r = parse_row(head, line)
            if r: yield r

def unwrap_add(rows, r):
    """r's layer origins in view pixels per BG (ox - hofs, unwrapped) and the camera's"""
    prev = rows[-1] if rows else None
    for b in range(4):
        acc = list(prev[f"A{b}"]) if prev else [0, 0]
        if prev:
            for i, k in enumerate("hv"):
                d = (r[f"bg{b}{k}"] - prev[f"bg{b}{k}"]) % 512
                if d >= 256: d -= 512
                acc[i] += d
        r[f"A{b}"] = acc
        r[f"L{b}"] = (r["ox"] - acc[0], r["oy"] - acc[1])
    r["Lcam"] = (r["ox"] - r["gx"], r["oy"] - r["gy"])
    rows.append(r)

def motions(rows, j, i):
    """candidate shifts (dx, dy) taking picture j to picture i"""
    a, b = rows[j], rows[i]
    s = {(0, 0), (b["Lcam"][0] - a["Lcam"][0], b["Lcam"][1] - a["Lcam"][1])}
    for k in range(4):
        if not (b["dispcnt"] >> (8 + k) & 1) and not (a["dispcnt"] >> (8 + k) & 1): continue
        s.add((b[f"L{k}"][0] - a[f"L{k}"][0], b[f"L{k}"][1] - a[f"L{k}"][1]))
    return s

def shifted(img, dx, dy):
    o = Image.new(img.mode, img.size, 0)
    o.paste(img, (dx, dy))
    return o

def bin_mask(img, thr=THRESH):
    return img.point(lambda v: 255 if v > thr else 0)

def components(cells, W, H):
    seen, comps = set(), []
    on = {(x, y) for y in range(H) for x in range(W) if cells[y * W + x]}
    for p in on:
        if p in seen: continue
        st, c = [p], []
        seen.add(p)
        while st:
            x, y = st.pop(); c.append((x, y))
            for q in ((x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1), (x + 1, y + 1), (x - 1, y - 1), (x + 1, y - 1), (x - 1, y + 1)):
                if q in on and q not in seen: seen.add(q); st.append(q)
        xs, ys = [q[0] for q in c], [q[1] for q in c]
        comps.append((min(xs), min(ys), max(xs) + 1, max(ys) + 1, len(c)))
    return comps

def crop_match(B, box, A, dx, dy, tol=0.08):
    """B's box against A's box moved back by (dx, dy): matches if almost every pixel agrees"""
    x0, y0, x1, y1 = box
    W, H = A.size
    if x0 - dx < 0 or y0 - dy < 0 or x1 - dx > W or y1 - dy > H: return False
    d = ImageChops.difference(B.crop(box), A.crop((x0 - dx, y0 - dy, x1 - dx, y1 - dy))).convert("L")
    h = d.histogram()
    bad = sum(h[THRESH + 1:])
    return bad <= tol * (x1 - x0) * (y1 - y0)

def rows_shift_match(B, box, A, reach=24):
    """every row of B's box is the last picture's row moved sideways by up to reach (line scroll / H-blank effects)"""
    x0, y0, x1, y1 = box
    W = A.size[0]
    for y in range(y0, y1):
        row = B.crop((x0, y, x1, y + 1))
        ok = False
        for dx in sorted(range(-reach, reach + 1), key=abs):
            if x0 - dx < 0 or x1 - dx > W: continue
            h = ImageChops.difference(row, A.crop((x0 - dx, y, x1 - dx, y + 1))).convert("L").histogram()
            if sum(h[THRESH + 1:]) <= 0.05 * (x1 - x0): ok = True; break
        if not ok: return False
    return True

def palette_remap(a, b):
    """b is a with its colours swapped (each colour of a going to one colour of b, for 93% of the pixels)"""
    m = {}
    pa, pb = a.convert("RGB").tobytes(), b.convert("RGB").tobytes()
    for k in range(0, len(pa), 3):
        p, q = pa[k:k + 3], pb[k:k + 3]
        m.setdefault(p, {}).setdefault(q, 0); m[p][q] += 1
    n = sum(sum(v.values()) for v in m.values())
    keep = sum(max(v.values()) for v in m.values())
    return n and keep >= 0.93 * n and len(m) > 1

SPRITE_REACH = 12   # px a sprite may move between two pictures and still be the same one
EDGE = 2            # px from the GBA screen: a sprite cut there (touching it) is the renderer's

def mask_comps(mask, min_cells=4):
    """connected parts of a binary L mask, in pixels (boxes of 4x4 cells, >= 2x2 cells, >= min_cells)"""
    W, H = mask.size
    cw, ch = W // CELL, H // CELL
    cells = [v >= 64 for v in mask.resize((cw, ch), Image.BOX).tobytes()]
    return [(c[0] * CELL, c[1] * CELL, c[2] * CELL, c[3] * CELL) for c in components(cells, cw, ch)
            if c[2] - c[0] >= 2 and c[3] - c[1] >= 2 and c[4] >= min_cells]

def gba_dist(box, g):
    """pixels between a box and the GBA rect g (0: touching / overlapping)"""
    dx = max(g[0] - box[2], box[0] - g[2], 0); dy = max(g[1] - box[3], box[1] - g[3], 0)
    return max(dx, dy)

BLINK = 8   # pictures back a blinking sprite is looked for

def sprite_flags(Aspr, Bspr, S, judge, gA, gB, reach, edge, older=()):
    """sprites appearing / vanishing outside the GBA screen (judge: where to look).
    older: (sprite mask, motions to B) of the pictures before A: a sprite that
    appears where one was a few pictures ago, or vanishes where there was
    none a few pictures ago, blinks (explained)"""
    out = []
    for name, src, dst, sgn, g in (("appear", Bspr, Aspr, 1, gB), ("vanish", Aspr, Bspr, -1, gA)):
        # the other picture's sprites, moved by every motion into this one's frame, grown by reach
        other = None
        for dx, dy in S:
            o = shifted(dst, sgn * dx, sgn * dy)
            other = o if other is None else ImageChops.lighter(other, o)
        other = other.filter(ImageFilter.MaxFilter(2 * (reach // 2) + 1))
        if name == "appear": look = ImageChops.darker(src, judge)
        else:   # judge is B's frame: move it back to A's by the camera motion (any motion keeps it conservative)
            jj = None
            for dx, dy in S:
                o = shifted(judge, -dx, -dy)
                jj = o if jj is None else ImageChops.darker(jj, o)
            look = ImageChops.darker(src, jj)
        for box in mask_comps(look):
            if other.crop(box).histogram()[255] > 0: continue   # a sprite was near: it moved
            d = gba_dist(box, g)
            why = None
            for om, oSB, oSA in older:
                hit = False
                for dx, dy in (oSB if name == "appear" else oSA):
                    c = shifted(om, dx, dy).crop(box).histogram()[255]
                    if c > 0: hit = True; break
                if name == "appear" and hit: why = "blinks (a sprite was here a few pictures ago)"; break
                if name == "vanish" and not hit: why = "blinks (no sprite here a few pictures ago)"; break
            out.append({**({"explained": why} if why else {}), "kind": "sprite", "what": name, "box": list(box), "cells": (box[2] - box[0]) * (box[3] - box[1]) // (CELL * CELL),
                        "gba_dist": d, "where": "gba_edge" if d <= edge else "far"})
    return out

# ------------------------------------------------------------ static (per picture)

UNFILLED = 7       # the layer map's top id where nothing is drawn (outside the world / room)

def static_check(B, lm, r, regions=None, chunk=(240, 160)):
    """one picture, on its own: how much of the view outside the GBA screen is
    unfilled (black: the layer map's id 7, else luma < 6), whether the GBA
    screen is pushed to one side with an unfilled band on the other (the
    camera should keep it centred unless the world ends there), and how much
    of the drawn outside comes from another room than the GBA screen's
    (regions: world chunk "cx,cy" -> room, from the scenario config)"""
    W, H = B.size
    ox, oy = r["ox"], r["oy"]
    if W <= 240 and H <= 160: return {"wide": 0}
    if lm is not None: none = lm.point(lambda v: 255 if v & 7 == UNFILLED else 0)
    else: none = B.convert("L").point(lambda v: 255 if v < 6 else 0)
    out = Image.new("L", (W, H), 255); ImageDraw.Draw(out).rectangle([ox, oy, ox + 239, oy + 159], fill=0)
    n_out = max(1, out.histogram()[255])
    black = ImageChops.darker(none, out).histogram()[255] / n_out
    def band(box):
        x0, y0, x1, y1 = max(0, box[0]), max(0, box[1]), min(W, box[2]), min(H, box[3])
        if x1 <= x0 or y1 <= y0: return 0.0, 0
        c = none.crop((x0, y0, x1, y1)); return c.histogram()[255] / ((x1 - x0) * (y1 - y0)), (x1 - x0) * (y1 - y0)
    st = {"wide": 1, "black": round(black, 4)}
    # placement: per axis, the GBA screen's offset from the view's centre and the far side's band
    place = []
    for axis, lo, hi, far_lo, far_hi in (("x", ox, W - ox - 240, (0, 0, ox, H), (ox + 240, 0, W, H)),
                                         ("y", oy, H - oy - 160, (0, 0, W, oy), (0, oy + 160, W, H))):
        if abs(lo - hi) <= 16: continue
        fb, area = band(far_hi if lo < hi else far_lo)
        if fb > 0.5 and area: place.append({"axis": axis, "offset": (lo - hi) // 2, "far_unfilled": round(fb, 3)})
    st["place"] = place
    st["offset"] = [(ox - (W - ox - 240)) // 2, (oy - (H - oy - 160)) // 2]
    if regions is not None and "gx" in r:
        cw, ch = chunk
        def lab(x, y):
            gx, gy = r["gx"] - ox + x, r["gy"] - oy + y
            return regions.get(f"{gx // cw},{gy // ch}")
        gl = {}
        for y in range(oy + 4, oy + 160, 8):
            for x in range(ox + 4, ox + 240, 8):
                l = lab(x, y)
                if isinstance(l, int) and l >= 0: gl[l] = gl.get(l, 0) + 1
        home = max(gl, key=gl.get) if gl else None
        nb = nf = 0; boxes = {}
        npx = none.load(); opx = out.load()
        for y in range(4, H, 8):
            for x in range(4, W, 8):
                if not opx[x, y] or npx[x, y]: continue
                nb += 1
                l = lab(x, y)
                if not (l == home or (isinstance(l, list) and home in l)):   # (a list: a wall chunk at the edge of these rooms)
                    nf += 1
                    k = (r["gx"] - ox + x) // cw, (r["gy"] - oy + y) // ch
                    boxes[k] = boxes.get(k, 0) + 1
        st["foreign"] = round(nf / max(1, nb), 4)
        st["home_room"] = home
        if nf: st["foreign_chunks"] = sorted(f"{k[0]},{k[1]}" for k in boxes)[:12]
    return st

def analyse(src, rows, history, keep=True, reach=SPRITE_REACH, edge=EDGE, regions_for=None):
    """src: sidecar rows as they come; rows: filled here. yields per picture: (index, flags, stats)"""
    hist = []      # (row index, RGB image, luma, black mask)
    nl = lambda im: im.convert("L")
    for r in src:
        unwrap_add(rows, r)
        i = len(rows) - 1
        try:
            B = Image.open(r["png"]).convert("RGB")
            if not keep: os.remove(r["png"])   # in memory from here: the disk holds one picture per run
        except Exception:
            continue
        BL = nl(B)
        Bblack = BL.point(lambda v: 255 if v < 6 else 0)
        Bspr = Bfill = lm = None   # sprites / gap fill, from the view's layer map (PREFIX_FRAME.layers.png) when there is one
        lp = r["png"][:-4] + ".layers.png"
        if os.path.exists(lp):
            lm = Image.open(lp).getchannel(0); lm.load()
            if not keep: os.remove(lp)
            Bspr = lm.point(lambda v: 255 if v & 7 == SPRITE_LAYER or v >> 4 & 7 == SPRITE_LAYER else 0)   # blended sprites too
            Bfill = lm.point(lambda v: 255 if v & 8 else 0)
        flags, stats = [], {}
        static = static_check(B, lm, r, regions_for(r) if regions_for else None)
        if hist and hist[-1][0] == i - 1 and B.size == hist[-1][1].size:
            j, A, AL, Ablack, Aspr = hist[-1]
            W, H = B.size
            a, b = rows[j], r
            # layer on / off
            for k in range(1, 4):
                if (a["dispcnt"] ^ b["dispcnt"]) >> (8 + k) & 1:
                    flags.append({"kind": "layer", "bg": k, "on": bool(b["dispcnt"] >> (8 + k) & 1), "box": [0, 0, W, H]})
            S = motions(rows, j, i)
            # the GBA screen at either picture, and the edge no motion's source covers
            vx0 = max(0, *(dx for dx, dy in S)) + 2; vy0 = max(0, *(dy for dx, dy in S)) + 2
            vx1 = min(W, *(W + dx for dx, dy in S)) - 2; vy1 = min(H, *(H + dy for dx, dy in S)) - 2
            un = None; pop = None
            for dx, dy in S:
                As = shifted(A, dx, dy)
                m = bin_mask(ImageChops.difference(B, As).convert("L"))
                un = m if un is None else ImageChops.darker(un, m)
                bx = ImageChops.logical_xor(shifted(Ablack, dx, dy).convert("1"), Bblack.convert("1")).convert("L")
                pop = bx if pop is None else ImageChops.darker(pop, bx)
            judge = Image.new("L", (W, H), 0)
            if vx1 > vx0 and vy1 > vy0: ImageDraw.Draw(judge).rectangle([vx0, vy0, vx1 - 1, vy1 - 1], fill=255)
            gba = ImageDraw.Draw(judge)
            g_in = []
            for q in (a, b):
                gba.rectangle([q["ox"] - 2, q["oy"] - 2, q["ox"] + 241, q["oy"] + 161], fill=0)
                g_in.append((q["ox"], q["oy"], q["ox"] + 240, q["oy"] + 160))
            if Bspr is not None:   # sprites move on their own: neither where one is now nor where one was is judged
                spr = Bspr
                if Aspr is not None:
                    for dx, dy in S: spr = ImageChops.lighter(spr, shifted(Aspr, dx, dy))
                spr = spr.filter(ImageFilter.MaxFilter(5))
                judge = ImageChops.darker(judge, ImageChops.invert(spr))
            if Bspr is not None and Aspr is not None:
                sj = Image.new("L", (W, H), 0)
                if vx1 > vx0 and vy1 > vy0: ImageDraw.Draw(sj).rectangle([vx0 + 6, vy0 + 6, vx1 - 7, vy1 - 7], fill=255)
                dj = ImageDraw.Draw(sj)
                for q in (a, b): dj.rectangle([q["ox"] - 1, q["oy"] - 1, q["ox"] + 240, q["oy"] + 160], fill=0)
                older = [(hs, motions(rows, hj, i), motions(rows, hj, j)) for hj, _, _, _, hs in hist[-1 - BLINK:-1] if hs is not None and hs.size == Bspr.size]
                flags += sprite_flags(Aspr, Bspr, S, sj, (a["ox"], a["oy"], a["ox"] + 240, a["oy"] + 160), (b["ox"], b["oy"], b["ox"] + 240, b["oy"] + 160), reach, edge, older)
            un_out = ImageChops.darker(un, judge)
            un_gba = un if Bspr is None else ImageChops.darker(un, ImageChops.invert(spr))   # the GBA screen's own changes, sprites left out
            pop = ImageChops.darker(ImageChops.darker(pop, un), judge)
            gx0, gy0, gx1, gy1 = b["ox"], b["oy"], b["ox"] + 240, b["oy"] + 160
            gfrac = un.crop((gx0, gy0, gx1, gy1)).histogram()[255] / (240 * 160)
            jfrac_area = max(1, judge.histogram()[255])
            ofrac = un_out.histogram()[255] / jfrac_area
            stats = {"gba_changed": round(gfrac, 4), "out_changed": round(ofrac, 4), "motions": sorted(S)}
            # a BG turned on / off while the view is the GBA picture (no wide view: menus, cutscenes, rooms shown
            # as the GBA screen): the PPU's own picture, nothing of the renderer's to pop
            for f in flags:
                if f["kind"] == "layer" and f.get("bg") is not None and W * H <= 240 * 160:
                    f["explained"] = "the view is the GBA screen (the PPU's own picture)"
            if gfrac > 0.35:
                stats["skipped"] = "most of the GBA screen changed (fade / room change)"
                flags = [f for f in flags if f["kind"] != "sprite"]
            elif ofrac > 0.5 and jfrac_area > 0.1 * W * H:
                flags.append({"kind": "layer", "bg": None, "frac": round(ofrac, 3), "box": [vx0, vy0, vx1, vy1]})
            else:
                cw, ch = W // CELL, H // CELL
                cu = list(un_out.resize((cw, ch), Image.BOX).tobytes())
                cp = list(pop.resize((cw, ch), Image.BOX).tobytes())
                cells = [v >= 128 for v in cu]
                for c in components(cells, cw, ch):
                    x0, y0, x1, y1, n = c
                    if x1 - x0 < 2 or y1 - y0 < 2 or n < 4: continue
                    box = (x0 * CELL, y0 * CELL, x1 * CELL, y1 * CELL)
                    npop = sum(1 for yy in range(y0, y1) for xx in range(x0, x1) if cp[yy * cw + xx] >= 128)
                    kind = "pop" if npop >= 0.5 * n else "block"
                    # tile animation: the same content here (per motion) in the history
                    why = None
                    for hj, HA, _, _, _ in reversed(hist[:-1] if kind == "block" or (box[2] - box[0]) * (box[3] - box[1]) <= 1024 else []):   # a big pop is never animation
                        if hj < i - history: break
                        for dx, dy in motions(rows, hj, i):
                            if crop_match(B, box, HA, dx, dy):
                                why = f"seen at picture {rows[hj]['frame']}"; break
                        if why: break
                    if not why and kind == "block":   # faint everywhere: a palette animation / glow, not a tile
                        best = None
                        for dx, dy in S:
                            x0_, y0_, x1_, y1_ = box
                            if x0_ - dx < 0 or y0_ - dy < 0 or x1_ - dx > W or y1_ - dy > H: continue
                            h = ImageChops.difference(B.crop(box), A.crop((x0_ - dx, y0_ - dy, x1_ - dx, y1_ - dy))).convert("L").histogram()
                            tot, acc, p95 = sum(h), 0, 0
                            for v, c in enumerate(h):
                                acc += c
                                if acc >= 0.95 * tot: p95 = v; break
                            best = p95 if best is None else min(best, p95)
                        if best is not None and best < FAINT: why = f"faint (95% of the change < {FAINT})"
                    if not why and kind == "block":   # every old colour became one new colour: a palette animation
                        for dx, dy in S:
                            x0_, y0_, x1_, y1_ = box
                            if x0_ - dx < 0 or y0_ - dy < 0 or x1_ - dx > W or y1_ - dy > H: continue
                            if palette_remap(A.crop((x0_ - dx, y0_ - dy, x1_ - dx, y1_ - dy)), B.crop(box)):
                                why = "palette animation (colours remapped one to one)"; break
                    if not why and kind == "block":   # the GBA screen changes on these lines too: the game's own effect
                        ya, yb = max(gy0, box[1]), min(gy1, box[3])
                        gb = un_gba.crop((gx0, ya, gx1, yb)) if yb > ya else None
                        if gb and gb.histogram()[255] >= 0.03 * gb.size[0] * gb.size[1]:
                            why = "the GBA screen changes on the same lines (a game effect)"
                    if not why and kind == "block" and rows_shift_match(B, box, A):
                        why = "per-line scroll (each row the last picture's, moved sideways)"
                    if not why and kind == "block":   # a moving object: the last picture, moved a little
                        for dx in range(-8, 9, 1):
                            for dy in range(-8, 9, 1):
                                if (dx or dy) and crop_match(B, box, A, dx, dy, 0.04):
                                    why = f"moved {dx},{dy}"; break
                            if why: break
                    f = {"kind": kind, "box": list(box), "cells": n, "pop_cells": npop}
                    if Bfill is not None:
                        f["fill_share"] = round(Bfill.crop(box).histogram()[255] / ((box[2] - box[0]) * (box[3] - box[1])), 2)
                    if why: f["explained"] = why
                    flags.append(f)
        stats["static"] = static
        yield i, flags, stats, B, Bspr
        hist.append((i, B, BL, Bblack, Bspr))
        if len(hist) > history + 1: hist.pop(0)

# ------------------------------------------------------------ outputs

COL = {"pop": (255, 0, 0), "block": (255, 220, 0), "layer": (255, 0, 255), "sprite": (0, 255, 0)}

def outline(img, flags, width=2):
    d = ImageDraw.Draw(img)
    for f in flags:
        if f.get("explained"): continue
        x0, y0, x1, y1 = f["box"]
        for k in range(width):
            d.rectangle([x0 - k - 1, y0 - k - 1, x1 + k, y1 + k], outline=COL[f["kind"]])
    return img

def gba_rect(img, r):
    ImageDraw.Draw(img).rectangle([r["ox"] - 1, r["oy"] - 1, r["ox"] + 240, r["oy"] + 160], outline=(0, 160, 255))

# GBA IO registers that change what is drawn (offset, bytes); scroll is left out (it moves every frame)
GBA_REGS = [("DISPCNT", 0x00, 2), ("BG0CNT", 0x08, 2), ("BG1CNT", 0x0A, 2), ("BG2CNT", 0x0C, 2), ("BG3CNT", 0x0E, 2),
            ("WIN0H", 0x40, 2), ("WIN1H", 0x42, 2), ("WIN0V", 0x44, 2), ("WIN1V", 0x46, 2), ("WININ", 0x48, 2),
            ("WINOUT", 0x4A, 2), ("MOSAIC", 0x4C, 2), ("BLDCNT", 0x50, 2), ("BLDALPHA", 0x52, 2), ("BLDY", 0x54, 2)]

def reg_values(r, cfg):
    io = bytes.fromhex(r.get("io", "") or "")
    v = {}
    for name, off, n in cfg["regs"]:
        if off + n <= len(io): v[name] = int.from_bytes(io[off:off + n], "little")
    w = (r.get("watch") or "").split(",")
    for k, (name, _) in enumerate(cfg["watch"]):
        if k < len(w) and w[k]: v[name] = int.from_bytes(bytes.fromhex(w[k]), "little")
    return v

def run_view(mmz, sc, cfg, view, out, every, keep, history, xevery, reach=SPRITE_REACH, edge=EDGE):
    name = re.sub(r"[^0-9A-Za-z]+", "_", view)
    d = os.path.join(out, sc["name"], name)
    if os.path.exists(d): shutil.rmtree(d)
    os.makedirs(os.path.join(d, "shots")); os.makedirs(os.path.join(d, "xview"))
    prefix = os.path.join(d, "shots", "f")
    with open(os.path.join(d, "route.txt"), "w") as f: f.write(route_text(sc, cfg, prefix, every))
    errf = open(os.path.join(d, "stderr.txt"), "w")
    proc = subprocess.Popen([mmz, "--headless", "--route", os.path.join(d, "route.txt"), "--view", view], cwd=cfg["cwd"], stderr=errf, stdout=subprocess.DEVNULL, env={**os.environ, **cfg.get("env", {})})
    rows, frames, events, changes, skipped = [], [], [], [], 0
    mp4 = shutil.which("ffmpeg"); vid = None; vsize = None; gif = []; last = None
    prevImg = None
    worst, mid_at = None, max(1, (sc["frames"] - SETTLE) // max(1, every)) // 2
    for i, flags, stats, img, spr in analyse(follow_tsv(prefix + ".tsv", proc), rows, history, keep, reach, edge, regions_for(cfg)):
        r = rows[i]
        vals = reg_values(r, cfg)
        if last is not None:
            for k, v in vals.items():
                if last.get(k) != v: changes.append({"frame": r["frame"], "what": k, "from": last.get(k), "to": v})
        last = vals
        real = [f for f in flags if not f.get("explained")]
        if stats.get("skipped"): skipped += 1
        frames.append({"frame": r["frame"], "cam": [r["camx"], r["camy"]], "zero": [r["zx"], r["zy"]], "gba": [r["ox"], r["oy"]], "flags": flags, **stats})
        if r["frame"] % xevery == 0:
            img.save(os.path.join(d, "xview", f"{r['frame']:06d}.png"), compress_level=1)
            if spr is not None: spr.save(os.path.join(d, "xview", f"{r['frame']:06d}.spr.png"), compress_level=1)
        if real or i % 2 == 0:
            fr = img.copy(); gba_rect(fr, r); outline(fr, real, 3)
            k = 2 if fr.width > 800 else 1
            fr = fr.resize((fr.width // k, fr.height // k))
            if mp4 and vid is not None and fr.size != vsize:   # the view changed size (a room it fits): keep the video's
                c = Image.new("RGB", vsize); c.paste(fr, (0, 0)); fr = c
            if mp4:
                if vid is None:
                    vsize = fr.size
                    vid = subprocess.Popen(["ffmpeg", "-loglevel", "error", "-y", "-f", "rawvideo", "-pix_fmt", "rgb24", "-s", f"{fr.width}x{fr.height}",
                                            "-r", "30", "-i", "-", "-pix_fmt", "yuv420p", "-vf", "pad=ceil(iw/2)*2:ceil(ih/2)*2", os.path.join(d, "walk.mp4")], stdin=subprocess.PIPE)
                vid.stdin.write(fr.tobytes())
            elif i % 4 == 0 or real:
                gif.append(fr.quantize(64))
        # the worst picture for the static checks and one from the middle of the run (contact sheets, review)
        bscore = stats.get("static", {}).get("black", 0) + (1 if stats.get("static", {}).get("place") else 0)
        if worst is None or bscore > worst[0]:
            w = img.copy(); gba_rect(w, r); worst = (bscore, r["frame"], w)
        if i == mid_at:
            m = img.copy(); gba_rect(m, r); m.save(os.path.join(d, "mid.png"))
        if real:
            prev = prevImg
            events.append((i, real, prev, img))
        prevImg = img
    proc.wait(); errf.close()
    if worst: worst[2].save(os.path.join(d, f"worst_{worst[1]}.png"))
    if vid: vid.stdin.close(); vid.wait()
    if gif: gif[0].save(os.path.join(d, "walk.gif"), save_all=True, append_images=gif[1:], duration=66, loop=0)
    if not keep: shutil.rmtree(os.path.join(d, "shots"), ignore_errors=True)
    if not rows: return {"scenario": sc["name"], "view": view, "error": "no shots (warp failed?)"}, None
    groups = []
    for e in events:
        if groups and e[0] - groups[-1][-1][0] <= 3: groups[-1].append(e)
        else: groups.append([e])
    counts = {"pop": 0, "block": 0, "layer": 0, "sprite": 0, "sprite_gba_edge": 0}
    for e in events:
        for f in e[1]:
            counts[f["kind"]] += 1
            if f["kind"] == "sprite" and f["where"] == "gba_edge": counts["sprite_gba_edge"] += 1
    sprite_events = sum(1 for g in groups if any(f["kind"] == "sprite" for e in g for f in e[1]))
    edge_events = sum(1 for g in groups if any(f["kind"] == "sprite" and f["where"] == "gba_edge" for e in g for f in e[1]))
    expl = sum(1 for fr in frames for f in fr["flags"] if f.get("explained"))
    def near(f0, f1):   # flag changes in the frames just before an event (its likely cause)
        return [c for c in changes if f0 - 4 <= c["frame"] <= f1 + 1]
    evs = []
    tiles = []
    for g in groups:
        f0, f1 = rows[g[0][0]]["frame"], rows[g[-1][0]]["frame"]
        kinds = sorted({f["kind"] for e in g for f in e[1]})
        evs.append({"from": f0, "to": f1, "kinds": kinds, "cam": [rows[g[0][0]]["camx"], rows[g[0][0]]["camy"]],
                    "boxes": [f["box"] for f in g[0][1]], "flag_changes": near(f0, f1)})
        if len(tiles) < 16:
            i, real, prev, img = max(g, key=lambda e: sum(f.get("cells", 999) for f in e[1]))
            pv, cu = prev.copy(), img.copy()
            gba_rect(pv, rows[i - 1]); gba_rect(cu, rows[i]); outline(pv, real); outline(cu, real)
            t = Image.new("RGB", (pv.width * 2 + 8, pv.height + 18), (40, 40, 40))
            t.paste(pv, (0, 18)); t.paste(cu, (pv.width + 8, 18))
            nc = near(f0, f1)
            ImageDraw.Draw(t).text((4, 3), f"{view}  frame {rows[i-1]['frame']} -> {rows[i]['frame']}  cam {rows[i]['camx']},{rows[i]['camy']}  {','.join(kinds)} x{len(real)}  event {len(g)} pics"
                                   + (f"  after {', '.join(c['what'] for c in nc)}" if nc else ""), fill=(255, 255, 255))
            tiles.append(t)
    sheet = save_sheet(tiles, os.path.join(d, "sheet.png"))
    # labels: the renderer logs each frame where a stage layer was drawn outside its chunk's labelled layers
    # ("labelcheck:") and each relabel on a progress / area-state flag change ("labels: ... changed")
    try: errtxt = open(os.path.join(d, "stderr.txt")).read()
    except OSError: errtxt = ""
    label_bad = [l for l in errtxt.splitlines() if l.startswith("labelcheck:")]
    relabels = [l for l in errtxt.splitlines() if l.startswith("labels:") and "changed" in l]
    static = static_summary(frames, cfg, wide_expected=view not in ("240x160", "x1"), events_bg=len(groups) - sum(1 for g in groups if all(f["kind"] == "sprite" for e in g for f in e[1])))
    static["label_frames_bad"] = len(label_bad); static["relabels"] = len(relabels)
    cam = camera_check(rows, cfg, ease_windows(errtxt))
    cam["eases"] = sum(len(v) for v in ease_windows(errtxt).values())
    static["camera"] = {k: (len(v) if isinstance(v, list) else v) for k, v in cam.items()}
    for k in ("jitter", "jump", "parallax"):
        if cam[k]:
            static["fail"] = True; static.setdefault("parts", {})["camera"] = True; static.setdefault("why", []).append(f"{len(cam[k])} camera {k} frames (first: {cam[k][0]})")
    if label_bad:
        static["fail"] = True; static.setdefault("parts", {})["labels"] = True; static.setdefault("why", []).append(f"{len(label_bad)} frames drew a stage layer outside its chunk's labels (first: {label_bad[0]})")
    summ = {"scenario": sc["name"], "view": view, "warp": sc["warp"], "pictures": len(frames), "static": static, "skipped": skipped,
            "flagged_pictures": len(events), "events": len(groups), "counts": counts,
            "events_bg": len(groups) - sum(1 for g in groups if all(f["kind"] == "sprite" for e in g for f in e[1])),
            "events_sprite": sprite_events, "events_sprite_gba_edge": edge_events, "explained_blocks": expl,
            "event_list": evs, "flag_changes": changes, "camera": cam, "sheet": sheet,
            "video": os.path.join(d, "walk.mp4") if mp4 else (os.path.join(d, "walk.gif") if gif else None)}
    with open(os.path.join(d, "summary.json"), "w") as f: json.dump({**summ, "frames": frames}, f, indent=1)
    meta = {r["frame"]: r for r in rows if r["frame"] % xevery == 0}
    return summ, (d, meta)

def save_sheet(tiles, path):
    if not tiles: return None
    wmax = max(t.width for t in tiles)
    s = min(1, 1600 / wmax)
    tiles = [t.resize((int(t.width * s), int(t.height * s))) for t in tiles]
    sh = Image.new("RGB", (max(t.width for t in tiles), sum(t.height + 4 for t in tiles)), (0, 0, 0))
    y = 0
    for t in tiles: sh.paste(t, (0, y)); y += t.height + 4
    sh.save(path); return path

def cross_view(sc, out, runs):
    """the same frame at different view sizes, aligned on the GBA screen: a region
    that is black at one size and drawn at the other (where both views cover it)"""
    res, tiles = [], []
    names = sorted(runs)
    for ai in range(len(names)):
        for bi in range(ai + 1, len(names)):
            va, vb = names[ai], names[bi]
            (da, ma), (db, mb) = runs[va], runs[vb]
            nflag, nframes, first, sflag, sfirst = 0, 0, [], 0, []
            for fr in sorted(set(ma) & set(mb)):
                ra, rb = ma[fr], mb[fr]
                if (ra["camx"], ra["camy"], ra["zx"], ra["zy"]) != (rb["camx"], rb["camy"], rb["zx"], rb["zy"]): continue
                pa, pb = os.path.join(da, "xview", f"{fr:06d}.png"), os.path.join(db, "xview", f"{fr:06d}.png")
                if not (os.path.exists(pa) and os.path.exists(pb)): continue
                A, B = Image.open(pa).convert("RGB"), Image.open(pb).convert("RGB")
                # GBA-relative overlap
                x0 = max(-ra["ox"], -rb["ox"]); y0 = max(-ra["oy"], -rb["oy"])
                x1 = min(A.width - ra["ox"], B.width - rb["ox"]); y1 = min(A.height - ra["oy"], B.height - rb["oy"])
                if x1 - x0 < 16 or y1 - y0 < 16: continue
                ca = A.crop((x0 + ra["ox"], y0 + ra["oy"], x1 + ra["ox"], y1 + ra["oy"]))
                cb = B.crop((x0 + rb["ox"], y0 + rb["oy"], x1 + rb["ox"], y1 + rb["oy"]))
                ka = ca.convert("L").point(lambda v: 255 if v < 6 else 0).convert("1")
                kb = cb.convert("L").point(lambda v: 255 if v < 6 else 0).convert("1")
                m = ImageChops.logical_xor(ka, kb).convert("L")
                ImageDraw.Draw(m).rectangle([-x0 - 2, -y0 - 2, -x0 + 241, -y0 + 161], fill=0)   # the GBA screen
                # the HUD sits at the view's edges: leave a band at each view's edge out
                for (rr, im) in ((ra, A), (rb, B)):
                    e0x, e0y = -rr["ox"] - x0, -rr["oy"] - y0
                    e1x, e1y = im.width - rr["ox"] - x0, im.height - rr["oy"] - y0
                    dr = ImageDraw.Draw(m)
                    dr.rectangle([e0x, e0y, e0x + 40, e1y], fill=0)
                    dr.rectangle([e0x, e0y, e1x, e0y + 24], fill=0)
                nframes += 1
                sa, sb = pa[:-4] + ".spr.png", pb[:-4] + ".spr.png"
                if os.path.exists(sa) and os.path.exists(sb):   # sprite pixels drawn at one size only
                    za = Image.open(sa).crop((x0 + ra["ox"], y0 + ra["oy"], x1 + ra["ox"], y1 + ra["oy"]))
                    zb = Image.open(sb).crop((x0 + rb["ox"], y0 + rb["oy"], x1 + rb["ox"], y1 + rb["oy"]))
                    zm = ImageChops.difference(za, zb)
                    zd = ImageDraw.Draw(zm)
                    zd.rectangle([-x0 - 2, -y0 - 2, -x0 + 241, -y0 + 161], fill=0)
                    for (rr, im) in ((ra, A), (rb, B)):
                        e0x, e0y = -rr["ox"] - x0, -rr["oy"] - y0
                        e1x, e1y = im.width - rr["ox"] - x0, im.height - rr["oy"] - y0
                        zd.rectangle([e0x, e0y, e0x + 40, e1y], fill=0); zd.rectangle([e0x, e0y, e1x, e0y + 24], fill=0)
                    sb_ = mask_comps(zm)
                    if sb_:
                        sflag += 1
                        if len(sfirst) < 20: sfirst.append({"frame": fr, "boxes": [list(b) for b in sb_]})
                cw, ch = m.width // CELL, m.height // CELL
                cells = [v >= 128 for v in m.resize((cw, ch), Image.BOX).tobytes()]
                boxes = [(c[0] * CELL, c[1] * CELL, c[2] * CELL, c[3] * CELL) for c in components(cells, cw, ch)
                         if c[2] - c[0] >= 2 and c[3] - c[1] >= 2 and c[4] >= 4]
                if not boxes: continue
                nflag += 1
                if len(first) < 20: first.append({"frame": fr, "boxes": [list(b) for b in boxes]})
                if len(tiles) < 12:
                    for im in (ca, cb):
                        dd = ImageDraw.Draw(im)
                        for b in boxes: dd.rectangle([b[0] - 2, b[1] - 2, b[2] + 1, b[3] + 1], outline=(255, 0, 255), width=2)
                        dd.rectangle([-x0 - 1, -y0 - 1, -x0 + 240, -y0 + 160], outline=(0, 160, 255))
                    t = Image.new("RGB", (ca.width * 2 + 8, ca.height + 18), (40, 40, 40))
                    t.paste(ca, (0, 18)); t.paste(cb, (ca.width + 8, 18))
                    ImageDraw.Draw(t).text((4, 3), f"frame {fr}: {va} | {vb} (shared part)  {len(boxes)} region(s) black in one only", fill=(255, 255, 255))
                    tiles.append(t)
            res.append({"views": [va, vb], "frames_compared": nframes, "frames_flagged": nflag, "first": first,
                        "sprite_frames_flagged": sflag, "sprite_first": sfirst})
    sheet = save_sheet(tiles, os.path.join(out, sc["name"], "xview_sheet.png"))
    return {"pairs": res, "sheet": sheet}

STATIC = {"black_mean": 0.08, "black_max": 0.30, "foreign_max": 0.01, "events_bg": 0}

def regions_for(cfg):
    """per sidecar row: world chunk -> room for the row's area (config `regions CMD` + `regionkey EXPR`), or None"""
    if not cfg.get("regions") or not cfg.get("regionkey"): return None
    if "_regions" not in cfg:
        cfg["_regions"] = json.loads(subprocess.run(cfg["regions"], shell=True, cwd=cfg["cwd"], capture_output=True, text=True, check=True).stdout)
    def f(r):
        try: return cfg["_regions"].get(eval(cfg["regionkey"], {}, reg_values(r, cfg)))
        except Exception: return None
    return f

def ease_windows(errtxt):
    """the renderer's logged eases ("view: ease frame N axis A from .. to .." .. "view: ease frame M axis A done"):
    {axis: [(N, M)]}: the view's offset moving there is a logged transition, not jitter"""
    w, open_ = {"x": [], "y": []}, {}
    for l in errtxt.splitlines():
        m = re.match(r"view: ease frame (\d+) axis ([xy]) (from|done)", l)
        if not m: continue
        f, ax = int(m.group(1)), m.group(2)
        if m.group(3) == "from": open_[ax] = f
        elif ax in open_: w[ax].append((open_.pop(ax), f))
    for ax, f in open_.items(): w[ax].append((f, 1 << 30))
    return w

def camera_check(rows, cfg, eases=None):
    """the view's motion against the game camera's, per frame (from the sidecar; every picture must be a frame:
    --every 1). V = the view's world origin (gx - ox); the offset o = ox (the GBA screen's place in the view).
      jitter    the offset moving while the game camera is still, or V reversing while the camera moves one way,
                or the offset's second difference > JERK px (a re-chosen placement)
      jump      the offset or the view size stepping > JUMP px in one frame (an uneased transition)
      parallax  per shown BG: its apparent motion in the view vs the view's world motion times the layer's scale
                (scale = median d hofs / d camera over the run); error = (1-s) d ox + (s d gx - d hofs) (px)
    Frames where the game itself snaps (camera step > SNAP px, an area / stage / variant change) are not judged,
    and listed as `snaps`."""
    SNAP, JUMP, JERK, SETTLE_F = 24, 6, 3, 2
    hud = set(cfg.get("hud", [0]))
    out = {"snaps": [], "jitter": [], "jump": [], "parallax": [], "scale": {}}
    if len(rows) < 3: return out
    wk = [k for k, _ in cfg.get("watch", []) if k in ("area", "stage", "variants", "mission")]
    def snap(a, b):
        return (abs(b["gx"] - a["gx"]) > SNAP or abs(b["gy"] - a["gy"]) > SNAP or b["frame"] - a["frame"] != 1
                or any(a["watch"] != b["watch"] for _ in wk[:1]))
    # per BG scale from the run (frames the camera moves, the BG shown in both)
    for b in range(4):
        for ax, k in ((0, "h"), (1, "v")):
            rs = []
            for a, c in zip(rows, rows[1:]):
                dg = c["gx" if ax == 0 else "gy"] - a["gx" if ax == 0 else "gy"]
                if not dg or snap(a, c) or not (a["dispcnt"] >> (8 + b) & 1 and c["dispcnt"] >> (8 + b) & 1): continue
                dh = (c[f"bg{b}{k}"] - a[f"bg{b}{k}"]) % 512
                if dh >= 256: dh -= 512
                rs.append(dh / dg)
            if len(rs) >= 8: out["scale"][f"bg{b}{'xy'[ax]}"] = round(sorted(rs)[len(rs) // 2], 3)
    last_snap = -99
    for i in range(1, len(rows)):
        a, c = rows[i - 1], rows[i]
        if snap(a, c):
            last_snap = i
            out["snaps"].append({"frame": c["frame"], "cam": [c["gx"] - a["gx"], c["gy"] - a["gy"]]})
            continue
        f = c["frame"]
        for ax in (0, 1):
            g, o, n = ("gx", "ox", "w") if ax == 0 else ("gy", "oy", "h")
            dg, do = c[g] - a[g], c[o] - a[o]
            dn = c[n] - a[n]
            if abs(do) > JUMP or abs(dn) > JUMP: out["jump"].append({"frame": f, "axis": "xy"[ax], "d_offset": do, "d_size": dn})
            in_ease = any(f0 <= f <= f1 + 1 for f0, f1 in (eases or {}).get("xy"[ax], []))
            if dg == 0 and do != 0 and dn == 0 and i - last_snap > SETTLE_F and not in_ease: out["jitter"].append({"frame": f, "axis": "xy"[ax], "why": "camera still, view moved", "d": do})
            if i >= 2 and not snap(rows[i - 2], a) and i - last_snap > SETTLE_F:
                p = rows[i - 2]
                dg0, dv0, dv = a[g] - p[g], (a[g] - a[o]) - (p[g] - p[o]), (c[g] - c[o]) - (a[g] - a[o])
                if dg0 and dg and (dg0 > 0) == (dg > 0) and dv0 and dv and (dv0 > 0) != (dv > 0):
                    out["jitter"].append({"frame": f, "axis": "xy"[ax], "why": "view reversed, camera did not", "d": [dv0, dv]})
                # the view's own motion (V = g - o) jerking beyond the camera's: the offset alone moves when the view
                # is held at a room edge while the camera starts / stops (the view is still then)
                elif abs(dv - dv0) > JERK + abs(dg - dg0) and abs((c[o] - a[o]) - (a[o] - p[o])) > JERK and dn == 0:
                    out["jitter"].append({"frame": f, "axis": "xy"[ax], "why": "offset jerk", "d": [a[o] - p[o], do]})
            for b in range(4):
                if b in hud: continue   # (the HUD layer is drawn at the view's edges, not scrolled with the world)
                key = f"bg{b}{'xy'[ax]}"
                if key not in out["scale"] or not (a["dispcnt"] >> (8 + b) & 1 and c["dispcnt"] >> (8 + b) & 1): continue
                s = out["scale"][key]
                if abs(s - 1) < 0.02: continue
                k = "hv"[ax]
                dh = (c[f"bg{b}{k}"] - a[f"bg{b}{k}"]) % 512
                if dh >= 256: dh -= 512
                err = (1 - s) * do + (s * dg - dh)
                if abs(err) >= 1.5: out["parallax"].append({"frame": f, "bg": b, "axis": "xy"[ax], "err_px": round(err, 2), "d_offset": do})
    return out

def static_summary(frames, cfg, events_bg=0, wide_expected=False):
    """the static checks over a run: FAIL when the mean / any picture's unfilled share, a misplaced GBA screen or
    another room's content goes over the config's `static` limits"""
    lim = {**STATIC, **cfg.get("static", {})}
    st = [f["static"] for f in frames if f.get("static", {}).get("wide")]
    res = {"wide_pictures": len(st), "pictures": len(frames)}
    if not st:
        why = [f"{events_bg} unexplained background events"] if events_bg > lim["events_bg"] else []
        # a view asked wider than the GBA screen that never got wide checked nothing (warp failed / fit off)
        if wide_expected and frames: why.append("no picture wider than the GBA screen: the scenario checked nothing (warp failed or fit off)")
        return {**res, "events_bg": events_bg, "fail": bool(why), "why": why,
                "parts": {"events": events_bg > lim["events_bg"], "picture": bool(wide_expected and frames)}}
    bl = [x["black"] for x in st]
    res["black_mean"] = round(sum(bl) / len(bl), 4); res["black_max"] = max(bl)
    res["black_over"] = sum(1 for b in bl if b > lim["black_max"])
    res["place_bad"] = sum(1 for x in st if x["place"])
    res["place_axes"] = sorted({p["axis"] for x in st for p in x["place"]})
    fo = [x["foreign"] for x in st if "foreign" in x]
    if fo:
        res["foreign_max"] = max(fo); res["foreign_over"] = sum(1 for v in fo if v > lim["foreign_max"])
        res["foreign_chunks"] = sorted({c for x in st for c in x.get("foreign_chunks", [])})[:20]
    why = []
    if res["black_mean"] > lim["black_mean"]: why.append(f"black mean {res['black_mean']:.1%} > {lim['black_mean']:.0%}")
    if res["black_over"]: why.append(f"{res['black_over']} pictures black > {lim['black_max']:.0%}")
    if res["place_bad"]: why.append(f"{res['place_bad']} pictures with the GBA screen pushed off-centre and the far side unfilled")
    # temporal events are failures too (a background blinking in is not a baseline to keep)
    res["events_bg"] = events_bg
    if events_bg > lim["events_bg"]: why.append(f"{events_bg} unexplained background events (pop/block/layer) > {lim['events_bg']:.0f}")
    if res.get("foreign_over"): why.append(f"{res['foreign_over']} pictures with another room's content > {lim['foreign_max']:.0%}")
    res["fail"] = bool(why); res["why"] = why
    res["parts"] = {"events": events_bg > lim["events_bg"],
                    "picture": bool(res["black_mean"] > lim["black_mean"] or res["black_over"] or res["place_bad"] or res.get("foreign_over"))}
    return res

def parse_config(path):
    cfg = {"regs": list(GBA_REGS), "watch": [], "setup": [], "settle": SETTLE, "views": None, "cwd": ROOT}
    for line in open(path):
        line = line.split("#", 1)[0].strip()
        if line.startswith("["): break
        w = line.split()
        if not w: continue
        if w[0] == "watch": cfg["watch"].append((w[1], w[2]))           # watch NAME ADDR:LEN
        elif w[0] == "setup": cfg["setup"].append((int(w[1]), " ".join(w[2:])))   # setup T ROUTE-CMD
        elif w[0] == "settle": cfg["settle"] = int(w[1])
        elif w[0] == "views": cfg["views"] = w[1]
        elif w[0] == "reg": cfg["regs"].append((w[1], int(w[2], 0), int(w[3])))
        elif w[0] == "hud": cfg["hud"] = [int(x) for x in w[1:]]   # hud BG ...: layers drawn at the view's edges (no parallax judged)
        elif w[0] == "env": k, _, v = w[1].partition("="); cfg.setdefault("env", {})[k] = v   # env NAME=VALUE for the emulator
        elif w[0] == "regions": cfg["regions"] = line[8:].strip()          # regions CMD: prints {"KEY": {"cx,cy": room}}
        elif w[0] == "regionkey": cfg["regionkey"] = line[10:].strip()     # regionkey EXPR: KEY from the watched values
        elif w[0] == "static": cfg["static"] = {w[k]: float(w[k + 1]) for k in range(1, len(w) - 1, 2)}   # static NAME LIMIT ...
    return cfg

def main():
    a = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    a.add_argument("--scenarios", default=os.path.join(HERE, "motion_scenarios.txt"))
    a.add_argument("--only", default="")
    a.add_argument("--views", default="")
    a.add_argument("--every", type=int, default=1)
    a.add_argument("--xview-every", type=int, default=10, help="pictures compared across view sizes, every N frames")
    a.add_argument("--history", type=int, default=128, help="pictures back to look for the same content (tile animation)")
    a.add_argument("--out", default="motion_out")
    a.add_argument("--jobs", type=int, default=2)
    a.add_argument("--keep", action="store_true")
    a.add_argument("--sprite-reach", type=int, default=SPRITE_REACH, help="px a sprite may move between pictures")
    a.add_argument("--edge", type=int, default=EDGE, help="px from the GBA screen that count as its edge (sprite flags)")
    a.add_argument("--mmz", default=os.path.join(ROOT, "build_port/mmz"))
    o = a.parse_args()
    cfg = parse_config(o.scenarios)
    scs = parse_scenarios(o.scenarios)
    if o.only: scs = [s for s in scs if s["name"] in o.only.split(",")]
    views = (o.views or cfg["views"] or "x3").split(",")
    out = os.path.abspath(o.out); os.makedirs(out, exist_ok=True)
    jobs = [(s, v) for s in scs for v in views]
    res, runs = [], {}
    with cf.ThreadPoolExecutor(o.jobs) as ex:
        futs = {ex.submit(run_view, os.path.abspath(o.mmz), s, cfg, v, out, o.every, o.keep, o.history, o.xview_every, o.sprite_reach, o.edge): (s, v) for s, v in jobs}
        for f in cf.as_completed(futs):
            s, v = futs[f]
            try: r, meta = f.result()
            except Exception as e:
                import traceback; traceback.print_exc()
                r, meta = {"scenario": s["name"], "view": v, "error": repr(e)}, None
            res.append(r)
            if meta: runs.setdefault(s["name"], {})[v] = meta
            if "error" in r: print(f"{r['scenario']:12} {r['view']:9} ERROR {r['error']}")
            else:
                st = r["static"]
                parts = st.get("parts", {})
                print(f"{r['scenario']:12} {r['view']:9} verdict picture {'FAIL' if parts.get('picture') else 'ok'} events {'FAIL' if parts.get('events') else 'ok'} camera {'FAIL' if parts.get('camera') else 'ok'} labels {'FAIL' if parts.get('labels') else 'ok'}", flush=True)
                print(f"{r['scenario']:12} {r['view']:9} static {'FAIL' if st['fail'] else 'ok'}: black mean {st.get('black_mean', 0):.1%} max {st.get('black_max', 0):.1%} (over {st.get('black_over', 0)}), off-centre {st.get('place_bad', 0)}, foreign max {st.get('foreign_max', 0):.1%} (over {st.get('foreign_over', 0)}), wide {st['wide_pictures']}/{st['pictures']}", flush=True)
                print(f"{r['scenario']:12} {r['view']:9} camera {st.get('camera')}", flush=True)
                print(f"{r['scenario']:12} {r['view']:9} pictures {r['pictures']:4} events {r['events']:3} flagged {r['flagged_pictures']:4} pop {r['counts']['pop']} block {r['counts']['block']} layer {r['counts']['layer']} sprite {r['counts']['sprite']} (gba edge {r['counts']['sprite_gba_edge']}; events bg {r['events_bg']} sprite {r['events_sprite']} edge {r['events_sprite_gba_edge']}) (explained {r['explained_blocks']}, skipped {r['skipped']}, flag changes {len(r['flag_changes'])})", flush=True)
    xv = {}
    for s in scs:
        if len(runs.get(s["name"], {})) > 1:
            xv[s["name"]] = cross_view(s, out, runs[s["name"]])
            for p in xv[s["name"]]["pairs"]:
                print(f"{s['name']:12} xview {p['views'][0]}|{p['views'][1]}: {p['frames_flagged']}/{p['frames_compared']} frames differ in what is drawn, {p['sprite_frames_flagged']} in sprites", flush=True)
        if not o.keep:
            for v in runs.get(s["name"], {}).values(): shutil.rmtree(os.path.join(v[0], "xview"), ignore_errors=True)
    res.sort(key=lambda r: (r["scenario"], r["view"]))
    with open(os.path.join(out, "summary.json"), "w") as f: json.dump({"runs": res, "cross_view": xv}, f, indent=1)
    bad = [r for r in res if "error" in r or r["static"]["fail"]]
    for r in bad: print(f"FAIL {r['scenario']} {r['view']}: {r.get('error') or '; '.join(r['static']['why'])}")
    sys.exit(1 if bad else 0)

if __name__ == "__main__":
    main()
