"""Match our functions against another decompiled game's functions.

usage: match.py baserom.gba asm/code.s OBJDIR OUT.tsv
Writes: our function, address, their function, score, source object.
Exact signature matches score 1.0; others are ranked by 4-gram overlap and
scored with difflib.
"""
import difflib, glob, os, sys
from collections import defaultdict
sys.path.insert(0, os.path.dirname(__file__))
from extract import obj_functions, rom_functions
from sig import loosen

rom_path, asm_path, objdir, out_path = sys.argv[1:5]
rom = open(rom_path, 'rb').read()
ours = rom_functions(rom, asm_path, 0x080C8E22)
theirs = {}
for o in sorted(glob.glob(objdir + '/*.o')):
    for name, sig in obj_functions(o).items():
        if len(sig) >= 4:
            theirs[name] = (sig, os.path.basename(o))
print(len(ours), 'ours', len(theirs), 'theirs', file=sys.stderr)

by_sig = defaultdict(list)
by_loose = defaultdict(list)
for name, (sig, src) in theirs.items():
    by_sig[sig].append(name)
    by_loose[loosen(sig)].append(name)
index = defaultdict(set)
def grams(sig):
    return {sig[i:i + 4] for i in range(len(sig) - 3)}
tg = {}
for name, (sig, src) in theirs.items():
    g = grams(loosen(sig))
    tg[name] = g
    for x in g:
        index[x].add(name)

rows = []
for name, (addr, sig) in sorted(ours.items(), key=lambda kv: kv[1][0]):
    if len(sig) < 4:
        continue
    exact = by_sig.get(sig)
    if exact:
        rows.append((name, addr, ','.join(exact), 1.0, theirs[exact[0]][1]))
        continue
    loose = by_loose.get(loosen(sig))
    if loose:
        rows.append((name, addr, ','.join(loose), 0.99, theirs[loose[0]][1]))
        continue
    g = grams(loosen(sig))
    counts = defaultdict(int)
    for x in g:
        if len(index[x]) < 200:
            for n in index[x]:
                counts[n] += 1
    best = (0, None)
    for n, c in sorted(counts.items(), key=lambda kv: -kv[1])[:8]:
        tsig = theirs[n][0]
        if not 0.5 < len(tsig) / len(sig) < 2:
            continue
        r = difflib.SequenceMatcher(None, loosen(sig), loosen(tsig), autojunk=False).ratio()
        if r > best[0]:
            best = (r, n)
    if best[1]:
        rows.append((name, addr, best[1], round(best[0], 3), theirs[best[1]][1]))
with open(out_path, 'w') as f:
    for r in rows:
        f.write('%s\t%08X\t%s\t%s\t%s\n' % r)
ex = sum(1 for r in rows if r[3] >= 0.99)
hi = sum(1 for r in rows if 0.8 <= r[3] < 1.0)
mid = sum(1 for r in rows if 0.6 <= r[3] < 0.8)
print(f'exact {ex}, >=0.8 {hi}, 0.6-0.8 {mid}, of {len(ours)}', file=sys.stderr)
