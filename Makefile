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

# ---------------------------------------------------------------- lifted C
# lifted/ is every function translated to C, instruction by instruction
# (tools/lift/lift.py). The harness plays a route and checks each function's
# lifted C against the original. Needs libmgba-dev.
LIFT_SKIP := sub_080002DC,sub_08000300,sub_08000328
LIFT_ALIAS := 03000000:080C6894:380
ROUTE ?= tools/emu/routes/intro.txt

lift:
	python3 tools/lift/lift.py lifted --skip $(LIFT_SKIP) --alias $(LIFT_ALIAS)
	cp tools/lift/lift.h lifted/

harness:
	$(MAKE) -C tools/lift LIFTED=$(CURDIR)/lifted OUT=$(CURDIR)/build_lift

check-lifted: harness
	grep -v ' shot ' $(ROUTE) > build_lift/route.txt
	build_lift/harness baserom.gba build_lift/route.txt build_lift/results.tsv 2

# Ghidra's decompilation of every function, for reference (ref/ghidra).
GHIDRA ?= tools/ghidra/ghidra_11.0_PUBLIC
ghidra-ref:
	python3 tools/ghidra/funcs.py build_lift/funcs.tsv
	rm -rf build_lift/gproj && mkdir -p build_lift/gproj ref/ghidra
	$(GHIDRA)/support/analyzeHeadless build_lift/gproj mmz -import baserom.gba \
		-processor ARM:LE:32:v4t -loader BinaryLoader -loader-baseAddr 0x08000000 -noanalysis \
		-scriptPath tools/ghidra -postScript Decompile.py build_lift/funcs.tsv ref/ghidra -deleteProject

.PHONY: lift harness check-lifted ghidra-ref
