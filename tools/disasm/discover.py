"""Find the game's functions and disassemble asm/code.s.

usage: discover.py GBADISASM WORKDIR

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

dis, work = sys.argv[1:3]
root = os.path.join(os.path.dirname(__file__), '../..')
os.chdir(root)
rom = open('baserom.gba', 'rb').read()
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
header = 'arm_func 0x080000c0 Start\narm_func 0x080000fc IntrMain\nthumb_func 0x0800033c AgbMain\n'

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
    with open('asm/code.s', 'w') as f:
        f.write('\t.include "asm/macros.inc"\n\t.syntax unified\n\t.text\n\n' + out + '\t.align 2, 0\n')
    subprocess.run(['arm-none-eabi-as', '-mcpu=arm7tdmi', '-I', '.', f'-al={work}/code.lst',
                    '-o', '/dev/null', 'asm/code.s'], check=True, stdout=subprocess.DEVNULL)

add = ()
for i in range(20):
    run(add)
    spans = load_listing(f'{work}/code.lst')
    r, labels, kind, pool = ptrscan.load('baserom.gba', 'asm/code.s')
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
        if c < 0x08000100 or 0x080001BC <= c < 0x080002DC:
            continue  # cartridge header; ARM interrupt code copied to IWRAM
        end = (thumb_func_extent if c in referenced else strict_thumb_func_extent)(rom, c)
        if end is None:
            continue
        add.add(c)
        covered = end
    print(f'pass {i + 1}: {len(funcs)} seeds, adding {len(add)}', file=sys.stderr)
    if not add:
        break
    funcs |= add
