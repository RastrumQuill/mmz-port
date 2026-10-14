"""Build the relocation test ROM (make moved) and list reads of old data addresses.

Any read of the old data addresses comes from a ROM address that is still a
raw number (a pointer the symbolizer missed).
usage: trace_stale.py [FRAMES] [ROUTE]
"""
import collections, os, struct, subprocess, sys, tempfile
here = os.path.dirname(os.path.abspath(__file__))
root = os.path.join(here, '../..')
os.chdir(root)
frames = int(sys.argv[1]) if len(sys.argv) > 1 else 3000
route = sys.argv[2] if len(sys.argv) > 2 else os.path.join(here, 'routes/intro.txt')
subprocess.run(['make', '-s', 'moved'], check=True, stdout=subprocess.DEVNULL)
t = tempfile.mkdtemp()
lines = [l for l in open(route) if not l.startswith('#') and 'shot' not in l and l.strip()
         and int(l.split()[0]) <= frames] + [f'{frames} end\n']
open(t + '/r.txt', 'w').writelines(lines)
env = dict(os.environ, TRACE='080C8E24-087F4B8A')
r = subprocess.run([os.path.join(here, 'runner'), 'mmz_moved.gba', t + '/r.txt'], env=env,
                   capture_output=True, text=True)
rom = open('baserom.gba', 'rb').read()
byp = collections.OrderedDict()
for l in r.stderr.splitlines():
    f = l.split()
    if f and f[0].startswith('read') and not 0x08500000 <= int(f[1], 16) < 0x08510000:
        byp.setdefault(f[3], []).append(int(f[1], 16))
if not byp:
    print('no stale reads in', frames, 'frames')
for pc, addrs in byp.items():
    a = addrs[0]
    src = [0x08000000 + o for o in range(0, len(rom) - 3, 4)
           if struct.unpack_from('<I', rom, o)[0] in range(a - 0x40, a + 1)]
    print('pc %s: %d reads, first %08X, nearby values stored at %s' % (pc, len(addrs), a,
          ' '.join('%08X' % s for s in src[:5])))
