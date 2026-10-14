"""Heuristic check that an address starts a Thumb function."""
import struct
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB

_md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)

def _decode(rom, addr):
    o = addr - 0x08000000
    for ins in _md.disasm(rom[o:o + 4], addr, 1):
        return ins
    return None

def thumb_func_extent(rom, addr, limit=2000):
    """Follow the control flow from addr. Returns the end of the code it
    reaches if every path ends in a return, or None."""
    o = addr - 0x08000000
    if o < 0 or o + 2 > len(rom) or addr & 1:
        return None
    first = struct.unpack_from('<H', rom, o)[0]
    if (first & 0xFE00) == 0xB400 and (first & 0x1FF) == 0:
        return None  # push {} is not a real instruction
    todo = [addr]
    seen = set()
    end = addr
    steps = 0
    while todo:
        a = todo.pop()
        while a not in seen:
            steps += 1
            if steps > limit:
                return None
            ins = _decode(rom, a)
            if ins is None:
                return None
            seen.add(a)
            end = max(end, a + ins.size)
            m, ops = ins.mnemonic, ins.op_str
            if m in ('bx', 'blx') or (m.startswith('pop') and 'pc' in ops):
                break
            if m in ('udf', 'bkpt') or m.startswith('svc') and False:
                return None
            if m == 'b':
                t = int(ops.lstrip('#'), 16)
                if t < addr - 0x1000 or t > addr + 0x4000:
                    return None
                todo.append(t)
                break
            if m.startswith('b') and m not in ('bl', 'bic', 'bics') and ops.startswith('#'):
                t = int(ops.lstrip('#'), 16)  # conditional branch
                todo.append(t)
            if m.startswith('ldr') and 'pc' in ops:
                pass
            if 'pc' in ops.split(',')[0] and m in ('mov', 'add'):
                break  # jump table dispatch
            a += ins.size
    return end

def looks_like_thumb_func(rom, addr, limit=2000):
    return thumb_func_extent(rom, addr, limit) is not None


def strict_thumb_func_extent(rom, addr, limit=200):
    """Straight-line decode from addr; the end of the first return, or None."""
    o = addr - 0x08000000
    if o < 0 or o + 2 > len(rom) or addr & 1:
        return None
    first = struct.unpack_from('<H', rom, o)[0]
    if (first & 0xFE00) == 0xB400 and (first & 0x1FF) == 0:
        return None
    n = 0
    for ins in _md.disasm(rom[o:o + limit * 4], addr):
        n += 1
        m, ops = ins.mnemonic, ins.op_str
        if m == 'bx' or (m.startswith('pop') and 'pc' in ops):
            return ins.address + ins.size
        if m in ('udf', 'bkpt') or n >= limit:
            return None
    return None
