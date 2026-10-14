# Mega Man Zero (USA, Europe) decompilation
#   make          build mmz.gba and check it against the original SHA-1
#   make moved    build mmz_moved.gba with the data moved far away
#                 (tests that every pointer is a symbol; the result must still play)

AS := arm-none-eabi-as
LD := arm-none-eabi-ld
OBJCOPY := arm-none-eabi-objcopy
ASFLAGS := -mcpu=arm7tdmi -I .
OBJS := asm/code.o data/data.o

all: mmz.gba

mmz.gba: mmz.elf
	$(OBJCOPY) -O binary --pad-to 0x08800000 --gap-fill 0xFF $< $@
	@sha1sum -c mmz.sha1

mmz.elf: $(OBJS) ld_script.ld
	$(LD) -T ld_script.ld -Map mmz.map -o $@ $(OBJS)

%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

moved: mmz_moved.gba
mmz_moved.gba: asm/code.o data/data.o ld_script_moved.ld
	$(LD) -T ld_script_moved.ld -o mmz_moved.elf asm/code.o data/data.o
	$(OBJCOPY) -O binary --gap-fill 0xFF mmz_moved.elf $@

clean:
	rm -f asm/*.o data/*.o *.elf mmz.gba mmz_moved.gba mmz.map

.PHONY: all moved clean
