#!/usr/bin/env python3
"""Audit of the stage world's regions for the wide-view renderer.

Reads the ROM's stage tables (layouts as in the decomp, include/stage_area.h)
and logs every place where the map's regions do not line up with what the
player sees: chunks of one area inside another area's rectangle, chunks of
an area outside its own rectangle, rooms of an area the camera cannot scroll
between (level steps of the layer map), variants of an area that move or
resize it, doors (kind 6 subtype 8 spawn points), and the scripted moves of
the player and camera (cutscene ops 4, 5, 11, 12) with where they lead.

  regionaudit.py ROM [--tsv OUT] [--layers]

Output: names, numbers and coordinates only (no ROM bytes).
Coordinates: chunks are global (128x128 world grid, 240x160 px each);
metatiles are 16 px; px are global pixels.
"""
import struct, sys, argparse
from collections import deque

ROM_BASE = 0x08000000
AREA_TABLE = 0x08293BEC      # [12] -> [3] AreaDesc*
CHUNK_COL = 0x082915EC       # metatile column -> chunk column
CHUNK_ROW = 0x08290DEC
AREA_GRID = 0x082921EC       # [row*128+col]: lo nibble area, hi nibble (15: none)
STAGE_VARIANTS = 0x0829FD94  # [17] u32 areaVariants per stage
STAGE_SCRIPTS = 0x0829FE48   # [17] -> script pointers
SPAWN_TYPES = 0x0829B404     # [12]
SPAWN_POINTS = 0x0829B434    # [12*3]
N_AREAS, N_STAGES = 12, 17
GRID_ROWS = 52               # rows 52+ of the grid's 128 are other tables (never reached)
CW, CH = 240, 160


class Rom:
    def __init__(self, path):
        self.b = open(path, 'rb').read()

    def ok(self, a):
        return ROM_BASE <= a < ROM_BASE + len(self.b)

    def u8(self, a): return self.b[a - ROM_BASE]
    def u16(self, a): return struct.unpack_from('<H', self.b, a - ROM_BASE)[0]
    def s16(self, a): return struct.unpack_from('<h', self.b, a - ROM_BASE)[0]
    def u32(self, a): return struct.unpack_from('<I', self.b, a - ROM_BASE)[0]
    def s32(self, a): return struct.unpack_from('<i', self.b, a - ROM_BASE)[0]


def area_desc(rom, area, variant):
    return rom.u32(rom.u32(AREA_TABLE + area * 4) + variant * 4)


def parse_desc(rom, d):
    D = {'addr': d, 'id': rom.u32(d), 'funcs': rom.u32(d + 4)}
    D['layouts'] = [rom.u32(d + 0xC + 4 * i) for i in range(3)]
    D['bgId'] = [rom.u32(d + 0x18 + 4 * i) for i in range(3)]
    D['prio'] = [rom.u32(d + 0x24 + 4 * i) for i in range(3)]
    D['scrbase'] = [rom.u32(d + 0x30 + 4 * i) for i in range(3)]
    D['scale'] = [(rom.s32(d + 0x3C + 8 * i), rom.s32(d + 0x40 + 8 * i)) for i in range(3)]
    D['offset'] = [(rom.s32(d + 0x54 + 8 * i), rom.s32(d + 0x58 + 8 * i)) for i in range(3)]
    D['left'], D['top'] = rom.s32(d + 0x6C), rom.s32(d + 0x70)
    g = rom.u32(d + 0x74)
    D['gfxMap'] = g
    D['shift'], D['w'], D['h'] = rom.u8(g), rom.u8(g + 2), rom.u8(g + 3)
    D['handlers'] = rom.u32(d + 0x78)
    D['layerMap'] = rom.u32(d + 0x7C)
    lm = D['layerMap']
    D['lshift'] = rom.u16(lm)
    cells = {}
    for r in range(D['h']):
        for c in range(D['w']):
            cells[c, r] = rom.u16(lm + 8 + 2 * ((r << D['lshift']) + c))
    D['cells'] = cells
    D['sets'] = {(c, r): rom.u8(g + 4 + (r << D['shift']) + c) for r in range(D['h']) for c in range(D['w'])}
    # per layer: chunk layout (stride, fill chunk, then chunks)
    lay = []
    for i in range(3):
        L = D['layouts'][i]
        if not rom.ok(L):
            lay.append(None); continue
        stride, fill = rom.u8(L), rom.u8(L + 1)
        lay.append({'stride': stride, 'fill': fill, 'w': rom.u8(L + 2), 'h': rom.u8(L + 3), 'addr': L})
    D['lay'] = lay
    nh = max([(v >> 8) & 15 for v in cells.values()] + [(v >> 4) & 15 for v in cells.values()] + [v & 15 for v in cells.values()] + [0]) + 1
    D['hlist'] = [(rom.u32(D['handlers'] + 12 * k), rom.u32(D['handlers'] + 12 * k + 4), rom.u32(D['handlers'] + 12 * k + 8)) for k in range(nh)]
    return D


