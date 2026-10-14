OUTPUT_ARCH(arm)
SECTIONS {
    . = 0x8000000;
    .text : ALIGN(4) {
        build/crt0.o(.text);
        INCLUDE units.ld
    }
    .rodata : ALIGN(4) { build/data.o(.rodata); }
    /DISCARD/ : { *(*); }
}
