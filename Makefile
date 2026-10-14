AS := arm-none-eabi-as
LD := arm-none-eabi-ld
OBJCOPY := arm-none-eabi-objcopy
ASFLAGS := -mcpu=arm7tdmi -I .
OBJS := asm/code.o data/data.o

mmz.gba: mmz.elf
	$(OBJCOPY) -O binary $< $@
	@sha1sum -c mmz.sha1

mmz.elf: $(OBJS) ld_script.ld
	$(LD) -T ld_script.ld -Map mmz.map -o $@ $(OBJS)

%.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

clean:
	rm -f $(OBJS) mmz.elf mmz.gba mmz.map
