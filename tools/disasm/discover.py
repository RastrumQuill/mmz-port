"""Find the game's functions.

usage: discover.py GBADISASM WORKDIR [--write]

Works on the game in $MMZ_GAME (see game.py). If game.json has no code_end
yet, it is found first: the strong seeds are cut at the first large gap,
disassembled, and the code ends where the last decoded function ends.
--write saves the function list to the game's functions file.

Strong seeds: the entry points and every ROM word pointing at a Thumb
`push {..., lr}`. Weaker candidates (other pointer targets, pointers found
in data tables, odd literals in code) are only added where the current
disassembly still has undecoded bytes and the bytes decode as a function.
"""
import json, os, re, struct, subprocess, sys
sys.path.insert(0, os.path.dirname(__file__))
from classify import load_listing, classify
from funcheck import thumb_func_extent, strict_thumb_func_extent
import ptrscan
import fixup

import game
dis, work = sys.argv[1:3]
os.chdir(game.GAME_DIR)
rom = open('baserom.gba', 'rb').read()
header = ''.join('%s_func 0x%08x %s\n' % (k, a, n) for k, a, n in game.SEEDS)

if not game.CODE_END:
    seeds = sorted({(struct.unpack_from('<I', rom, o)[0] & ~1) for o in range(0, len(rom) - 3, 4)
                    if struct.unpack_from('<I', rom, o)[0] & 1
                    and 0x08000000 <= struct.unpack_from('<I', rom, o)[0] < 0x08000000 + len(rom)
                    and rom[(struct.unpack_from('<I', rom, o)[0] & ~1) - 0x08000000 + 1] == 0xB5})
    cut = len(seeds)
    for i in range(1, len(seeds)):
        if seeds[i] - seeds[i - 1] > 0x20000:
            cut = i
            break
    seeds = seeds[:cut]
    with open(f'{work}/probe.cfg', 'w') as f:
        f.write(header + ''.join('thumb_func 0x%08x\n' % a for a in seeds))
    out = subprocess.run([dis, 'baserom.gba', '-c', f'{work}/probe.cfg'], capture_output=True, text=True).stdout
    with open(f'{work}/probe.s', 'w') as f:
        f.write('\t.include "asm/macros.inc"\n\t.syntax unified\n\t.text\n\n' + out)
    fixup.fix(f'{work}/probe.s', rom, game.ROOT)
    subprocess.run(['arm-none-eabi-as', '-march=armv5te', '-I', game.ROOT, f'-al={work}/probe.lst',
                    '-o', '/dev/null', f'{work}/probe.s'], check=True, stdout=subprocess.DEVNULL)
    spans = load_listing(f'{work}/probe.lst')
    end = max(a + size for a, size, k in spans if k == 'insn')
    game.save(code_end='0x%08X' % end, data_start='0x%08X' % ((end + 3) & ~3))
    ptrscan.CODE_END, ptrscan.DATA_START = end, (end + 3) & ~3
    print('code ends at %08X' % end, file=sys.stderr)
CODE_END = ptrscan.CODE_END

strong, weak = set(), set()
for o in range(0, len(rom) - 3, 4):
    w = struct.unpack_from('<I', rom, o)[0]
    if w & 1 and 0x08000000 <= w < CODE_END:
        t = w & ~1
        ins = struct.unpack_from('<H', rom, t - 0x08000000)[0]
        if (ins & 0xFF00) == 0xB500:
            strong.add(t)
        else:
            weak.add(t)
funcs = set(strong)
rejected = set()

def disasm(seeds):
    with open(f'{work}/mmz.cfg', 'w') as f:
        f.write(header)
        for a in sorted(seeds):
            f.write('thumb_func 0x%08x\n' % a)
    r = subprocess.run([dis, 'baserom.gba', '-c', f'{work}/mmz.cfg'], capture_output=True, text=True)
    return r.stdout if r.returncode == 0 else None

def run(added=()):
    """Disassemble with funcs; if gbadisasm fails, drop added seeds that break it."""
    out = disasm(funcs)
    if out is None:
        bad = sorted(added) or sorted(funcs)
        # shrink the set of suspects by halves
        while len(bad) > 1:
            half = bad[:len(bad) // 2]
            if disasm(funcs - set(half)) is None:
                bad = bad[len(bad) // 2:]
            else:
                bad = half
        print('dropping seed %08x (breaks gbadisasm)' % bad[0], file=sys.stderr)
        funcs.discard(bad[0])
        rejected.add(bad[0])
        return run([a for a in added if a != bad[0]])
    with open(f'{work}/code.s', 'w') as f:
        f.write('\t.include "asm/macros.inc"\n\t.syntax unified\n\t.text\n\n' + out + '\t.align 2, 0\n')
    fixup.fix(f'{work}/code.s', rom, game.ROOT)
    subprocess.run(['arm-none-eabi-as', '-march=armv5te', '-I', game.ROOT, f'-al={work}/code.lst',
                    '-o', '/dev/null', f'{work}/code.s'], check=True, stdout=subprocess.DEVNULL)

add = ()
for i in range(20):
    run(add)
    spans = load_listing(f'{work}/code.lst')
    r, labels, kind, pool = ptrscan.load('baserom.gba', f'{work}/code.s')
    ptrs, data_labels, new_funcs = ptrscan.scan(r, labels, kind, pool, spans)
    json.dump({'ptrs': {hex(a): w for a, w in ptrs.items()}, 'data_labels': sorted(data_labels),
               'new_funcs': []}, open(f'{work}/ptrs.json', 'w'))
    # referenced from code literals or pointer tables: follow the control flow
    referenced = set(new_funcs) | {p & ~1 for p in pool if p & 1 and p < CODE_END}
    cands = set(weak) | referenced
    # unreferenced functions: undecoded bytes that start (after alignment
    # padding) with `push {..., lr}`, right after the previous function
    runs = []
    for a, size, k in spans:
        if k != 'byte':
            continue
        if runs and runs[-1][0] + runs[-1][1] == a:
            runs[-1][1] += size
        else:
            runs.append([a, size])
    for a, size in runs:
        if a & 1:
            continue
        b = a
        while b < a + size - 2 and rom[b - 0x08000000:b - 0x08000000 + 2] == b'\0\0':
            b += 2
        if rom[b - 0x08000000 + 1] == 0xB5:
            cands.add(b)
    add = set()
    covered = 0
    for c in sorted(cands):
        if c in funcs or c in rejected or c < covered or classify(spans, c) != 'gap':
            continue
        chunk = rom[c - 0x08000000:c - 0x08000000 + 12]
        if sum(32 <= b < 127 for b in chunk) >= 10:
            continue  # text, not code
        if game.excluded(c):
            continue  # cartridge header, ARM code copied to RAM
        end = (thumb_func_extent if c in referenced else strict_thumb_func_extent)(rom, c)
        if end is None:
            continue
        add.add(c)
        covered = end
    print(f'pass {i + 1}: {len(funcs)} seeds, adding {len(add)}', file=sys.stderr)
    if not add:
        break
    funcs |= add

if '--write' in sys.argv:
    import shutil
    shutil.copy(f'{work}/mmz.cfg', game.FUNCTIONS)
