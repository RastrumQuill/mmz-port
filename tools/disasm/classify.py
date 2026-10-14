"""Classify addresses against an `as -al` listing of code.s:
gap (inside .byte data), insn (instruction start), mid (inside something)."""
import re, sys, json, bisect
def load_listing(path):
    spans = []  # [addr, size, kind]
    for line in open(path):
        m = re.match(r'\s*\d+ ([0-9a-f]{4,8}) ([0-9A-F]+)\s*(.*)', line)
        if m:
            a = int(m.group(1), 16) + 0x08000000
            src = m.group(3).strip()
            kind = 'byte' if src.startswith('.byte') else ('word' if '.4byte' in src else 'insn')
            spans.append([a, len(m.group(2)) // 2, kind])
            continue
        m = re.match(r'\s*\d+\s+([0-9A-F]+)\s*$', line)
        if m and spans:
            spans[-1][1] += len(m.group(1)) // 2
    spans.sort()
    return spans
def classify(spans, addr):
    keys = [s[0] for s in spans]
    i = bisect.bisect_right(keys, addr) - 1
    if i < 0:
        return 'none'
    a, size, kind = spans[i]
    if kind == 'byte' and a <= addr < a + size:
        return 'gap'
    if a == addr:
        return kind
    if a <= addr < a + size:
        return 'mid-' + kind
    return 'none'
if __name__ == '__main__':
    spans = load_listing(sys.argv[1])
    d = json.load(open(sys.argv[2]))
    from collections import Counter
    c = Counter()
    out = {}
    for f in d['new_funcs']:
        k = classify(spans, f)
        c[k] += 1
        out.setdefault(k, []).append(hex(f))
    print(c)
    for k, v in out.items():
        print(k, v[:12])
