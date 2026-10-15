# Build the equivalence harness and the executor for the C being checked.
#   make -C tools/lift LIFTED=path/to/lifted [SRC=dir of hand-written C] [OUT=dir]
# harness: 64-bit, runs mGBA. exec32: 32-bit, runs the C with the GBA memory
# at its own addresses. Hand-written C (strong symbols) replaces the lifted
# functions of the same name (weak).
LIFTED ?= ../../build_lift/lifted
SRC ?=
OUT ?= ../../build_lift
SRCS := $(wildcard $(LIFTED)/*.c)
OBJS := $(SRCS:$(LIFTED)/%.c=$(OUT)/obj32/%.o)
HAND := $(if $(SRC),$(wildcard $(SRC)/*.c))
HOBJS := $(HAND:$(SRC)/%.c=$(OUT)/obj32/hand_%.o)
CFLAGS := -std=gnu11 -O1 -w -m32 -I . -I $(LIFTED)

all: $(OUT)/harness $(OUT)/exec32

$(OUT)/harness: harness.c shm.h | $(OUT)/obj32
	$(CC) -std=gnu11 -O2 -w -o $@ harness.c -lmgba

$(OUT)/exec32: exec32.c runtime.c lift.h shm.h $(OBJS) $(HOBJS)
	$(CC) $(CFLAGS) -O2 -Wl,-Ttext-segment=0x10000000 -o $@ exec32.c runtime.c $(OBJS) $(HOBJS) ../../sym_ram.ld

$(OUT)/obj32/%.o: $(LIFTED)/%.c lift.h | $(OUT)/obj32
	$(CC) $(CFLAGS) -c -o $@ $<

$(OUT)/obj32/hand_%.o: $(SRC)/%.c lift.h | $(OUT)/obj32
	$(CC) $(CFLAGS) -fwrapv -DPLATFORM_PC -I ../../include -c -o $@ $<

$(OUT)/obj32:
	mkdir -p $@

.PHONY: all
