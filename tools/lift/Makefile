# Build the equivalence harness against the lifted C.
#   make -C tools/lift LIFTED=path/to/lifted [OUT=dir]
LIFTED ?= ../../build_lift/lifted
OUT ?= ../../build_lift
SRCS := $(wildcard $(LIFTED)/*.c)
OBJS := $(SRCS:$(LIFTED)/%.c=$(OUT)/obj/%.o)
CFLAGS := -std=gnu11 -O1 -w -I . -I $(LIFTED)

$(OUT)/harness: harness.c $(OBJS)
	$(CC) $(CFLAGS) -O2 -o $@ harness.c $(OBJS) -lmgba

$(OUT)/obj/%.o: $(LIFTED)/%.c lift.h | $(OUT)/obj
	$(CC) $(CFLAGS) -c -o $@ $<

$(OUT)/obj:
	mkdir -p $@
