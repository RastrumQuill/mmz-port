"""Split the full disassembly into translation units.

usage: split.py FULL_CODE_S

Reads tools/disasm/units.txt and writes:
  asm/UNIT.s                      every unit, as assembly
  asm/nonmatching/UNIT/FUNC.inc   each function of a unit that has src/UNIT.c,
                                  for the functions not decompiled yet
  units.ld                        the unit objects in ROM order, for the
                                  linker scripts
  units.mk                        the unit list for the Makefile
Labels used outside the unit that defines them are made global.
"""
import os, re, sys

here = os.path.dirname(os.path.abspath(__file__))
root = os.path.join(here, '../..')
os.chdir(root)

full = open(sys.argv[1]).read()
units = []
for line in open(os.path.join(here, 'units.txt')):
    line = line.split('#')[0].split()
    if line:
        units.append((int(line[0], 16), line[1]))

body = full[full.index('\n\n') + 2:]  # drop the header lines
starts = [(m.start(), int(m.group(3), 16)) for m in re.finditer(
    r'^\t(arm|thumb|non_word_aligned_thumb)_func_start (\w+)\n\w+: @ 0x([0-9A-Fa-f]+)', body, re.M)]

def cut(addr):
    if addr == 0x08000000:
        return 0
    for pos, a in starts:
        if a == addr:
            return pos
    sys.exit('no function starts at %08X' % addr)

pieces = []
for k, (addr, name) in enumerate(units):
    a = cut(addr)
    b = cut(units[k + 1][0]) if k + 1 < len(units) else len(body)
    pieces.append([name, body[a:b]])

label_re = re.compile(r'^(\w+):', re.M)
ref_re = re.compile(r'\b(_0[89][0-9A-F]{6}|sub_0[89][0-9A-F]{6})\b')
defined = {name: set(label_re.findall(text)) for name, text in pieces}
needed_global = set()
for name, text in pieces:
    for ref in set(ref_re.findall(text)):
        if ref not in defined[name]:
            needed_global.add(ref)
for p in pieces:
    for lab in sorted(needed_global & defined[p[0]]):
        if re.search(r'^\t\.global %s$' % lab, p[1], re.M):
            continue
        p[1] = re.sub(r'^%s:' % lab, '\t.global %s\n%s:' % (lab, lab), p[1], count=1, flags=re.M)

header = '\t.include "asm/macros.inc"\n\t.syntax unified\n\t.text\n\n'
for name, text in pieces:
    with open(os.path.join('asm', name + '.s'), 'w') as f:
        f.write(header + text)
    if os.path.exists(os.path.join('src', name + '.c')):
        d = os.path.join('asm', 'nonmatching', name)
        os.makedirs(d, exist_ok=True)
        funcs = list(re.finditer(r'^\t(arm|thumb|non_word_aligned_thumb)_func_start (\w+)\n\2: @ .*\n', text, re.M))
        for k, m in enumerate(funcs):
            end = funcs[k + 1].start() if k + 1 < len(funcs) else len(text)
            with open(os.path.join(d, m.group(2) + '.inc'), 'w') as f:
                f.write(text[m.end():end].rstrip('\n') + '\n')

with open('units.ld', 'w') as f:
    for name, _ in pieces[1:]:
        f.write('build/%s.o(.text);\n' % name)
with open('units.mk', 'w') as f:
    f.write('UNITS := %s\n' % ' '.join(name for name, _ in pieces))
if os.path.exists('asm/code.s'):
    os.remove('asm/code.s')
print('units:', ', '.join(name for name, _ in pieces), file=sys.stderr)
