"""Compare the PC build's screenshots (.ppm) with mGBA's (.png).

usage: compare.py PC_DIR REF_DIR [SHEET.png]
Prints the share of identical pixels per frame; SHEET gets the differing
frames side by side (mGBA, PC, differing pixels).
"""
import os, sys
from PIL import Image, ImageChops
pcd, refd = sys.argv[1], sys.argv[2]
names = sorted(f[:-4] for f in os.listdir(refd) if f.endswith('.png'))
rows = []
for n in names:
    ref = Image.open(os.path.join(refd, n + '.png')).convert('RGB')
    p = os.path.join(pcd, n + '.ppm')
    if not os.path.exists(p):
        print(n, 'missing')
        continue
    pc = Image.open(p).convert('RGB')
    diff = ImageChops.difference(ref, pc).convert('L').point(lambda v: 255 if v else 0)
    same = 1 - sum(1 for v in diff.tobytes() if v) / (240 * 160)
    print('%s %6.2f%%' % (n, same * 100))
    rows.append((n, ref, pc, diff, same))
if len(sys.argv) > 3:
    bad = [r for r in rows if r[4] < 1][:24] or rows[:24]
    sheet = Image.new('RGB', (240 * 3 + 20, 160 * len(bad)), 'black')
    for i, (n, ref, pc, diff, same) in enumerate(bad):
        sheet.paste(ref, (0, i * 160))
        sheet.paste(pc, (250, i * 160))
        sheet.paste(Image.merge('RGB', (diff, diff, diff)), (500, i * 160))
    sheet.save(sys.argv[3])
print('identical frames: %d of %d' % (sum(1 for r in rows if r[4] == 1), len(rows)))
