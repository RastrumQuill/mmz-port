"""Extract Thumb function signatures from ELF objects or from the ROM."""
import re, struct, subprocess, sys
from sig import signature

def obj_functions(path):
    """{name: signature} for the Thumb functions in an object file."""
    syms = []
    out = subprocess.run(['arm-none-eabi-readelf', '-sW', path], capture_output=True, text=True).stdout
    for line in out.splitlines():
        f = line.split()
        if len(f) >= 8 and f[3] == 'FUNC' and f[6] != 'UND':
            syms.append((int(f[1], 16), int(f[2]), f[7]))
    if not syms:
        return {}
    text = subprocess.run(['arm-none-eabi-objcopy', '-O', 'binary', '-j', '.text', path, '/dev/stdout'],
                          capture_output=True).stdout
    syms.sort()
    res = {}
    for k, (val, size, name) in enumerate(syms):
        a = val & ~1
        if not val & 1:
            continue  # ARM
        end = a + size if size else (syms[k + 1][0] & ~1 if k + 1 < len(syms) else len(text))
        res[name] = signature(text, a, end, 0)
    return res

def rom_functions(rom, asm_path, code_end):
    """{name: (addr, signature)} for the Thumb functions in our code.s."""
    starts = []
    s = open(asm_path).read()
    for m in re.finditer(r'^\s*(thumb|non_word_aligned_thumb|arm)_func_start (\w+)\n(\w+): @ 0x([0-9A-Fa-f]+)', s, re.M):
        starts.append((int(m.group(4), 16), m.group(2), m.group(1) != 'arm'))
    starts.sort()
    res = {}
    for k, (a, name, thumb) in enumerate(starts):
        end = starts[k + 1][0] if k + 1 < len(starts) else code_end
        if thumb:
            res[name] = (a, signature(rom, a - 0x08000000, end - 0x08000000, 0x08000000))
    return res
