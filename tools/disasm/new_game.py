"""Set up a game directory for the tools.

usage: new_game.py DIR ROM NAME
Creates DIR with a baserom.gba link, game.json (entry points from the
start-up code, the ARM interrupt code excluded from Thumb discovery) and a
unit list (crt0 and one unit for the rest). Then run, with MMZ_GAME=DIR:
discover.py --write, regen.py, lift.py.
"""
import hashlib, json, os, struct, sys
d, rom_path, name = sys.argv[1:4]
os.makedirs(d, exist_ok=True)
link = os.path.join(d, 'baserom.gba')
if not os.path.exists(link):
    os.symlink(os.path.abspath(rom_path), link)
rom = open(rom_path, 'rb').read()
agb = struct.unpack_from('<I', rom, 0x1B8)[0] & ~1
# first Thumb `push {..., lr}` that something points to, after the pool
seeds = sorted({(struct.unpack_from('<I', rom, o)[0] & ~1) for o in range(0, len(rom) - 3, 4)
                if struct.unpack_from('<I', rom, o)[0] & 1
                and 0x080001BC < struct.unpack_from('<I', rom, o)[0] < 0x08100000
                and rom[(struct.unpack_from('<I', rom, o)[0] & ~1) - 0x08000000 + 1] == 0xB5})
first = min(seeds + [agb])
cfg = {
    'name': name,
    'sha1': hashlib.sha1(rom).hexdigest(),
    'seeds': [['arm', '0x080000C0', 'Start'], ['arm', '0x080000FC', 'IntrMain'], ['thumb', '0x%08X' % agb, 'AgbMain']],
    'exclude': [['0x08000000', '0x08000100'], ['0x080001BC', '0x%08X' % first]],
    'pinned': [],
    'functions': 'functions.cfg',
    'units': 'units.txt',
}
json.dump(cfg, open(os.path.join(d, 'game.json'), 'w'), indent=2)
open(os.path.join(d, 'units.txt'), 'w').write(
    '# start address and name of each translation unit\n0x08000000 crt0\n0x%08X code\n' % first)
print('AgbMain %08X, Thumb code from %08X' % (agb, first))
