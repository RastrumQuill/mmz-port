#!/usr/bin/env python3
"""Turn map_raw.tsv files (build_map/mmz, port/maptrace.c) into DTK's dynamic map file.

usage: tools/map_edges.py EXE OUT RAW...
       tools/map_edges.py --veneers   (for MMZ_MAP_VENEERS when recording)

EXE is the instrumented executable (its symbol table maps host code addresses to
functions); RAW are the files the runs wrote. OUT gets, for `dtk map.build --dynamic`:
    CALLER<TAB>CALLEE<TAB>1          GBA function addresses (hex)
    touch<TAB>FN<TAB>ADDR<TAB>SIZE<TAB>r|w   EWRAM/IWRAM/I/O ranges a function used
Host functions are named lift_<asm name> (lifted/), or the hand-written name
exported with LIFT_EXPORT*(_AS) in src/; anything else (the port, the runtime)
is left out.
"""
import bisect, collections, glob, os, re, subprocess, sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))


def gba_names():
    """asm name -> GBA address (ROM copies for code run from IWRAM)."""
    out = {}
    for line in open(os.path.join(ROOT, "lifted", "table.c")):
        m = re.match(r"\s*\{\s*0x([0-9A-Fa-f]+),\s*lift_(\w+?)(?:___\w+)?,\s*1\s*\}", line)
        if not m:
            continue
        name, addr = m.group(2), int(m.group(1), 16) & ~1
        h = re.fullmatch(r"sub_([0-9A-Fa-f]{8})", name)
        if h:
            addr = int(h.group(1), 16)
        if name not in out or addr >> 24 == 8:
            out[name] = addr
    return out


def exports():
    """hand-written C name -> asm name."""
    out = {}
    for f in glob.glob(os.path.join(ROOT, "src", "*.c")):
        for m in re.finditer(r"LIFT_EXPORT(?:_VOID)?(_AS)?\(\s*(\w+)\s*(?:,\s*(\w+)\s*)?\)", open(f, errors="replace").read()):
            c, asm = m.group(2), m.group(3) if m.group(1) else m.group(2)
            out[c] = asm
    return out


def veneers():
    """GBA addresses of call veneers (functions that only `bx rN`): an indirect call
    made from one belongs to the veneer's caller."""
    out, cur, first = set(), None, True
    for f in glob.glob(os.path.join(ROOT, "asm", "*.s")):
        for line in open(f, errors="replace"):
            m = re.match(r"(\w+): @ 0x([0-9A-Fa-f]{8})", line)
            if m:
                cur, first = int(m.group(2), 16), True
                continue
            t = line.strip()
            if cur is not None and first and t and not t.startswith(("@", ".")):
                if re.fullmatch(r"bx r\d+", t):
                    out.add(cur)
                first = False
    return out


def symbols(exe, names, exp):
    """sorted (start, end, gba addr) of the game's functions in the executable."""
    rows = []
    nm = subprocess.run(["nm", "-S", "--defined-only", exe], capture_output=True, text=True).stdout
    for line in nm.splitlines():
        f = line.split()
        if len(f) != 4 or f[2] not in "tTwW":
            continue
        start, size, sym = int(f[0], 16), int(f[1], 16), f[3]
        asm = None
        m = re.fullmatch(r"lift_(\w+?)(?:___\w+)?", sym)
        if m:
            asm = m.group(1)
        elif sym in exp:
            asm = exp[sym]
        if asm in names:
            rows.append((start, start + size, names[asm]))
    rows.sort()
    return rows


def main():
    if sys.argv[1:] == ["--veneers"]:
        print(",".join("%08X" % v for v in sorted(veneers())))
        return
    if len(sys.argv) < 4:
        sys.exit(__doc__)
    exe, out = sys.argv[1], sys.argv[2]
    rows = symbols(exe, gba_names(), exports())
    vens = veneers()
    starts = [r[0] for r in rows]
    by_start = {r[0]: r[2] for r in rows}

    def fn_at(a):
        i = bisect.bisect_right(starts, a) - 1
        return rows[i][2] if i >= 0 and a < rows[i][1] else None

    edges, touch, unknown = set(), collections.defaultdict(set), 0
    for raw in sys.argv[3:]:
        for line in open(raw):
            f = line.rstrip("\n").split("\t")
            if f[0] in ("call", "icall"):
                a, b = fn_at(int(f[1], 16)), by_start.get(int(f[2], 16)) or fn_at(int(f[2], 16))
                if f[0] == "icall" and a in vens and len(f) > 3:
                    a = fn_at(int(f[3], 16))
                if a is None or b is None:
                    unknown += 1
                    continue
                if a != b:
                    edges.add((a, b))
            elif f[0] == "touch":
                a = fn_at(int(f[1], 16))
                if a is None:
                    unknown += 1
                    continue
                touch[(a, f[3])].add(int(f[2], 16))
    nt = 0
    with open(out, "w") as o:
        o.write("# dynamic call edges and memory use from build_map/mmz runs (tools/map_edges.py)\n")
        for a, b in sorted(edges):
            o.write("%08X\t%08X\t1\n" % (a, b))
        for (fn, rw), words in sorted(touch.items()):
            ws = sorted(words)
            lo = prev = ws[0]
            for w in ws[1:] + [None]:
                if w is not None and w == prev + 4:
                    prev = w
                    continue
                o.write("touch\t%08X\t%08X\t%d\t%s\n" % (fn, lo, prev + 4 - lo, rw))
                nt += 1
                if w is not None:
                    lo = prev = w
    print("edges %d, touch ranges %d, unresolved %d, veneers %d" % (len(edges), nt, unknown, len(vens)))


if __name__ == "__main__":
    main()
