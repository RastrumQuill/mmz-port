# The PC build: the lifted C (lifted/), the hand-written C (src/, built with
# PLATFORM_PC), the runtime (tools/lift/runtime.c) and the platform layer
# (port/). Run from the repository root: make -C port, or make port.
ROOT := ..
OUT ?= $(ROOT)/build_port
OPT ?= -O2
# WINDOWS=1 SDL2_DIR=.../SDL2-x.y.z/x86_64-w64-mingw32: cross-compile mmz.exe
ifeq ($(WINDOWS),1)
CC := x86_64-w64-mingw32-gcc
CXX := x86_64-w64-mingw32-g++
OUT := $(ROOT)/build_port_win
EXE := mmz.exe
SDL_CFLAGS := -I $(SDL2_DIR)/include/SDL2 -Dmain=SDL_main
SDL_LIBS := -L $(SDL2_DIR)/lib -lmingw32 -lSDL2main -lSDL2 -lcomdlg32 -mwindows
# a low image base keeps the game's RAM addresses within reach of the code
LDFLAGS := -Wl,--allow-multiple-definition -Wl,--image-base=0x10000000 -Wl,--disable-dynamicbase -Wl,--disable-high-entropy-va -static-libgcc -static-libstdc++
else
CC ?= cc
CXX ?= c++
EXE := mmz
SDL_CFLAGS := $(shell sdl2-config --cflags)
SDL_LIBS := $(shell sdl2-config --libs)
LDFLAGS := -no-pie
endif
CFLAGS := -std=gnu11 $(OPT) -g -fwrapv -w -fno-pie -I $(ROOT)/tools/lift -I $(ROOT)/lifted -I $(ROOT)/include $(SDL_CFLAGS)
CXXFLAGS := $(OPT) -g -w -fno-pie -I $(ROOT)/tools/lift -I third_party/imgui $(SDL_CFLAGS)
LIBS := $(SDL_LIBS)

LIFTED := $(wildcard $(ROOT)/lifted/*.c)
HAND := $(wildcard $(ROOT)/src/*.c)
PC := $(wildcard *.c)
IMGUI := imgui imgui_draw imgui_tables imgui_widgets imgui_impl_sdl2 imgui_impl_sdlrenderer2
CXXOBJS := $(OUT)/pc/ui.o $(IMGUI:%=$(OUT)/imgui/%.o)
# the hand-written C and the port first: on Windows the first definition of
# a function wins over the lifted one (see LIFT_WEAK in lift.h)
OBJS := $(HAND:$(ROOT)/src/%.c=$(OUT)/src/%.o) $(PC:%.c=$(OUT)/pc/%.o) $(CXXOBJS) $(OUT)/runtime.o \
        $(LIFTED:$(ROOT)/lifted/%.c=$(OUT)/lifted/%.o)

$(OUT)/$(EXE): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS) $(ROOT)/sym_ram.ld $(LIBS)
ifeq ($(WINDOWS),1)
	cp $(SDL2_DIR)/bin/SDL2.dll $(OUT)/
endif

$(OUT)/lifted/%.o: $(ROOT)/lifted/%.c $(ROOT)/tools/lift/lift.h | $(OUT)/lifted
	$(CC) $(CFLAGS) -c -o $@ $<
$(OUT)/src/%.o: $(ROOT)/src/%.c | $(OUT)/src
	$(CC) $(CFLAGS) -DPLATFORM_PC -c -o $@ $<
$(OUT)/pc/%.o: %.c pc.h | $(OUT)/pc
	$(CC) $(CFLAGS) -Wall -Wno-unused-function -c -o $@ $<
$(OUT)/pc/ui.o: ui.cpp ui.h pc.h settings.h | $(OUT)/pc
	$(CXX) $(CXXFLAGS) -c -o $@ $<
$(OUT)/imgui/%.o: third_party/imgui/%.cpp | $(OUT)/imgui
	$(CXX) $(CXXFLAGS) -c -o $@ $<
$(OUT)/runtime.o: $(ROOT)/tools/lift/runtime.c $(ROOT)/tools/lift/lift.h | $(OUT)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OUT) $(OUT)/lifted $(OUT)/src $(OUT)/pc $(OUT)/imgui:
	mkdir -p $@

.PHONY: clean dist
# dist (with WINDOWS=1): a zip to hand out, without debug information
dist: $(OUT)/$(EXE)
	rm -rf $(OUT)/dist && mkdir -p $(OUT)/dist/mmz
	$(if $(filter 1,$(WINDOWS)),x86_64-w64-mingw32-strip,strip) -o $(OUT)/dist/mmz/$(EXE) $(OUT)/$(EXE)
	$(if $(filter 1,$(WINDOWS)),cp $(OUT)/SDL2.dll $(OUT)/dist/mmz/,)
	cp README.md $(OUT)/dist/mmz/README.txt
	cd $(OUT)/dist && zip -qr ../mmz-$(if $(filter 1,$(WINDOWS)),windows,linux).zip mmz

clean:
	rm -rf $(OUT)
