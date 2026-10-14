"""Write a long route of semi-random play for coverage runs.

usage: fuzz_route.py FRAMES SEED > route.txt
Starts a new game like routes/intro.txt, then plays: mostly moving and
jumping and attacking in bursts, with menu buttons now and then.
"""
import random, sys
frames, seed = int(sys.argv[1]), int(sys.argv[2])
rnd = random.Random(seed)
lines = ['0 -', '700 START', '706 -', '860 A', '866 -']
for f in range(900, 7000, 20):
    lines += ['%d A' % f, '%d -' % (f + 4)]
f = 7000
moves = [['RIGHT'], ['LEFT'], ['RIGHT', 'B'], ['RIGHT', 'A'], ['LEFT', 'A'], ['B'], ['A'], ['RIGHT', 'R'],
         ['UP'], ['DOWN'], ['DOWN', 'A'], ['RIGHT', 'L'], ['START'], ['SELECT'], []]
weights = [30, 8, 14, 14, 4, 6, 8, 6, 3, 3, 2, 2, 1, 1, 6]
while f < frames:
    keys = rnd.choices(moves, weights)[0]
    length = rnd.randint(2, 40)
    lines.append('%d %s' % (f, ','.join(keys) if keys else '-'))
    f += length
lines.append('%d end' % frames)
print('\n'.join(lines))
