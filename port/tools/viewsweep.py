#!/usr/bin/env python3
"""Sweep the wide view's off-screen checks over every place a warp reaches.

For each mission 1-17 and checkpoint 0-3 (and the base), a headless run
warps there (--view x3 by default), waits for the camera to settle and runs
the route commands `where`, `viewchunks` (static chunk checks) and
`viewprobe` (the game's camera moved over the whole wide view, the GBA
picture compared with the view's). Prints one line per place and the
flagged chunks / probes; with --out DIR keeps the probes' PNGs there.

    port/tools/viewsweep.py [--mmz build_port/mmz] [--view x3] [--jobs 4] [--out DIR]
                            [--only m7cp0,base]

Places a warp cannot reach (a checkpoint the mission does not have) are
skipped; the same bookmark twice is reported once.
"""
import argparse, concurrent.futures as cf, os, re, subprocess, sys, tempfile

def places(only):
    ps = [("base", "mmz:base")] + [(f"m{m}cp{c}", f"mmz:m{m} a0 v0 cp{c}") for m in range(1, 18) for c in range(4)]
    if only:
        keep = set(only.split(","))
        ps = [p for p in ps if p[0] in keep]
    return ps

def run(mmz, view, out, name, bm, wait):
    with tempfile.TemporaryDirectory() as d:
        pre = os.path.join(out, name) if out else ""
        route = os.path.join(d, "r.txt")
        with open(route, "w") as f:
            f.write(f"0 warp {bm}\n10 cheat invincible 1\n10 cheat noenemies 1\n{wait} where\n{wait} viewchunks\n{wait} viewprobe {pre}\n{wait + 600} end\n")
        try:
            p = subprocess.run([mmz, "--headless", "--route", route, "--view", view], capture_output=True, text=True, timeout=900, cwd=d)
            err = p.stderr
        except subprocess.TimeoutExpired:
            return name, None, ["timeout"]
    where = re.search(r"^where: frame \d+ (\S+ .*?) life", err, re.M)
    lines = [l for l in err.splitlines() if l.startswith(("viewchunks:", "viewprobe:"))]
    if "did not reach mission" in err:
        return name, None, ["warp did not reach the mission"]
    return name, where.group(1) if where else None, lines

def main():
    a = argparse.ArgumentParser()
    a.add_argument("--mmz", default=os.path.join(os.path.dirname(__file__), "../../build_port/mmz"))
    a.add_argument("--view", default="x3")
    a.add_argument("--jobs", type=int, default=4)
    a.add_argument("--out", default="")
    a.add_argument("--only", default="")
    a.add_argument("--wait", type=int, default=240, help="frames after the warp before the checks")
    o = a.parse_args()
    mmz = os.path.abspath(o.mmz)
    if o.out: os.makedirs(o.out, exist_ok=True)
    seen, flagged = set(), 0
    with cf.ThreadPoolExecutor(o.jobs) as ex:
        futs = [ex.submit(run, mmz, o.view, os.path.abspath(o.out) if o.out else "", n, b, o.wait) for n, b in places(o.only)]
        for f in futs:
            name, where, lines = f.result()
            if where is None:
                print(f"{name}: skipped ({'; '.join(lines) or 'no place'})"); continue
            key = re.sub(r" x-?\d+ y-?\d+ cx-?\d+ cy-?\d+", "", where)
            if key in seen and "cp0" not in name:
                print(f"{name}: same place as before ({where})"); continue
            seen.add(key)
            summ = [l for l in lines if " frame " in l and ("loaded" in l)] + [l for l in lines if l.startswith("viewprobe: done")]
            flags = [l for l in lines if (l.startswith("viewchunks:") and "loaded" not in l) or l.endswith("FLAG")]
            flagged += bool(flags)
            print(f"{name}: {where}")
            for l in summ: print("   " + l)
            for l in flags: print("   ! " + l)
            sys.stdout.flush()
    print(f"viewsweep: {flagged} places with flags")

if __name__ == "__main__":
    main()
