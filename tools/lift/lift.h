/* Runtime interface for the lifted code (tools/lift/lift.py).
 *
 * The lifted functions keep the CPU registers in `cpu` and access memory
 * through the macros below, which reproduce the ARM7TDMI: unaligned word
 * loads rotate, unaligned stores go to the aligned address, unaligned
 * halfword loads rotate, and an unaligned signed halfword load reads a byte.
 * The runtime provides lift_read8/16/32 and lift_write8/16/32 (memory map,
 * I/O registers),
 * lift_call (indirect calls), lift_swi (BIOS calls) and lift_fail.
 */
#ifndef LIFT_H
#define LIFT_H

#include <stdint.h>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;

struct Cpu {
    u32 r[16];
};
extern struct Cpu cpu;

struct LiftEntry {
    u32 addr;
    void (*fn)(void);
    int isFunction;  /* 0: an entry into the middle of a function */
};
extern const struct LiftEntry gLiftTable[];
extern const int gLiftTableSize;

u32 lift_read8(u32 addr);
u32 lift_read16(u32 addr);
u32 lift_read32(u32 addr);
void lift_write8(u32 addr, u32 value);
void lift_write16(u32 addr, u32 value);
void lift_write32(u32 addr, u32 value);
void lift_call(u32 addr);
void lift_swi(u32 number);
void lift_fail(u32 addr);

/* A jump into another function (not a call) keeps the return address the
 * current function was entered with: that is where the jumped-to code will
 * return to, whatever LR holds by then. */
/* address of the instruction doing the current load (bit 0: Thumb) */
extern u32 lift_pc;
extern u32 lift_tail_lr, lift_tail_lr2;
extern int lift_tail;
/* where the function that just returned went back to */
extern u32 lift_ret;
/* A jump to another function: it will come back to one of two addresses,
 * the return address of the function jumping (if the code pops the frame
 * that function pushed) or what LR holds (a return through LR). */
#define LIFT_TAIL2(lr, lr2) do { lift_tail_lr = (lr); lift_tail_lr2 = (lr2); lift_tail = 1; } while (0)
#define LIFT_TAIL(lr) LIFT_TAIL2(lr, lr)
#define LIFT_ENTRY_LRS(lr, lr2) do { \
    if (lift_tail) { lift_tail = 0; lr = lift_tail_lr; lr2 = lift_tail_lr2; } \
    else lr = lr2 = cpu.r[14]; } while (0)
#define LIFT_IS_RET(a) ((((a) ^ entry_lr) & ~1u) == 0 || (((a) ^ entry_lr2) & ~1u) == 0)
/* after a jump came back to jt: return too, or go on in this function */
#define LIFT_AFTER_TAIL() do { \
    if (LIFT_IS_RET(jt)) return; \
    goto do_jump; } while (0)
#define LIFT_ENTRY_LR() (lift_tail ? (lift_tail = 0, lift_tail_lr) : cpu.r[14])

/* ------------------------------------ bridges to and from hand-written C
 *
 * Every lifted function is a weak lift_NAME. Hand-written C replaces one by
 * defining a strong lift_NAME with these macros, next to the C function:
 *     LIFT_EXPORT_VOID(Name)         void Name(up to 4 arguments)
 *     LIFT_EXPORT(type, Name)        type Name(up to 4 arguments)
 * The arguments come from r0-r3 and a result goes to r0. A void function
 * sets lift_void, so the check does not compare r0 (whatever the original
 * left there is not part of its output).
 *
 * Hand-written C calls code that is still lifted with
 *     LIFT_CALL(Name, a0, a1, a2, a3)   (returns r0; pass 0 for unused)
 */
extern int lift_void;
typedef u32 (*LiftFn4)(u32, u32, u32, u32);
#define LIFT_ARGS cpu.r[0], cpu.r[1], cpu.r[2], cpu.r[3]
#define LIFT_EXPORT_VOID(name) \
    void lift_##name(void) { u32 _lr = LIFT_ENTRY_LR(); ((void (*)(u32, u32, u32, u32))(name))(LIFT_ARGS); lift_void = 1; lift_ret = _lr; }
#define LIFT_EXPORT(type, name) \
    void lift_##name(void) { u32 _lr = LIFT_ENTRY_LR(); cpu.r[0] = (u32)((type (*)(u32, u32, u32, u32))(name))(LIFT_ARGS); lift_void = 0; lift_ret = _lr; }
/* a return address no lifted code jumps to, so the callee returns to us */
#define LIFT_RETURN_MAGIC 0xFFFFFFF1u
#define LIFT_CALL(name, a0, a1, a2, a3) ({ \
    extern void lift_##name(void); \
    cpu.r[0] = (u32)(a0); cpu.r[1] = (u32)(a1); cpu.r[2] = (u32)(a2); cpu.r[3] = (u32)(a3); \
    cpu.r[14] = LIFT_RETURN_MAGIC; lift_tail = 0; lift_##name(); cpu.r[0]; })

