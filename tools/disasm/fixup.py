"""Turn lines the assembler rejects into raw words from the ROM.

gbadisasm sometimes decodes data as ARM instructions that do not exist on the
GBA (or at all). fix(path) replaces each such line with `.4byte` holding the
ROM bytes at that address, so the file assembles to the same bytes.
"""
import re, struct, subprocess

def fix(path, rom, root):
    for _ in range(5):
        r = subprocess.run(['arm-none-eabi-as', '-march=armv5te', '-I', root, '-o', '/dev/null', path],
                           capture_output=True, text=True)
        bad = sorted({int(m.group(1)) for m in re.finditer(r':(\d+): Error', r.stderr)})
        if not bad:
            return
        lines = open(path).read().split('\n')
        thumb = {}
        for n in bad:
            k = n - 1
            while k >= 0 and '_func_start' not in lines[k]:
                k -= 1
            thumb[n] = k >= 0 and 'thumb' in lines[k]
            lines[n - 1] = '\t.%s 0x00000000 @ fixup' % ('2byte' if thumb[n] else '4byte')
        open(path, 'w').write('\n'.join(lines))
        lst = subprocess.run(['arm-none-eabi-as', '-march=armv5te', '-I', root, '-al', '-o', '/dev/null', path],
                             capture_output=True, text=True).stdout
        # listing lines: "  LINE ADDR BYTES  source"
        addr_of = {}
        for l in lst.split('\n'):
            m = re.match(r'\s*(\d+) ([0-9a-f]{4,8}) [0-9A-F]+\s+\.[24]byte 0x00000000 @ fixup', l)
            if m:
                addr_of[int(m.group(1))] = int(m.group(2), 16)
        lines = open(path).read().split('\n')
        for n in bad:
            a = addr_of.get(n)
            if a is not None and thumb[n]:
                lines[n - 1] = '\t.2byte 0x%04X @ not an instruction' % struct.unpack_from('<H', rom, a)[0]
            elif a is not None:
                lines[n - 1] = '\t.4byte 0x%08X @ not an instruction' % struct.unpack_from('<I', rom, a)[0]
        open(path, 'w').write('\n'.join(lines))
