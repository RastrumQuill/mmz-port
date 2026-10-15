# The PC build: the lifted C (lifted/), the hand-written C (src/, built with
# PLATFORM_PC), the runtime (tools/lift/runtime.c) and the platform layer
# (port/). Run from the repository root: make -C port, or make port.
ROOT := ..
OUT ?= $(ROOT)/build_port
CC ?= cc
OPT ?= -O2
CFLAGS := -std=gnu11 $(OPT) -g -fwrapv -w -fno-pie -I $(ROOT)/tools/lift -I $(ROOT)/lifted -I $(ROOT)/include $(shell sdl2-config --cflags)
LIBS := $(shell sdl2-config --libs)

LIFTED := $(wildcard $(ROOT)/lifted/*.c)
HAND := $(wildcard $(ROOT)/src/*.c)
PC := $(wildcard *.c)
OBJS := $(LIFTED:$(ROOT)/lifted/%.c=$(OUT)/lifted/%.o) $(HAND:$(ROOT)/src/%.c=$(OUT)/src/%.o) \
        $(PC:%.c=$(OUT)/pc/%.o) $(OUT)/runtime.o

$(OUT)/mmz: $(OBJS)
	$(CC) -no-pie -o $@ $(OBJS) $(ROOT)/sym_ram.ld $(LIBS)

$(OUT)/lifted/%.o: $(ROOT)/lifted/%.c $(ROOT)/tools/lift/lift.h | $(OUT)/lifted
	$(CC) $(CFLAGS) -c -o $@ $<
$(OUT)/src/%.o: $(ROOT)/src/%.c | $(OUT)/src
	$(CC) $(CFLAGS) -DPLATFORM_PC -c -o $@ $<
$(OUT)/pc/%.o: %.c pc.h | $(OUT)/pc
	$(CC) $(CFLAGS) -Wall -Wno-unused-function -c -o $@ $<
$(OUT)/runtime.o: $(ROOT)/tools/lift/runtime.c $(ROOT)/tools/lift/lift.h | $(OUT)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OUT) $(OUT)/lifted $(OUT)/src $(OUT)/pc:
	mkdir -p $@

.PHONY: clean
clean:
	rm -rf $(OUT)
