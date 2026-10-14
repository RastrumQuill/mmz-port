/* Relocation test: the Thumb code and all data that may move are
   placed far from where they are in the original, so any address that was
   not turned into a symbol points at empty space. Each part keeps its offset
   within a 128 KB cartridge page, so memory timing (and with it lag frames)
   stays the same and the game plays exactly like the original. */
OUTPUT_ARCH(arm)
SECTIONS {
    . = 0x8000000;
    .text : ALIGN(4) { asm/code.o(.text); }
    .bank_08500000 0x08500000 : { data/data.o(.rodata.bank_08500000); }
    .text.main 0x086002DC : { asm/code.o(.text.main); }
    .rodata 0x090C8E24 : { data/data.o(.rodata); }
    .rodata.after 0x09510000 : { data/data.o(.rodata.after); }
    /DISCARD/ : { *(*); }
}
