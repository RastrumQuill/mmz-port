"""Write the linker script and Makefile of a game directory (after discovery).

usage: MMZ_GAME=DIR game_files.py
"""
import os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import game
os.chdir(game.GAME_DIR)
sections = ['    .rodata : ALIGN(4) { build/data.o(.rodata); }']
for ps, pe in game.PINNED:
    sections.append('    .bank_%08X 0x%08X : { build/data.o(.rodata.bank_%08X); }' % (ps, ps, ps))
if game.PINNED:
    sections.append('    .rodata.after : { build/data.o(.rodata.after); }')
open('ld_script.ld', 'w').write('''OUTPUT_ARCH(arm)
SECTIONS {
    . = 0x8000000;
    .text : ALIGN(4) {
        build/crt0.o(.text);
        INCLUDE units.ld
    }
%s
    /DISCARD/ : { *(*); }
}
''' % '\n'.join(sections))
open('Makefile', 'w').write('include ../game.mk\n')