def grid(rom, c, r):
    if not (0 <= c < 128 and 0 <= r < 128):
        return 0xFF
    return rom.u8(AREA_GRID + r * 128 + c)


def stage_variants(rom, s):
    v = rom.u32(STAGE_VARIANTS + 4 * s)
    return [(v >> (2 * a)) & 3 for a in range(N_AREAS)]


def area_of_px(rom, x, y):
    if x < 0 or y < 0:
        return None, None, None
    mc, mr = x >> 4, y >> 4
    if mc > 0x770 or mr > 0x4F5:
        return None, None, None
    c, r = rom.u8(CHUNK_COL + mc), rom.u8(CHUNK_ROW + mr)
    return grid(rom, c, r), c, r


def load_names(src):
    """function address -> first comment line before it in the decomp (optional)."""
    import re, glob, os
    names = {}
    if not src:
        return names
    for f in glob.glob(os.path.join(src, 'stage_*.c')):
        lines = open(f).read().split('\n')
        for i, l in enumerate(lines):
            m = re.match(r'void (sub_0800[0-9A-F]{4})\(struct StageLayer', l)
            if not m:
                continue
            j, com = i - 1, []
            while j >= 0 and lines[j].startswith('//'):
                if 'Not checked' not in lines[j]:
                    com.insert(0, lines[j][3:])
                j -= 1
            names[int(m.group(1)[4:], 16) | 1] = ' '.join(com)[:90]
            names[int(m.group(1)[4:], 16)] = names[int(m.group(1)[4:], 16) | 1]
    return names


def room_components(rom, D, ar):
    """chunk -> room index (components joined by layer map level steps <= 1); level 15 -> the list of
    rooms next to it (drawn as their edge), or -1"""
    L, T = D['left'], D['top']
    lvl = {}
    for (c, r), cell in D['cells'].items():
        g = grid(rom, L + c, T + r)
        if g >= 0xF0 or (g & 15) != ar:
            continue
        lvl[L + c, T + r] = cell >> 12
    comp, n = {}, 0
    for k in sorted(lvl):
        if k in comp:
            continue
        if lvl[k] == 15:
            comp[k] = -1; continue
        q = deque([k]); comp[k] = n
        while q:
            p = q.popleft()
            for d in ((1, 0), (-1, 0), (0, 1), (0, -1)):
                nb = (p[0] + d[0], p[1] + d[1])
                if nb in lvl and nb not in comp and lvl[nb] != 15 and abs(lvl[nb] - lvl[p]) <= 1:
                    comp[nb] = n; q.append(nb)
        n += 1
    # level-15 chunks: the edge of every room next to them (a wall between two rooms is drawn with either)
    edge = {}
    for k in comp:
        if comp[k] == -1:
            rs = sorted({comp[nb] for d in ((1, 0), (-1, 0), (0, 1), (0, -1), (1, 1), (1, -1), (-1, 1), (-1, -1))
                         for nb in [(k[0] + d[0], k[1] + d[1])] if lvl.get(nb, 15) != 15})
            if rs: edge[k] = rs
    comp.update(edge)
    return comp


