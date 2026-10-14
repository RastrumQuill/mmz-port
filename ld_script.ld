OUTPUT_ARCH(arm)
SECTIONS {
    . = 0x8000000;
    .text : ALIGN(4) { asm/code.o(.text); }
    .rodata : ALIGN(4) { data/data.o(.rodata); }
    /DISCARD/ : { *(*); }
}