static inline u32 ror32(u32 v, u32 n) {
    n &= 31;
    return n ? (v >> n) | (v << (32 - n)) : v;
}

#define R8(a) lift_read8(a)
#define RS8(a) ((u32)(s32)(s8)lift_read8(a))
#define R16(a) lift_r16(a)
#define RS16(a) lift_rs16(a)
#define R32(a) lift_r32(a)
#define W8(a, v) lift_write8((a), (v))
#define W16(a, v) lift_write16((a) & ~1u, (v))
#define W32(a, v) lift_write32((a) & ~3u, (v))

static inline u32 lift_r32(u32 a) {
    return ror32(lift_read32(a & ~3u), (a & 3) * 8);
}
static inline u32 lift_r16(u32 a) {
    return ror32(lift_read16(a & ~1u), (a & 1) * 8);
}
static inline u32 lift_rs16(u32 a) {
    if (a & 1)
        return (u32)(s32)(s8)lift_read8(a);
    return (u32)(s32)(s16)lift_read16(a);
}

/* ARM register-specified shifts (no flags) */
#define LSL_ARM(a, s) ({ u32 _s = (s) & 0xFF; _s >= 32 ? 0 : (a) << _s; })
#define LSR_ARM(a, s) ({ u32 _s = (s) & 0xFF; _s >= 32 ? 0 : (a) >> _s; })
#define ASR_ARM(a, s) ({ u32 _s = (s) & 0xFF; (u32)((s32)(a) >> (_s >= 32 ? 31 : _s)); })

/* Flags are locals of each lifted function: N, Z, C, V. */
#define NZ(x) do { u32 _x = (x); N = _x >> 31; Z = _x == 0; } while (0)

#define ADDS(a, b) ({ u32 _a = (a), _b = (b), _r = _a + _b; \
    N = _r >> 31; Z = _r == 0; C = _r < _a; V = ((~(_a ^ _b)) & (_a ^ _r)) >> 31; _r; })
#define SUBS(a, b) ({ u32 _a = (a), _b = (b), _r = _a - _b; \
    N = _r >> 31; Z = _r == 0; C = _a >= _b; V = ((_a ^ _b) & (_a ^ _r)) >> 31; _r; })

/* Shifts by an immediate (Thumb encodings: 0 means 32 for LSR/ASR). */
#define LSL_IMM(a, n) ({ u32 _a = (a), _r = _a; \
    if ((n) != 0) { C = (_a >> (32 - (n))) & 1; _r = _a << (n); } NZ(_r); _r; })
#define LSR_IMM(a, n) ({ u32 _a = (a), _r; \
    if ((n) == 0) { C = _a >> 31; _r = 0; } else { C = (_a >> ((n) - 1)) & 1; _r = _a >> (n); } NZ(_r); _r; })
#define ASR_IMM(a, n) ({ u32 _a = (a), _r; \
    if ((n) == 0) { C = _a >> 31; _r = (u32)((s32)_a >> 31); } \
    else { C = (_a >> ((n) - 1)) & 1; _r = (u32)((s32)_a >> (n)); } NZ(_r); _r; })

/* Shifts by a register: only the low byte counts. */
#define LSL_REG(a, s) ({ u32 _a = (a), _s = (s) & 0xFF, _r = _a; \
    if (_s == 0) {} else if (_s < 32) { C = (_a >> (32 - _s)) & 1; _r = _a << _s; } \
    else if (_s == 32) { C = _a & 1; _r = 0; } else { C = 0; _r = 0; } NZ(_r); _r; })
#define LSR_REG(a, s) ({ u32 _a = (a), _s = (s) & 0xFF, _r = _a; \
    if (_s == 0) {} else if (_s < 32) { C = (_a >> (_s - 1)) & 1; _r = _a >> _s; } \
    else if (_s == 32) { C = _a >> 31; _r = 0; } else { C = 0; _r = 0; } NZ(_r); _r; })
#define ASR_REG(a, s) ({ u32 _a = (a), _s = (s) & 0xFF, _r = _a; \
    if (_s == 0) {} else if (_s < 32) { C = (_a >> (_s - 1)) & 1; _r = (u32)((s32)_a >> _s); } \
    else { C = _a >> 31; _r = (u32)((s32)_a >> 31); } NZ(_r); _r; })
#define ROR_REG(a, s) ({ u32 _a = (a), _s = (s) & 0xFF, _r = _a; \
    if (_s == 0) {} else if ((_s & 31) == 0) { C = _a >> 31; } \
    else { _r = ror32(_a, _s & 31); C = _r >> 31; } NZ(_r); _r; })

#endif
