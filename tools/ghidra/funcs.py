"""Write the function list (address, Thumb/ARM, name) from asm/*.s as TSV."""
import glob, re, sys
out = []
for f in sorted(glob.glob('asm/*.s')):
    for m in re.finditer(r'^\t(arm|thumb|non_word_aligned_thumb)_func_start (\w+)\n\2: @ 0x([0-9A-Fa-f]+)', open(f).read(), re.M):
        out.append((int(m.group(3), 16), 'arm' if m.group(1) == 'arm' else 'thumb', m.group(2)))
out.sort()
with open(sys.argv[1], 'w') as fp:
    for a, k, n in out:
        fp.write('%08X\t%s\t%s\n' % (a, k, n))
print(len(out), 'functions')
