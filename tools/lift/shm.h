/* Layout of the memory shared by the harness (64-bit, runs mGBA) and the
 * executor (32-bit, runs the C). Every region starts on a page boundary so the
 * executor can map it at its GBA address. */
#ifndef SHM_H
#define SHM_H
#include <stdint.h>

struct ShmCtrl {
    uint32_t r[16];
    uint32_t biosBus;
    int32_t func;        /* table index to run */
    int32_t status;      /* 0 ok, 1 failed */
    int32_t ignoreR0;    /* 1: the C function returns nothing, r0 is not compared */
    char reason[128];
};

#define SHM_CTRL  0x00000
#define SHM_IO    0x01000  /* 0x04000000, 0x400 used */
#define SHM_PAL   0x02000  /* 0x05000000 */
#define SHM_OAM   0x03000  /* 0x07000000 */
#define SHM_IWRAM 0x04000  /* 0x03000000, 0x8000 */
#define SHM_SRAM  0x0C000  /* 0x0E000000, 0x8000 */
#define SHM_VRAM  0x14000  /* 0x06000000, 0x18000 */
#define SHM_EWRAM 0x2C000  /* 0x02000000, 0x40000 */
#define SHM_SIZE  0x6C000
#endif
