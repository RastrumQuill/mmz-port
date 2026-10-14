"""Score how close a C function compiles to the original.

usage: score.py FILE.c FUNC [-v]
Compiles FILE.c like the Makefile does, takes FUNC from the object and
compares it with FUNC in the original ROM (bounds from asm/*.s), with
branch offsets and literal pools masked. Prints 100.0 for a match; -v shows
both disassemblies side by side.
"""
import difflib, os, subprocess, sys, tempfile
here = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(here, 'match'))
from sig import signature
from extract import obj_functions
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB

os.chdir(os.path.join(here, '..'))
path, func = sys.argv[1], sys.argv[2]
t = tempfile.mkdtemp()
cpp = subprocess.run(['cpp', '-I', 'tools/agbcc/include', '-iquote', 'include', '-nostdinc', '-undef',
                      '-std=gnu89', path], capture_output=True, check=True).stdout
subprocess.run(['tools/agbcc/bin/agbcc', '-mthumb-interwork', '-O2', '-fhex-asm', '-o', t + '/o.s'],
               input=cpp, check=True)
subprocess.run(['arm-none-eabi-as', '-mcpu=arm7tdmi', '-I', '.', '-o', t + '/o.o', t + '/o.s'], check=True)
mine = obj_functions(t + '/o.o')[func]

import glob, re
starts = []
for f in glob.glob('asm/*.s'):
    for m in re.finditer(r'^(\w+): @ 0x([0-9A-Fa-f]+)', open(f).read(), re.M):
        starts.append((int(m.group(2), 16), m.group(1)))
starts.sort()
addr = size = None
for k, (a, n) in enumerate(starts):
    if n == func:
        addr = a
        size = (starts[k + 1][0] if k + 1 < len(starts) else 0x080C8E22) - a
rom = open('baserom.gba', 'rb').read()
theirs = signature(rom, addr - 0x08000000, addr - 0x08000000 + size, 0x08000000)
score = difflib.SequenceMatcher(None, mine, theirs, autojunk=False).ratio() * 100
print('%.1f' % score)
if '-v' in sys.argv:
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    o = addr - 0x08000000
    a = ['%s %s' % (i.mnemonic, i.op_str) for i in md.disasm(rom[o:o + size], addr)]
    text = subprocess.run(['arm-none-eabi-objcopy', '-O', 'binary', '-j', '.text', t + '/o.o', '/dev/stdout'],
                          capture_output=True).stdout
    b = ['%s %s' % (i.mnemonic, i.op_str) for i in md.disasm(text, 0)]
    for k in range(max(len(a), len(b))):
        x = a[k] if k < len(a) else ''
        y = b[k] if k < len(b) else ''
        print('%s %-36s %s' % ('  ' if x.split()[:1] == y.split()[:1] else '!!', x, y))
