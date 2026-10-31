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
# MAPTRACE=1: record calls and memory use for the program map (port/maptrace.c, build_map/)
ifeq ($(MAPTRACE),1)
OUT := $(ROOT)/build_map
TRACE := -fno-inline-small-functions -fno-inline-functions -fno-inline-functions-called-once -finstrument-functions -finstrument-functions-exclude-file-list=lift.h,imm.h
DEFS_TRACE := -DMAPTRACE
endif
CFLAGS := $(DEFS_TRACE) -std=gnu11 $(OPT) -g -fwrapv -w -fno-pie -I $(ROOT)/tools/lift -I $(ROOT)/lifted -I $(ROOT)/include $(SDL_CFLAGS)
# the version reports carry (report.c): the release tag, or the commit
VERSION ?= $(shell git -C $(ROOT) describe --tags --always --dirty 2>/dev/null || echo dev)
CFLAGS += -DMMZ_VERSION='"$(VERSION)"'
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
	cp third_party/gamecontrollerdb/gamecontrollerdb.txt $(OUT)/
ifeq ($(WINDOWS),1)
	cp $(SDL2_DIR)/bin/SDL2.dll $(OUT)/
endif

$(OUT)/lifted/%.o: $(ROOT)/lifted/%.c $(ROOT)/tools/lift/lift.h imm.h | $(OUT)/lifted
	$(CC) $(CFLAGS) $(TRACE) -include imm.h -c -o $@ $<
$(OUT)/src/%.o: $(ROOT)/src/%.c | $(OUT)/src
	$(CC) $(CFLAGS) $(TRACE) -DPLATFORM_PC -c -o $@ $<
$(OUT)/pc/%.o: %.c pc.h settings.h input.h ui.h | $(OUT)/pc
	$(CC) $(CFLAGS) -Wall -Wno-unused-function -c -o $@ $<
$(OUT)/pc/ui.o: ui.cpp ui.h pc.h settings.h input.h | $(OUT)/pc
	$(CXX) $(CXXFLAGS) -c -o $@ $<
$(OUT)/imgui/%.o: third_party/imgui/%.cpp | $(OUT)/imgui
	$(CXX) $(CXXFLAGS) -c -o $@ $<
$(OUT)/runtime.o: $(ROOT)/tools/lift/runtime.c $(ROOT)/tools/lift/lift.h | $(OUT)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OUT) $(OUT)/lifted $(OUT)/src $(OUT)/pc $(OUT)/imgui:
	mkdir -p $@

.PHONY: clean dist fills
# fills: the gap fill of every area the routes reach, worked out once into
# fills.bin next to the program (port/view.c). The mission routes need a save
# with every mission open (SAVE). Areas no route reaches are added on first entry.
ROUTES ?= $(wildcard $(ROOT)/tools/emu/routes/*.txt $(ROOT)/build_lift/m*.txt)
SAVE ?= $(ROOT)/build_lift/mmz1.sav
fills: $(OUT)/$(EXE)
	rm -f $(OUT)/fills.bin
	for r in $(ROUTES); do grep -v ' shot ' $$r > $(OUT)/fills_route.txt; \
	  MMZ_FILLS=$(OUT)/fills.bin $(OUT)/$(EXE) --headless --route $(OUT)/fills_route.txt --view x3 \
	    --rom $(ROOT)/baserom.gba $(if $(wildcard $(SAVE)),--save $(SAVE)) >/dev/null || exit 1; done
	rm -f $(OUT)/fills_route.txt
# dist (with WINDOWS=1): a zip to hand out, without debug information
dist: $(OUT)/$(EXE)
	rm -rf $(OUT)/dist && mkdir -p $(OUT)/dist/mmz
	$(if $(filter 1,$(WINDOWS)),x86_64-w64-mingw32-strip,strip) -o $(OUT)/dist/mmz/$(EXE) $(OUT)/$(EXE)
	$(if $(filter 1,$(WINDOWS)),cp $(OUT)/SDL2.dll $(OUT)/dist/mmz/,)
	cp README.md $(OUT)/dist/mmz/README.txt
	$(if $(wildcard $(OUT)/fills.bin),cp $(OUT)/fills.bin $(OUT)/dist/mmz/,)
	cp third_party/gamecontrollerdb/gamecontrollerdb.txt $(OUT)/dist/mmz/
	cd $(OUT)/dist && zip -qr ../mmz-$(if $(filter 1,$(WINDOWS)),windows,linux).zip mmz

clean:
	rm -rf $(OUT)
