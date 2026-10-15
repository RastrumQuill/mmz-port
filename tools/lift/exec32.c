/* Executor for the equivalence check: a 32-bit process with the GBA memory
 * mapped at its own addresses, running lifted or hand-written C.
 *
 * exec32 SHMFILE ROM
 * Writes the function table to stdout (count, then address and flag pairs),
 * then for each table index read from stdin runs that function with the
 * registers in the control block and answers with one byte.
 */
#include <fcntl.h>
#include <setjmp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include "lift.h"
#include "shm.h"

extern u32 romSize, biosBus;
extern jmp_buf failJmp;
extern char failReason[128];
extern int64_t budget;

static void map(int fd, unsigned off, unsigned addr, unsigned size) {
	void *p = mmap((void *)addr, size, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_FIXED_NOREPLACE, fd, off);
	if (p == MAP_FAILED || p != (void *)addr) { perror("map"); exit(1); }
}

int main(int argc, char **argv) {
	int fd = open(argv[1], O_RDWR);
	struct ShmCtrl *ctrl = mmap(NULL, 0x1000, PROT_READ | PROT_WRITE, MAP_SHARED, fd, SHM_CTRL);
	map(fd, SHM_IO, 0x04000000, 0x1000);
	map(fd, SHM_PAL, 0x05000000, 0x1000);
	map(fd, SHM_OAM, 0x07000000, 0x1000);
	map(fd, SHM_IWRAM, 0x03000000, 0x8000);
	map(fd, SHM_SRAM, 0x0E000000, 0x8000);
	map(fd, SHM_VRAM, 0x06000000, 0x18000);
	map(fd, SHM_EWRAM, 0x02000000, 0x40000);
	int rf = open(argv[2], O_RDONLY);
	romSize = lseek(rf, 0, SEEK_END);
	void *r = mmap((void *)0x08000000, romSize, PROT_READ, MAP_PRIVATE | MAP_FIXED_NOREPLACE, rf, 0);
	if (r != (void *)0x08000000) { perror("rom"); return 1; }

	fwrite(&gLiftTableSize, 4, 1, stdout);
	for (int i = 0; i < gLiftTableSize; i++) {
		u32 e[2] = { gLiftTable[i].addr, (u32)gLiftTable[i].isFunction };
		fwrite(e, 4, 2, stdout);
	}
	fflush(stdout);
	int idx;
	while (fread(&idx, 4, 1, stdin) == 1) {
		memcpy(cpu.r, ctrl->r, sizeof cpu.r);
		biosBus = ctrl->biosBus;
		lift_tail = 0;
		budget = 50000000;
		ctrl->status = 0;
		lift_void = 0;
		if (setjmp(failJmp)) {
			ctrl->status = 1;
			snprintf(ctrl->reason, sizeof ctrl->reason, "%s", failReason);
		} else {
			gLiftTable[idx].fn();
		}
		memcpy(ctrl->r, cpu.r, sizeof cpu.r);
		ctrl->ignoreR0 = lift_void;
		char ok = 1;
		fwrite(&ok, 1, 1, stdout);
		fflush(stdout);
	}
	return 0;
}
