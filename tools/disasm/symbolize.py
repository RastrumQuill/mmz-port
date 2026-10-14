"""Replace ROM addresses with symbols.

Rewrites the literal pools in asm/code.s to use labels, and writes
data/data.s: the data part of the ROM as .incbin runs, with a label at
every referenced address and .4byte SYMBOL for every pointer found by
ptrscan.py.
usage: symbolize.py baserom.gba asm/code.s ptrs.json data/data.s
"""
import re, sys, json, struct
from ptrscan import DATA_START, CODE_END

rom_path, asm_path, ptrs_path, out_path = sys.argv[1:5]
rom = open(rom_path, 'rb').read()
s = open(asm_path).read()
d = json.load(open(ptrs_path))
ptrs = {int(a, 16): w for a, w in d['ptrs'].items()}

code_labels = {}
kind = {}
for m in re.finditer(r'^\s*(arm|thumb|non_word_aligned_thumb)_func_start (\w+)', s, re.M):
    kind[m.group(2)] = 'arm' if m.group(1) == 'arm' else 'thumb'
for m in re.finditer(r'^(\w+):(?: @ 0x([0-9A-Fa-f]+))?', s, re.M):
    n = m.group(1)
    if m.group(2):
        code_labels[int(m.group(2), 16)] = n
    elif re.search(r'_0[89][0-9A-F]{6}$', n):
        code_labels[int(n[-8:], 16)] = n

data_targets = set(d['data_labels'])
for w in ptrs.values():
    if w >= DATA_START:
        data_targets.add(w)
for w in re.findall(r'\.4byte 0x(08[0-9A-Fa-f]{6})', s):
    w = int(w, 16)
    if w >= DATA_START:
        data_targets.add(w)
rom_end = len(rom)
while rom[rom_end - 1] == 0xFF:
    rom_end -= 1
data_targets = {t for t in data_targets if t < 0x08000000 + rom_end}

def data_name(a):
    return 'gUnk_%08X' % a

unresolved = []
used_code_labels = set()
def sym(w):
    if w >= DATA_START:
        return data_name(w) if w in data_targets else None
    a = w & ~1
    n = code_labels.get(a)
    if n is None:
        return None
    if w & 1:
        if kind.get(n) == 'thumb':
            return n
        if kind.get(n) is None:
            used_code_labels.add(n)
            return n + '+1'  # Thumb code label that is not a function start
        return None
    if kind.get(n) == 'thumb':
        return None  # even pointer to a Thumb function would gain bit 0
    if kind.get(n) is None:
        used_code_labels.add(n)
    return n

def repl(m):
    w = int(m.group(1), 16)
    n = sym(w)
    if n is None:
        unresolved.append(w)
        return m.group(0)
    return '.4byte ' + n
s2 = re.sub(r'\.4byte 0x(08[0-9A-Fa-f]{6})\b', repl, s)
open(asm_path, 'w').write(s2)

# Data the code addresses with constants it builds itself (movs/lsls) has to
# stay at its address. The data around it is split into sections that can
# move: .rodata before the pinned bank and .rodata.after behind it. The 0xFF
# padding between them is left to the linker.
PINNED = [(0x08500000, 0x0850C03E)]
end = 0x08000000 + rom_end
sections = []
pos = DATA_START
for ps, pe in PINNED:
    a_end = ps
    while rom[a_end - 1 - 0x08000000] == 0xFF:
        a_end -= 1
    b_start = pe
    while rom[b_start - 0x08000000] == 0xFF:
        b_start += 1
    sections.append(('.rodata' if pos == DATA_START else '.rodata.after', pos, a_end))
    sections.append(('.rodata.bank_%08X' % ps, ps, pe))
    pos = b_start
sections.append(('.rodata.after', pos, end))

out = ['\t.include "asm/macros.inc"', '']
events = sorted(set(data_targets) | set(a for a in ptrs if a >= DATA_START))
def incbin(a, b):
    if b > a:
        out.append('\t.incbin "baserom.gba", 0x%X, 0x%X' % (a - 0x08000000, b - a))
for name, s_start, s_end in sections:
    out.append('\n\t.section %s, "a"' % name)
    pos = s_start
    for e in events:
        if e < pos or e >= s_end:
            continue
        incbin(pos, e)
        pos = e
        if e in data_targets:
            out.append('\t.global %s\n%s:' % (data_name(e), data_name(e)))
        if e in ptrs:
            n = sym(ptrs[e])
            if n is None:
                unresolved.append(ptrs[e])
                continue
            out.append('\t.4byte %s' % n)
            pos = e + 4
    incbin(pos, s_end)
open(out_path, 'w').write('\n'.join(out) + '\n')
# the data refers to these local code labels, so they have to be global
code = open(asm_path).read()
for n in sorted(used_code_labels):
    code = re.sub(r'^%s:' % n, '\t.global %s\n%s:' % (n, n), code, count=1, flags=re.M)
open(asm_path, 'w').write(code)
json.dump(sorted({w & ~1 for w in unresolved if w & 1 and w < CODE_END}), open(ptrs_path + ".unresolved.json", "w"))
print("data labels", len(data_targets), 'unresolved', len(unresolved),
      [hex(x) for x in sorted(set(unresolved))[:20]], file=sys.stderr)
