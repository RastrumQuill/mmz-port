"""Compare functions in the built ROM with the original.

usage: asmdiff.py [FUNC...]   (no arguments: list functions that differ)
"""
import subprocess, sys
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB

base = open('baserom.gba', 'rb').read()
built = open('mmz.gba', 'rb').read()
syms = []
for line in subprocess.run(['arm-none-eabi-nm', '-n', '-S', 'build/mmz.elf'], capture_output=True, text=True).stdout.splitlines():
    f = line.split()
    if len(f) == 4 and f[2] in 'Tt':
        syms.append((int(f[0], 16), int(f[1], 16), f[3]))
md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)

def show(addr, size):
    o = addr - 0x08000000
    a = list(md.disasm(base[o:o + size], addr))
    b = list(md.disasm(built[o:o + size], addr))
    for k in range(max(len(a), len(b))):
        x = '%s %s' % (a[k].mnemonic, a[k].op_str) if k < len(a) else ''
        y = '%s %s' % (b[k].mnemonic, b[k].op_str) if k < len(b) else ''
        mark = '  ' if x == y else '!!'
        print('%08X %s %-36s %s' % (a[k].address if k < len(a) else 0, mark, x, y))

if len(sys.argv) > 1:
    for name in sys.argv[1:]:
        for addr, size, n in syms:
            if n == name:
                print('==', name, hex(addr), 'size', size)
                show(addr, size)
else:
    for addr, size, n in syms:
        o = addr - 0x08000000
        if size and base[o:o + size] != built[o:o + size]:
            print('differs: %s at %08X' % (n, addr))
