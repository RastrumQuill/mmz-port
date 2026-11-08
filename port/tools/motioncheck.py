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
        xview   the same frame at two view sizes, aligned on the GBA screen:
                a region black at one size and drawn at the other (where
                both views cover it; HUD bands left out)

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
`[name]`, `warp BOOKMARK`, `frames N`, and route lines `T KEYS` (T counted
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
            cur = {"name": m.group(1), "warp": None, "frames": 600, "lines": []}
            out.append(cur); continue
        w = line.split()
        if w[0] == "warp": cur["warp"] = line[5:].strip()
        elif w[0] == "frames": cur["frames"] = int(w[1])
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
    r = [f"0 warp {sc['warp']}"] + [f"{t} {c}" for t, c in cfg["setup"]] + [f"{S} shots {prefix} {every} {watch}".rstrip()]
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

def analyse(src, rows, history, keep=True):
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
        Bspr = Bfill = None   # sprites / gap fill, from the view's layer map (PREFIX_FRAME.layers.png) when there is one
        lp = r["png"][:-4] + ".layers.png"
        if os.path.exists(lp):
            lm = Image.open(lp).getchannel(0); lm.load()
            if not keep: os.remove(lp)
            Bspr = lm.point(lambda v: 255 if v & 7 == SPRITE_LAYER or v >> 4 & 7 == SPRITE_LAYER else 0)   # blended sprites too
            Bfill = lm.point(lambda v: 255 if v & 8 else 0)
        flags, stats = [], {}
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
            un_out = ImageChops.darker(un, judge)
            pop = ImageChops.darker(ImageChops.darker(pop, un), judge)
            gx0, gy0, gx1, gy1 = b["ox"], b["oy"], b["ox"] + 240, b["oy"] + 160
            gfrac = un.crop((gx0, gy0, gx1, gy1)).histogram()[255] / (240 * 160)
            jfrac_area = max(1, judge.histogram()[255])
            ofrac = un_out.histogram()[255] / jfrac_area
            stats = {"gba_changed": round(gfrac, 4), "out_changed": round(ofrac, 4), "motions": sorted(S)}
            if gfrac > 0.35:
                stats["skipped"] = "most of the GBA screen changed (fade / room change)"
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
        yield i, flags, stats, B
        hist.append((i, B, BL, Bblack, Bspr))
        if len(hist) > history + 1: hist.pop(0)

# ------------------------------------------------------------ outputs

COL = {"pop": (255, 0, 0), "block": (255, 220, 0), "layer": (255, 0, 255)}

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

def run_view(mmz, sc, cfg, view, out, every, keep, history, xevery):
    name = re.sub(r"[^0-9A-Za-z]+", "_", view)
    d = os.path.join(out, sc["name"], name)
    if os.path.exists(d): shutil.rmtree(d)
    os.makedirs(os.path.join(d, "shots")); os.makedirs(os.path.join(d, "xview"))
    prefix = os.path.join(d, "shots", "f")
    with open(os.path.join(d, "route.txt"), "w") as f: f.write(route_text(sc, cfg, prefix, every))
    errf = open(os.path.join(d, "stderr.txt"), "w")
    proc = subprocess.Popen([mmz, "--headless", "--route", os.path.join(d, "route.txt"), "--view", view], cwd=cfg["cwd"], stderr=errf, stdout=subprocess.DEVNULL)
    rows, frames, events, changes, skipped = [], [], [], [], 0
    mp4 = shutil.which("ffmpeg"); vid = None; vsize = None; gif = []; last = None
    prevImg = None
    for i, flags, stats, img in analyse(follow_tsv(prefix + ".tsv", proc), rows, history, keep):
        r = rows[i]
        vals = reg_values(r, cfg)
        if last is not None:
            for k, v in vals.items():
                if last.get(k) != v: changes.append({"frame": r["frame"], "what": k, "from": last.get(k), "to": v})
        last = vals
        real = [f for f in flags if not f.get("explained")]
        if stats.get("skipped"): skipped += 1
        frames.append({"frame": r["frame"], "cam": [r["camx"], r["camy"]], "zero": [r["zx"], r["zy"]], "gba": [r["ox"], r["oy"]], "flags": flags, **stats})
        if r["frame"] % xevery == 0: img.save(os.path.join(d, "xview", f"{r['frame']:06d}.png"), compress_level=1)
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
        if real:
            prev = prevImg
            events.append((i, real, prev, img))
        prevImg = img
    proc.wait(); errf.close()
    if vid: vid.stdin.close(); vid.wait()
    if gif: gif[0].save(os.path.join(d, "walk.gif"), save_all=True, append_images=gif[1:], duration=66, loop=0)
    if not keep: shutil.rmtree(os.path.join(d, "shots"), ignore_errors=True)
    if not rows: return {"scenario": sc["name"], "view": view, "error": "no shots (warp failed?)"}, None
    groups = []
    for e in events:
        if groups and e[0] - groups[-1][-1][0] <= 3: groups[-1].append(e)
        else: groups.append([e])
    counts = {"pop": 0, "block": 0, "layer": 0}
    for e in events:
        for f in e[1]: counts[f["kind"]] += 1
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
    summ = {"scenario": sc["name"], "view": view, "warp": sc["warp"], "pictures": len(frames), "skipped": skipped,
            "flagged_pictures": len(events), "events": len(groups), "counts": counts, "explained_blocks": expl,
            "event_list": evs, "flag_changes": changes, "sheet": sheet,
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
            nflag, nframes, first = 0, 0, []
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
            res.append({"views": [va, vb], "frames_compared": nframes, "frames_flagged": nflag, "first": first})
    sheet = save_sheet(tiles, os.path.join(out, sc["name"], "xview_sheet.png"))
    return {"pairs": res, "sheet": sheet}

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
        futs = {ex.submit(run_view, os.path.abspath(o.mmz), s, cfg, v, out, o.every, o.keep, o.history, o.xview_every): (s, v) for s, v in jobs}
        for f in cf.as_completed(futs):
            s, v = futs[f]
            try: r, meta = f.result()
            except Exception as e:
                import traceback; traceback.print_exc()
                r, meta = {"scenario": s["name"], "view": v, "error": repr(e)}, None
            res.append(r)
            if meta: runs.setdefault(s["name"], {})[v] = meta
            if "error" in r: print(f"{r['scenario']:12} {r['view']:9} ERROR {r['error']}")
            else: print(f"{r['scenario']:12} {r['view']:9} pictures {r['pictures']:4} events {r['events']:3} flagged {r['flagged_pictures']:4} pop {r['counts']['pop']} block {r['counts']['block']} layer {r['counts']['layer']} (explained {r['explained_blocks']}, skipped {r['skipped']}, flag changes {len(r['flag_changes'])})", flush=True)
    xv = {}
    for s in scs:
        if len(runs.get(s["name"], {})) > 1:
            xv[s["name"]] = cross_view(s, out, runs[s["name"]])
            for p in xv[s["name"]]["pairs"]:
                print(f"{s['name']:12} xview {p['views'][0]}|{p['views'][1]}: {p['frames_flagged']}/{p['frames_compared']} frames differ in what is drawn", flush=True)
        if not o.keep:
            for v in runs.get(s["name"], {}).values(): shutil.rmtree(os.path.join(v[0], "xview"), ignore_errors=True)
    res.sort(key=lambda r: (r["scenario"], r["view"]))
    with open(os.path.join(out, "summary.json"), "w") as f: json.dump({"runs": res, "cross_view": xv}, f, indent=1)

if __name__ == "__main__":
    main()
