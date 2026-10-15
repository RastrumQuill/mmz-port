/* The game's cooperative tasks (three slots at 0x03001748), with native
 * stacks. On the GBA a task switch swaps the stack pointer: sub_080002DC
 * runs a task, sub_08000300 yields back to the scheduler and sub_08000328
 * ends a task. The lifted C keeps return addresses on the native stack, so
 * each task gets its own native stack (ucontext, or a fiber on Windows).
 * What these functions do
 * to the GBA registers and stacks is kept exactly as in the original.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lift.h"
#include "pc.h"

/* coroutines: ucontext, or fibers on Windows */
#ifdef _WIN32
#include <windows.h>
typedef LPVOID Context;
static Context schedCtx;
static void ctx_switch(Context *save, Context *to) { (void)save; SwitchToFiber(*to); }
static void ctx_jump(Context *to) { SwitchToFiber(*to); }
#else
#include <ucontext.h>
typedef ucontext_t Context;
static Context schedCtx;
static void ctx_switch(Context *save, Context *to) { swapcontext(save, to); }
static void ctx_jump(Context *to) { setcontext(to); }
#endif

#define TASK_STACK (1 << 20)
#define SLOTS 0x03001748u

struct Task {
	Context ctx;
	void *stack;      /* (the fiber, on Windows) */
	int alive;       /* has a native context */
	u32 resumePc;    /* where it continues: the GBA return address it saved */
	u32 resumeSp;
};
static struct Task tasks[3];
static struct Task *current;
static void *deadStack;   /* stack of a task that ended; freed from the scheduler */

/* start values for a new task, read by task_main on its own stack */
static u32 startPc, startSp;
static u32 resumeSp;      /* the stack pointer the scheduler gives a resumed task */

static void push(u32 v) { cpu.r[13] -= 4; lift_write32(cpu.r[13], v); }
static u32 pop(void) { u32 v = lift_read32(cpu.r[13]); cpu.r[13] += 4; return v; }

/* the pushes and pops of the original */
static void save_regs(int withLr) {
	if (withLr) {     /* push {r4-r7, lr} */
		cpu.r[13] -= 20;
		for (int i = 0; i < 4; i++) lift_write32(cpu.r[13] + i * 4, cpu.r[4 + i]);
		lift_write32(cpu.r[13] + 16, cpu.r[14]);
	} else {          /* push {r4-r7} */
		cpu.r[13] -= 16;
		for (int i = 0; i < 4; i++) lift_write32(cpu.r[13] + i * 4, cpu.r[4 + i]);
	}
	cpu.r[13] -= 16;  /* push {r8-r11} (through r4-r7) */
	for (int i = 0; i < 4; i++) lift_write32(cpu.r[13] + i * 4, cpu.r[8 + i]);
}
static void load_regs(void) {
	for (int i = 0; i < 4; i++) cpu.r[8 + i] = lift_read32(cpu.r[13] + i * 4);
	cpu.r[13] += 16;
	for (int i = 0; i < 4; i++) cpu.r[4 + i] = lift_read32(cpu.r[13] + i * 4);
	cpu.r[13] += 16;
}

static void task_main(void) {
	u32 pc = startPc;
	cpu.r[13] = startSp;
	load_regs();
	for (;;) {        /* lr was the task's own address: returning restarts it */
		cpu.r[14] = pc;
		lift_tail = 0;
		lift_call(pc);
	}
}

#ifdef _WIN32
static void WINAPI fiber_main(LPVOID arg) { (void)arg; task_main(); }
static void task_new(struct Task *t) {
	if (!schedCtx) schedCtx = ConvertThreadToFiber(NULL);
	t->ctx = CreateFiber(TASK_STACK, fiber_main, NULL);
	t->stack = t->ctx;
	t->alive = 1;
}
static void task_free(struct Task *t) { DeleteFiber(t->ctx); t->stack = NULL; }
static void stack_free(void *s) { DeleteFiber(s); }
#else
static void task_new(struct Task *t) {
	t->stack = malloc(TASK_STACK);
	t->alive = 1;
	getcontext(&t->ctx);
	t->ctx.uc_stack.ss_sp = t->stack;
	t->ctx.uc_stack.ss_size = TASK_STACK;
	t->ctx.uc_link = NULL;
	makecontext(&t->ctx, task_main, 0);
}
static void task_free(struct Task *t) { free(t->stack); t->stack = NULL; }
static void stack_free(void *s) { free(s); }
#endif

static int slot_of(u32 slotAddr) {
	int i = (int)(slotAddr - SLOTS) / 24;
	if (i < 0 || i > 2 || slotAddr != SLOTS + i * 24) {
		fprintf(stderr, "task switch: bad slot %08X\n", slotAddr);
		abort();
	}
	return i;
}

/* sub_080002DC(slot, pc, sp, &schedSp): run a task */
void lift_sub_080002DC(void) {
	(void)LIFT_ENTRY_LR();
	u32 slotAddr = cpu.r[0], pc = cpu.r[1], sp = cpu.r[2], save = cpu.r[3];
	if (deadStack) { stack_free(deadStack); deadStack = NULL; }
	save_regs(1);
	lift_write32(save, cpu.r[13]);
	struct Task *t = &tasks[slot_of(slotAddr)];
	current = t;
	if (t->alive && t->resumePc == pc && t->resumeSp == sp) {
		resumeSp = sp;
		ctx_switch(&schedCtx, &t->ctx);
	} else {
		if (t->alive) task_free(t);   /* restarted: the old one is dropped */
		task_new(t);
		startPc = pc;
		startSp = sp;
		ctx_switch(&schedCtx, &t->ctx);
	}
	/* back from a yield or an exit, with the scheduler's registers loaded */
	current = NULL;
	lift_ret = cpu.r[14];
}

/* sub_08000300(&savedPc, &savedSp, schedSp): yield */
void lift_sub_08000300(void) {
	u32 lr = LIFT_ENTRY_LR();
	u32 savePc = cpu.r[0], saveSp = cpu.r[1], schedSp = cpu.r[2];
	struct Task *t = current;
	cpu.r[14] = lr;
	save_regs(0);
	cpu.r[3] = lr;
	lift_write32(savePc, lr);
	lift_write32(saveSp, cpu.r[13]);
	t->resumePc = lr;
	t->resumeSp = cpu.r[13];
	if (getenv("TRACEYIELD")) fprintf(stderr, "yield slot %d at %08X line %d\n", (int)(t - tasks), lr, hw_line);
	/* the scheduler's side: its registers, and back from sub_080002DC */
	cpu.r[13] = schedSp;
	load_regs();
	cpu.r[14] = cpu.r[3] = pop();
	ctx_switch(&t->ctx, &schedCtx);
	/* resumed by sub_080002DC: its pops, then return to where we yielded */
	cpu.r[13] = resumeSp;
	load_regs();
	cpu.r[14] = lr;
	lift_ret = lr;
}

/* sub_08000328(schedSp): end the current task */
void lift_sub_08000328(void) {
	(void)LIFT_ENTRY_LR();
	struct Task *t = current;
	cpu.r[13] = cpu.r[0];
	load_regs();
	cpu.r[14] = cpu.r[3] = pop();
	t->alive = 0;
	deadStack = t->stack;
	t->stack = NULL;
	ctx_jump(&schedCtx);
}

void tasks_reset(void) {
	memset(tasks, 0, sizeof tasks);
	current = NULL;
}
