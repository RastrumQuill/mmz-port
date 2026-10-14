OUTPUT_ARCH(arm)
INCLUDE sym_ram.ld
SECTIONS {
    . = 0x8000000;
    .text : ALIGN(4) {
        build/crt0.o(.text);
        INCLUDE units.ld
    }
    .rodata : ALIGN(4) { build/data.o(.rodata); }
    /* addressed with constants built in code (0x08500000) */
    .bank_08500000 0x08500000 : { build/data.o(.rodata.bank_08500000); }
    .rodata.after 0x08510000 : { build/data.o(.rodata.after); }
    /DISCARD/ : { *(*); }
}
