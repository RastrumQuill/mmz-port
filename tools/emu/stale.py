"""Find ROM data pointers that did not move in a shifted build.

Dumps EWRAM and IWRAM from the original and the shifted ROM at the given
frames (playing the intro route) and lists RAM words that hold a data
address in the original but the same, unshifted address in the shifted
build, with where that value occurs in the ROM.
usage: stale.py baserom.gba shifted.gba SHIFT FRAME [FRAME...]
"""
import os, struct, subprocess, sys, tempfile
here = os.path.dirname(os.path.abspath(__file__))
base, shifted, shift = sys.argv[1], sys.argv[2], int(sys.argv[3], 0)
frames = [int(f) for f in sys.argv[4:]]
DS, DE = 0x080C8E24, 0x08800000
t = tempfile.mkdtemp()
route = [l for l in open(os.path.join(here, 'routes/intro.txt')) if 'shot' not in l and not l.startswith('#')]
for tag, rom in (('a', base), ('b', shifted)):
    lines = [l for l in route if int(l.split()[0]) <= max(frames)]
    for f in frames:
        lines.append(f'{f} dump 0x02000000 0x40000 {t}/{tag}_ew_{f}\n')
        lines.append(f'{f} dump 0x03000000 0x8000 {t}/{tag}_iw_{f}\n')
    lines.sort(key=lambda l: int(l.split()[0]))
    lines.append(f'{max(frames)} end\n')
    open(f'{t}/{tag}.txt', 'w').writelines(lines)
    subprocess.run([os.path.join(here, 'runner'), rom, f'{t}/{tag}.txt'], check=True)
rom = open(base, 'rb').read()
for f in frames:
    for reg, addr in (('ew', 0x02000000), ('iw', 0x03000000)):
        a = open(f'{t}/a_{reg}_{f}', 'rb').read()
        b = open(f'{t}/b_{reg}_{f}', 'rb').read()
        for o in range(0, len(a), 4):
            x = struct.unpack_from('<I', a, o)[0]
            y = struct.unpack_from('<I', b, o)[0]
            old_code = 0x08000339 <= x < 0x080C8E22 and x & 1
            if (old_code or DS <= x < DE) and x == y and not 0x08500000 <= x < 0x08510000:
                hits = [0x08000000 + i for i in range(0, len(rom) - 3, 4) if struct.unpack_from('<I', rom, i)[0] == x]
                print('frame %d: %08X holds %08X (found in ROM at %s)' % (f, addr + o, x, ' '.join('%08X' % h for h in hits[:6])))
