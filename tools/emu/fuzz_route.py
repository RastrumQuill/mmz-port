"""Write a long route of semi-random play for coverage runs.

usage: fuzz_route.py FRAMES SEED [SLOT [MISSION]] > route.txt
Starts a new game like routes/intro.txt, or with SLOT (1-3) continues from
that file of the save (run with SAVE=file.sav) and starts the mission the
base offers; with MISSION, that mission instead (the mission number at
0x0202A574 is overwritten until the stage starts, like a cheat code). Then
plays: mostly moving and jumping and attacking in bursts,
with menu buttons now and then.
"""
import random, sys
frames, seed = int(sys.argv[1]), int(sys.argv[2])
rnd = random.Random(seed)
slot = int(sys.argv[3]) if len(sys.argv) > 3 else 0
if slot:
    # title: CONTINUE, file select, "okay to load?", base menu: BEGIN MISSION, mission
    lines = ['0 -', '700 START', '706 -', '860 A', '866 -']
    f = 1000
    for _ in range(slot - 1):
        lines += ['%d DOWN' % f, '%d -' % (f + 6)]
        f += 30
    lines += ['1100 A', '1106 -', '1600 A', '1606 -', '2150 A', '2156 -', '2700 A', '2706 -']
    for f in range(2800, 5000, 20):
        lines += ['%d A' % f, '%d -' % (f + 4)]
    if len(sys.argv) > 4:
        lines += ['%d poke 0x0202A574 %s' % (f, sys.argv[4]) for f in range(2710, 5200)]
    f = 5200
else:
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
lines.sort(key=lambda l: int(l.split()[0]))
lines.append('%d end' % frames)
print('\n'.join(lines))
