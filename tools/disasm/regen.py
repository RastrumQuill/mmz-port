"""Regenerate asm/code.s and data/data.s from the ROM.

usage: regen.py GBADISASM [WORKDIR]
Uses the function list in tools/disasm/mmz.cfg (made by discover.py).
"""
import json, os, subprocess, sys, tempfile
here = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, here)
os.chdir(os.path.join(here, '../..'))
import ptrscan
from classify import load_listing

dis = sys.argv[1]
work = sys.argv[2] if len(sys.argv) > 2 else tempfile.mkdtemp()
out = subprocess.run([dis, 'baserom.gba', '-c', os.path.join(here, 'mmz.cfg')],
                     check=True, capture_output=True, text=True).stdout
full = os.path.join(work, 'code.s')
with open(full, 'w') as f:
    f.write('\t.include "asm/macros.inc"\n\t.syntax unified\n\t.text\n\n' + out + '\t.align 2, 0\n')
subprocess.run(['arm-none-eabi-as', '-mcpu=arm7tdmi', '-I', '.', f'-al={work}/code.lst',
                '-o', '/dev/null', full], check=True, stdout=subprocess.DEVNULL)
spans = load_listing(f'{work}/code.lst')
rom, labels, kind, pool = ptrscan.load('baserom.gba', full)
ptrs, data_labels, new_funcs = ptrscan.scan(rom, labels, kind, pool, spans)
json.dump({'ptrs': {hex(a): w for a, w in ptrs.items()}, 'data_labels': sorted(data_labels),
           'new_funcs': sorted(new_funcs)}, open(f'{work}/ptrs.json', 'w'))
print('pointers in data:', len(ptrs), 'data labels:', len(data_labels), file=sys.stderr)
subprocess.run([sys.executable, os.path.join(here, 'symbolize.py'), 'baserom.gba', full,
                f'{work}/ptrs.json', 'data/data.s'], check=True)
subprocess.run([sys.executable, os.path.join(here, 'split.py'), full], check=True)
