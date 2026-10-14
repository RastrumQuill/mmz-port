"""Thumb function signatures for matching functions across builds/games.

A signature is the function's sequence of 16-bit Thumb opcodes with the
parts that depend on layout masked out: branch-with-link offsets, PC
relative load offsets, and the literal pool words themselves.
"""
import struct

def signature(code, start=0, end=None, base=0):
    """Masked opcodes of code[start:end]; base is the address of code[0]."""
    if end is None:
        end = len(code)
    pool = set()
    out = []
    i = start
    while i + 2 <= end:
        if i in pool:
            i += 4
            continue
        h = struct.unpack_from('<H', code, i)[0]
        if (h & 0xF800) == 0xF000 and i + 4 <= end:
            h2 = struct.unpack_from('<H', code, i + 2)[0]
            if (h2 & 0xF800) in (0xF800, 0xE800):
                out.append(0xF000)  # bl
                i += 4
                continue
        if (h & 0xF800) == 0x4800:  # ldr rX, [pc, #imm]
            target = ((base + i + 4) & ~3) - base + (h & 0xFF) * 4
            pool.add(target)
            out.append(h & 0xFF00)
        elif (h & 0xF000) == 0xD000 and (h & 0x0F00) < 0x0E00:  # b<cond>
            out.append(h & 0xFF00)
        elif (h & 0xF800) == 0xE000:  # b
            out.append(0xE000)
        elif (h & 0xF800) == 0xA000:  # adr / add rX, pc
            out.append(h & 0xFF00)
        else:
            out.append(h)
        i += 2
    # trailing alignment padding
    while out and out[-1] == 0:
        out.pop()
    return tuple(out)

def loosen(sig):
    """Drop immediates (struct offsets, constants) but keep the registers."""
    out = []
    for h in sig:
        if 0x2000 <= h < 0x4000:      # mov/cmp/add/sub imm8
            h &= 0xFF00
        elif 0x6000 <= h < 0x9000:    # ldr/str/ldrb/strb/ldrh/strh imm5
            h &= 0xF83F
        elif 0x9000 <= h < 0xA000:    # sp relative
            h &= 0xFF00
        elif (h & 0xFF00) == 0xB000:  # add/sub sp
            h &= 0xFF80
        elif h < 0x1800:              # shifts by imm5
            h &= 0xF83F
        elif 0x1C00 <= h < 0x2000:    # add/sub imm3
            h &= 0xFE3F
        out.append(h)
    return tuple(out)
