# Build for a game directory under games/ (included by games/*/Makefile).
#   make        rebuild the ROM from asm/ and data/ and check its SHA-1
#   make lift   write lifted/ (every function as C)
ROOT := $(abspath ../..)
AS := arm-none-eabi-as
LD := arm-none-eabi-ld
OBJCOPY := arm-none-eabi-objcopy
ASFLAGS := -march=armv5te -I $(ROOT)
SHA1 := $(shell python3 -c "import json;print(json.load(open('game.json'))['sha1'])")
ROMSIZE := $(shell stat -L -c %s baserom.gba)
PAD := $(shell printf '0x%X' $$((0x08000000 + $(ROMSIZE))))

include units.mk
OBJS := $(UNITS:%=build/%.o) build/data.o

all: rebuilt.gba

rebuilt.gba: build/game.elf
	$(OBJCOPY) -O binary --pad-to $(PAD) --gap-fill 0xFF $< $@
	@echo "$(SHA1)  $@" | sha1sum -c

build/game.elf: $(OBJS) ld_script.ld units.ld
	$(LD) -T ld_script.ld -o $@

build/%.o: asm/%.s | build
	$(AS) $(ASFLAGS) -o $@ $<
build/data.o: data/data.s | build
	$(AS) $(ASFLAGS) -o $@ $<
build:
	mkdir -p build

lift:
	MMZ_GAME=$(CURDIR) python3 $(ROOT)/tools/lift/lift.py lifted
	cp $(ROOT)/tools/lift/lift.h lifted/

clean:
	rm -rf build rebuilt.gba

.PHONY: all lift clean
