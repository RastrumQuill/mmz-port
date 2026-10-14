"""Find ROM pointers inside the data part of the ROM.

Seeds: code labels (functions) and data addresses referenced from code.
A data word is a pointer if it points exactly at a known label. Words next
to found pointers that look like ROM pointers are accepted too (pointer
tables), and their targets become new labels. Repeats until stable.
"""
import re, struct, sys, json
from classify import load_listing, classify

from game import CODE_END, DATA_START

def load(rom_path, asm_path):
    rom = open(rom_path, 'rb').read()
    s = open(asm_path).read()
    funcs = {}
    for m in re.finditer(r'^\s*(arm|thumb|non_word_aligned_thumb)_func_start (\w+)\n\1?.*?^\2: @ 0x([0-9A-Fa-f]+)', s, re.M | re.S):
        pass
    labels = {}
    kind = {}
    cur = 'arm'
    for line in s.splitlines():
        m = re.match(r'\s*(arm|thumb|non_word_aligned_thumb)_func_start (\w+)', line)
        if m:
            cur = m.group(1)
            kind[m.group(2)] = 'arm' if cur == 'arm' else 'thumb'
            continue
        m = re.match(r'^(\w+):(?: @ 0x([0-9A-Fa-f]+))?', line)
        if m:
            n = m.group(1)
            if m.group(2):
                a = int(m.group(2), 16)
            elif re.search(r'_0[89][0-9A-F]{6}$', n):
                a = int(n[-8:], 16)
            else:
                continue
            labels[a] = n
    pool = [int(x, 16) for x in re.findall(r'\.4byte 0x(08[0-9A-Fa-f]{6})', s)]
    return rom, labels, kind, pool

def scan(rom, labels, kind, pool, spans=None):
    end = len(rom)
    while end and rom[end - 1] == 0xFF:
        end -= 1
    rom_end = 0x08000000 + len(rom)
    func_ptrs = {}
    for a, n in labels.items():
        if kind.get(n) == 'thumb':
            func_ptrs[a | 1] = n
        elif kind.get(n) == 'arm':
            func_ptrs[a] = n
    data_labels = {p for p in pool if p >= DATA_START}
    words = {}
    for o in range(DATA_START - 0x08000000, (end + 3) & ~3, 4):
        if o + 4 <= len(rom):
            w = struct.unpack_from('<I', rom, o)[0]
            if 0x08000000 <= w < rom_end:
                words[0x08000000 + o] = w
    ptrs = {}
    new_funcs = set()
    # m4a music: GOTO (0xB2) and PATT (0xB3) take an unaligned 4-byte address
    # of a nearby spot in the same track
    for o in range(DATA_START - 0x08000000, end - 5):
        if rom[o] in (0xB2, 0xB3):
            v = struct.unpack_from('<I', rom, o + 1)[0]
            a = 0x08000000 + o + 1
            if v >= DATA_START and abs(v - a) < 0x10000:
                ptrs[a] = v
                data_labels.add(v)
    changed = True
    while changed:
        changed = False
        for a, w in words.items():
            if a in ptrs:
                continue
            if w in func_ptrs or w in data_labels:
                ptrs[a] = w
                changed = True
        # extend runs of pointers
        for a in sorted(ptrs):
            for d in (4, -4):
                b = a + d
                while b in words and b not in ptrs:
                    w = words[b]
                    if w >= DATA_START:
                        ptrs[b] = w
                        data_labels.add(w)
                        changed = True
                    elif w & 1 and w < CODE_END and (w in func_ptrs or (w & ~1) in labels
                                                      or (spans and classify(spans, w & ~1) == 'gap')):
                        ptrs[b] = w
                        new_funcs.add(w & ~1)
                        func_ptrs[w] = None
                        changed = True
                    else:
                        break
                    b += d
        # tables that start at a known label: a pointer-like first word with
        # another one a regular stride later
        for L in sorted(data_labels):
            if L & 3:
                continue
            found = False
            for off in range(0, 32, 4):
                a0 = L + off
                if a0 in ptrs or a0 not in words:
                    continue
                w0 = words[a0]
                if w0 < DATA_START or w0 & 3:
                    continue
                for stride in range(max(4, off + 4), 36, 4):
                    w1 = words.get(a0 + stride)
                    if (w1 is not None and w1 >= DATA_START and abs(w1 - w0) <= 0x400000
                            and (stride == 4 or not w1 & 3)):
                        ptrs[a0] = w0
                        data_labels.add(w0)
                        changed = found = True
                        break
                if found:
                    break
        # script-like data: an aligned address of something close by, next to
        # other pointers or to another such candidate
        import bisect
        near = [a for a, w in words.items() if a not in ptrs and w >= DATA_START
                and not w & 3 and abs(w - a) < 0x10000]
        known = sorted(set(ptrs) | set(near))
        nearset = set(near)
        for a in near:
            i = bisect.bisect_left(known, a - 0x100)
            ok = False
            while i < len(known) and known[i] <= a + 0x100:
                b = known[i]
                if b != a and (b in ptrs or abs(b - a) <= 0x40):
                    ok = True
                    break
                i += 1
            if ok:
                ptrs[a] = words[a]
                data_labels.add(words[a])
                changed = True
        # arrays of structs: pointers at a regular stride with other fields between
        for a in sorted(ptrs):
            w0 = ptrs[a]
            if w0 < DATA_START:
                continue
            for stride in [d for st in range(8, 36, 4) for d in (st, -st)]:
                prev = w0
                b = a + stride
                while b in words and b not in ptrs:
                    w = words[b]
                    if w < DATA_START or abs(w - prev) > 0x400000 or w & 3:
                        break
                    ptrs[b] = w
                    data_labels.add(w)
                    changed = True
                    prev = w
                    b += stride
    return ptrs, data_labels, new_funcs

if __name__ == '__main__':
    rom, labels, kind, pool = load(sys.argv[1], sys.argv[2])
    spans = load_listing(sys.argv[4]) if len(sys.argv) > 4 else None
    ptrs, data_labels, new_funcs = scan(rom, labels, kind, pool, spans)
    new_funcs = {f for f in new_funcs if kind.get(labels.get(f)) != 'thumb'}
    print('data pointers', len(ptrs), 'data labels', len(data_labels), 'new thumb funcs', len(new_funcs), file=sys.stderr)
    json.dump({'ptrs': {hex(a): w for a, w in ptrs.items()}, 'data_labels': sorted(data_labels),
               'new_funcs': sorted(new_funcs)}, open(sys.argv[3], 'w'))
