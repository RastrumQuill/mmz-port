# Mega Man Zero (USA, Europe) decompilation
#   make              build mmz.gba and check it against the original SHA-1
#   make moved        build mmz_moved.gba with code and data moved far away
#                     (tests that every address is a symbol; it must still play)
#   make nonmatching  build mmz_nonmatching.gba with the C of the functions
#                     that do not match yet (NONMATCH in the source)
# Test a build against the original with tools/emu/compare.sh.

AS := arm-none-eabi-as
LD := arm-none-eabi-ld
OBJCOPY := arm-none-eabi-objcopy
CPP := cpp
CC1 := tools/agbcc/bin/agbcc
ASFLAGS := -mcpu=arm7tdmi -I .
CPPFLAGS := -I tools/agbcc/include -iquote include -nostdinc -undef -std=gnu89
CFLAGS := -mthumb-interwork -O2 -fhex-asm

ifeq ($(NON_MATCHING),1)
BUILD := build_nm
CPPFLAGS += -DNON_MATCHING=1
else
BUILD := build
endif

# UNITS (from tools/disasm/units.txt, written by tools/disasm/split.py)
include units.mk

OBJS := $(UNITS:%=$(BUILD)/%.o) $(BUILD)/data.o

all: mmz.gba

mmz.gba: $(BUILD)/mmz.elf
	$(OBJCOPY) -O binary --pad-to 0x08800000 --gap-fill 0xFF $< $@
	@sha1sum -c mmz.sha1

moved: mmz_moved.gba
mmz_moved.gba: $(BUILD)/mmz_moved.elf
	$(OBJCOPY) -O binary --gap-fill 0xFF $< $@

nonmatching:
	$(MAKE) NON_MATCHING=1 mmz_nonmatching.gba
mmz_nonmatching.gba: $(BUILD)/mmz.elf
	$(OBJCOPY) -O binary --pad-to 0x08800000 --gap-fill 0xFF $< $@

# The linker scripts name the objects as build/...; each build gets a copy
# with its own directory.
$(BUILD)/%.ld: %.ld | $(BUILD)
	sed 's|build/|$(BUILD)/|g; s|INCLUDE units.ld|INCLUDE $(BUILD)/units.ld|' $< > $@
$(BUILD)/units.ld: units.ld | $(BUILD)
	sed 's|build/|$(BUILD)/|g' $< > $@

$(BUILD)/mmz.elf: $(OBJS) $(BUILD)/ld_script.ld $(BUILD)/units.ld sym_ram.ld
	$(LD) -T $(BUILD)/ld_script.ld -Map $(BUILD)/mmz.map -o $@
$(BUILD)/mmz_moved.elf: $(OBJS) $(BUILD)/ld_script_moved.ld $(BUILD)/units.ld sym_ram.ld
	$(LD) -T $(BUILD)/ld_script_moved.ld -o $@

$(BUILD)/data.o: data/data.s | $(BUILD)
	$(AS) $(ASFLAGS) -o $@ $<

# A unit is C if src/UNIT.c exists, assembly otherwise.
define unit_rule
ifneq ($(wildcard src/$(1).c),)
$(BUILD)/$(1).o: src/$(1).c $(wildcard asm/nonmatching/$(1)/*.inc) $(wildcard include/*.h include/*/*.h) | $(BUILD)
	$$(CPP) $$(CPPFLAGS) $$< | $$(CC1) $$(CFLAGS) -o $(BUILD)/$(1).s
	printf '\t.align 2, 0\n' >> $(BUILD)/$(1).s
	$$(AS) $$(ASFLAGS) -o $$@ $(BUILD)/$(1).s
else
$(BUILD)/$(1).o: asm/$(1).s | $(BUILD)
	$$(AS) $$(ASFLAGS) -o $$@ $$<
endif
endef
$(foreach u,$(UNITS),$(eval $(call unit_rule,$(u))))

$(BUILD):
	mkdir -p $(BUILD)

clean:
	rm -rf build build_nm mmz.elf mmz.gba mmz_moved.gba mmz_nonmatching.gba

.PHONY: all moved nonmatching clean
