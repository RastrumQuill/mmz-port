OUTPUT_ARCH(arm)
SECTIONS {
    . = 0x8000000;
    .text : ALIGN(4) { asm/code.o(.text); asm/code.o(.text.main); }
    .rodata : ALIGN(4) { data/data.o(.rodata); }
    /* addressed with constants built in code (0x08500000) */
    .bank_08500000 0x08500000 : { data/data.o(.rodata.bank_08500000); }
    .rodata.after 0x08510000 : { data/data.o(.rodata.after); }
    /DISCARD/ : { *(*); }
}
