"""Find switch jump tables gbadisasm did not follow and add them to the
game's function list, so their cases are disassembled as code.

usage: jumptables.py     (then run regen.py again)
A missed table shows as `mov pc, rN` whose table is followed by .byte lines.
The entry count comes from the `cmp rN, #MAX` before it, else from how many
words point just past the table.
"""
import glob, os, re, sys
here = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, here)
import game
os.chdir(game.GAME_DIR)

rom = open('baserom.gba', 'rb').read()
def word(a):
    o = a - 0x08000000
    return int.from_bytes(rom[o:o + 4], 'little')

have = set()
for line in open(game.FUNCTIONS):
    t = line.split()
    if len(t) >= 2 and t[0] == 'jump_table':
        have.add(int(t[1], 0))

new = []
for f in sorted(glob.glob('asm/*.s')):
    lines = open(f).read().split('\n')
    for i, l in enumerate(lines):
        if not re.match(r'\tmov pc, r\d', l):
            continue
        for j in range(i + 1, min(i + 6, len(lines))):
            m = re.match(r'_[0-9A-F]{8}: \.4byte (_[0-9A-F]{8})', lines[j])
            if not m:
                continue
            tab = int(m.group(1)[1:], 16)
            k = lines.index(m.group(1) + ':', j) if (m.group(1) + ':') in lines[j:] else -1
            if k < 0 or not lines[k + 1].startswith('\t.byte') or tab in have:
                break
            n = 0
            while tab < word(tab + 4 * n) < tab + 0x2000:
                n += 1
            for b in range(i - 1, max(i - 12, 0), -1):
                c = re.match(r'\tcmp r\d, #(0x[0-9a-f]+|\d+)$', lines[b])
                if c:
                    n = min(n, int(c.group(1), 0) + 1)
                    break
            if n:
                new.append((tab, n))
            break

with open(game.FUNCTIONS, 'a') as out:
    for tab, n in new:
        out.write('jump_table 0x%08x %d\n' % (tab, n))
print('jump tables added:', len(new), file=sys.stderr)