def rooms_map(rom):
    out = {}
    for ar in range(N_AREAS):
        for v in range(3):
            D = parse_desc(rom, area_desc(rom, ar, v))
            out['%d:%d' % (ar, v)] = {'%d,%d' % k: i for k, i in room_components(rom, D, ar).items()}
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('rom')
    ap.add_argument('--tsv', default='-')
    ap.add_argument('--layers', action='store_true', help='print the per area/variant layer table (markdown)')
    ap.add_argument('--src', default='', help='decomp src/ dir, to name layer handlers')
    ap.add_argument('--rooms-json', action='store_true', help='print {"area:variant": {"cx,cy": room or [rooms]}} (motioncheck regions)')
    a = ap.parse_args()
    rom = Rom(a.rom)
    if a.rooms_json:
        import json
        print(json.dumps(rooms_map(rom)))
        return
    names = load_names(a.src)
    rows = []

    def row(kind, stage, area, var, where, what, detail):
        rows.append((kind, stage, area, var, where, what, detail))

    descs = {}
    for ar in range(N_AREAS):
        for v in range(3):
            descs[ar, v] = parse_desc(rom, area_desc(rom, ar, v))

    # stages that use each (area, variant)
    users = {}
    for s in range(N_STAGES):
        for ar, v in enumerate(stage_variants(rom, s)):
            users.setdefault((ar, v), []).append(s)

    def stg(ar, v):
        return ','.join('m%d' % s for s in users.get((ar, v), [])) or '-'

    # grid chunks per area
    gchunks = {}
    for r in range(GRID_ROWS):
        for c in range(128):
            g = grid(rom, c, r)
            if g < 0xF0:
                gchunks.setdefault(g & 15, []).append((c, r))

    seen = set()
    for (ar, v), D in sorted(descs.items()):
        if (D['addr'] in seen) or not users.get((ar, v)):
            continue
        seen.add(D['addr'])
        st = stg(ar, v)
        L, T, W, H = D['left'], D['top'], D['w'], D['h']
        row('area_rect', st, ar, v, 'chunks %d,%d..%d,%d' % (L, T, L + W - 1, T + H - 1),
            'px %d,%d %dx%d' % (L * CW, T * CH, W * CW, H * CH), 'desc %#x id %d' % (D['addr'], D['id']))
        # other areas' chunks inside the rectangle; none-chunks inside it
        for r in range(T, T + H):
            for c in range(L, L + W):
                g = grid(rom, c, r)
                if g >= 0xF0:
                    continue
                if g & 15 != ar:
                    row('foreign_chunk', st, ar, v, 'chunk %d,%d' % (c, r), 'grid area %d (hi %d)' % (g & 15, g >> 4),
                        'inside area %d rect' % ar)
        # the area's grid chunks outside its rectangle
        # (grid value 0 fills the unused world: it reads as area 0 but has no data)
        for (c, r) in gchunks.get(ar, []):
            if grid(rom, c, r) == 0 and not (L <= c < L + W and T <= r < T + H):
                continue
            if not (L <= c < L + W and T <= r < T + H):
                row('orphan_chunk', st, ar, v, 'chunk %d,%d' % (c, r), 'outside desc rect', 'grid hi %d' % (grid(rom, c, r) >> 4))
        # grid high nibble: 15 at a chunk of the area = camera stop (sub_080066AC)
        # level (layer map bits 12-15) of each chunk; rooms = components joined by steps <= 1
        lvl = {}
        for (c, r), cell in D['cells'].items():
            g = grid(rom, L + c, T + r)
            if g >= 0xF0 or (g & 15) != ar:
                continue
            lvl[L + c, T + r] = cell >> 12
        comp, ncomp = {}, 0
        sizes = []
        for k in sorted(lvl):
            if k in comp or lvl[k] == 15:
                continue
            q = deque([k]); comp[k] = ncomp; n = 0
            while q:
                p = q.popleft(); n += 1
                for d in ((1, 0), (-1, 0), (0, 1), (0, -1)):
                    nb = (p[0] + d[0], p[1] + d[1])
                    if nb in lvl and nb not in comp and lvl[nb] != 15 and abs(lvl[nb] - lvl[p]) <= 1:
                        comp[nb] = ncomp; q.append(nb)
            sizes.append(n); ncomp += 1
        main_c = max(range(ncomp), key=lambda i: sizes[i]) if ncomp else -1
        for i in range(ncomp):
            ks = sorted(k for k in comp if comp[k] == i)
            xs = [k[0] for k in ks]; ys = [k[1] for k in ks]
            levels = sorted(set(lvl[k] for k in ks))
            row('room' if i == main_c else 'separate_room', st, ar, v,
                'chunks %d,%d..%d,%d' % (min(xs), min(ys), max(xs), max(ys)),
                '%d chunks, levels %s' % (len(ks), '/'.join(map(str, levels))),
                'main room' if i == main_c else 'camera cannot scroll here from the main room (level step > 1)')
        for k in sorted(lvl):
            if lvl[k] == 15:
                row('camera_block', st, ar, v, 'chunk %d,%d' % k, 'layer map level 15', 'camera never centres here (sub_080066AC)')
        # level steps between neighbours: where the camera stops (sub_080066F8)
        for k in sorted(lvl):
            for d in ((1, 0), (0, 1)):
                nb = (k[0] + d[0], k[1] + d[1])
                if nb in lvl and abs(lvl[nb] - lvl[k]) > 1 and 15 not in (lvl[nb], lvl[k]):
                    row('room_edge', st, ar, v, 'chunk %d,%d|%d,%d' % (k + nb), 'levels %d|%d' % (lvl[k], lvl[nb]),
                        'camera edge (screen stops at the chunk border)')

    # variants of one area with a different rectangle (coordinate spaces that differ)
    for ar in range(N_AREAS):
        base = descs[ar, 0]
        for v in (1, 2):
            D = descs[ar, v]
            if D['addr'] == base['addr'] or not users.get((ar, v)):
                continue
            if (D['left'], D['top'], D['w'], D['h']) != (base['left'], base['top'], base['w'], base['h']):
                row('variant_rect', stg(ar, v), ar, v, 'chunks %d,%d %dx%d' % (D['left'], D['top'], D['w'], D['h']),
                    'variant 0: %d,%d %dx%d' % (base['left'], base['top'], base['w'], base['h']), 'same area, other rectangle')
            diff = [k for k in D['cells'] if base['cells'].get(k) != D['cells'][k]]
            if diff:
                xs = [k[0] + D['left'] for k in diff]; ys = [k[1] + D['top'] for k in diff]
                row('variant_layermap', stg(ar, v), ar, v, 'chunks %d,%d..%d,%d' % (min(xs), min(ys), max(xs), max(ys)),
                    '%d chunks differ from variant 0' % len(diff), 'handlers/levels change with the variant')
            if D['layouts'][0] != base['layouts'][0]:
                row('variant_layout', stg(ar, v), ar, v, 'layer 0 layout %#x' % D['layouts'][0], 'variant 0 %#x' % base['layouts'][0],
                    'other chunks in the same place')

    # doors: kind 6 subtype 8 spawn points
    for ar in range(N_AREAS):
        types = rom.u32(SPAWN_TYPES + 4 * ar)
        for v in range(3):
            if not users.get((ar, v)):
                continue
            p = rom.u32(SPAWN_POINTS + 4 * (ar * 3 + v))
            if not rom.ok(p):
                continue
            i = 1
            while i < 2000:
                x, y, t = rom.s32(p + 8 * i), rom.s16(p + 8 * i + 4), rom.u16(p + 8 * i + 6)
                if x < 0 or x > 0x800:
                    break
                ta = types + 8 * t
                kind, sub, p0 = rom.u8(ta + 1), rom.u8(ta + 2), rom.u8(ta + 3)
                if kind == 6 and sub == 8:
                    g, c, r = area_of_px(rom, x * 16, y * 16)
                    # the other side: 56 px through, either way
                    gl = area_of_px(rom, x * 16 - 64, y * 16)
                    gr = area_of_px(rom, x * 16 + 64, y * 16)
                    row('door', stg(ar, v), ar, v, 'mt %d,%d chunk %s,%s' % (x, y, c, r),
                        'opens from %s%s' % ('right' if p0 & 1 else 'left/either', ', hidden passage' if p0 & 2 else ''),
                        'left side area %s chunk %s,%s | right side area %s chunk %s,%s' % (
                            'none' if gl[0] is None or gl[0] >= 0xF0 else gl[0] & 15, gl[1], gl[2],
                            'none' if gr[0] is None or gr[0] >= 0xF0 else gr[0] & 15, gr[1], gr[2]))
                i += 1

    # cutscene scripts: camera templates/limits and player placements
    starts = [rom.u32(STAGE_SCRIPTS + 4 * s) for s in range(N_STAGES)]
    for s in range(N_STAGES):
        lst = starts[s]
        nxt = min([x for x in starts if x > lst] + [lst + 0x100])
        k = 0
        while lst + 4 * k < nxt and k < 64:
            sp = rom.u32(lst + 4 * k)
            if not rom.ok(sp):
                break
            pc, n = sp, 0
            while n < 600:
                op, arg, arg2, val = rom.u8(pc), rom.u8(pc + 1), rom.s16(pc + 2), rom.u32(pc + 4)
                if op == 0xFF:
                    break
                where = 'm%d script %d cmd %d' % (s, k, n)
                if op == 4 and rom.ok(val):
                    t = val
                    mode, chase, slot = rom.u8(t), rom.u8(t + 1), rom.u16(t + 2)
                    tx, ty = rom.s32(t + 4), rom.s32(t + 8)
                    lim = [rom.s32(t + 0x1C + 4 * i) for i in range(4)]
                    g, c, r = area_of_px(rom, tx >> 8, ty >> 8)
                    row('camera_template', 'm%d' % s, '' if g is None or g >= 0xF0 else g & 15, '', where,
                        'mode %d chase %#x follow slot %d target px %d,%d' % (mode, chase, slot, tx >> 8, ty >> 8),
                        'limits px L%d R%d T%d B%d' % tuple(x >> 8 for x in lim))
                elif op == 5 and 11 <= arg <= 14:
                    row('camera_limit', 'm%d' % s, '', '', where, 'LRTB'[arg - 11] + ' = px %d' % (rom.s32(pc + 4) >> 8), '')
                elif op == 5 and arg in (0, 16, 17):
                    row('camera_mode', 'm%d' % s, '', '', where, {0: 'mode %d' % val, 16: 'camera off, stage BGs off', 17: 'follow in area'}[arg], '')
                elif op == 11 and arg == 0 and rom.ok(val):
                    x, y = rom.s32(val + 4), rom.s32(val + 8)
                    g, c, r = area_of_px(rom, x >> 8, y >> 8)
                    row('player_spawn', 'm%d' % s, '' if g is None or g >= 0xF0 else g & 15, '', where,
                        'px %d,%d chunk %s,%s' % (x >> 8, y >> 8, c, r), 'actor type %d kind %d' % (rom.u8(val), rom.u8(val + 1)))
                elif op == 12 and arg2 == 0 and rom.ok(val):
                    x, y = rom.s32(val), rom.s32(val + 4)
                    g, c, r = area_of_px(rom, x >> 8, y >> 8)
                    row('actor_moved' if arg else 'player_moved', 'm%d' % s, '' if g is None or g >= 0xF0 else g & 15, '', where,
                        'slot %d to px %d,%d chunk %s,%s' % (arg, x >> 8, y >> 8, c, r), 'scripted teleport' if arg == 0 else '')
                pc += 8; n += 1
            k += 1

    out = sys.stdout if a.tsv == '-' else open(a.tsv, 'w')
    out.write('kind\tstages\tarea\tvariant\twhere\twhat\tdetail\n')
    for r in rows:
        out.write('\t'.join(str(x) for x in r) + '\n')
    if out is not sys.stdout:
        out.close()
        print('%d rows -> %s' % (len(rows), a.tsv), file=sys.stderr)

    if a.layers:
        seen = set()
        print('| area | var | stages | rect (chunks) | layer | BG | prio | scale x,y (/256) | offset | handlers (update / draw) |')
        print('|---|---|---|---|---|---|---|---|---|---|')
        for (ar, v), D in sorted(descs.items()):
            if D['addr'] in seen or not users.get((ar, v)):
                continue
            seen.add(D['addr'])
            for i in range(3):
                hs = sorted(set(((cell >> ((2 - i) * 4)) & 15) for cell in D['cells'].values()))
                hdesc = []
                for h in hs:
                    if h < len(D['hlist']):
                        u, d, _ = D['hlist'][h]
                        if u or d:
                            hdesc.append('%x:%s/%s' % (h, ('%x' % u)[-5:] if u else '-', ('%x' % d)[-5:] if d else '-'))
                        else:
                            hdesc.append('%x:off' % h)
                print('| %d | %d | %s | %d,%d %dx%d | %d | BG%d | %d | %d,%d | %d,%d | %s |' % (
                    ar, v, stg(ar, v), D['left'], D['top'], D['w'], D['h'], i, D['bgId'][i] >> 4, D['prio'][i] & 3,
                    D['scale'][i][0], D['scale'][i][1], D['offset'][i][0], D['offset'][i][1], ' '.join(hdesc)))
        if names:
            print('\nhandler notes:')
            for k in sorted(names):
                if k & 1:
                    print('  %x: %s' % (k & ~1, names[k]))


if __name__ == '__main__':
    main()
