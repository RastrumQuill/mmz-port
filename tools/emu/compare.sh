#!/bin/bash
# Play a route on two ROMs and check that every screenshot is identical.
# usage: tools/emu/compare.sh A.gba B.gba [ROUTE]
set -e
DIR=$(cd "$(dirname "$0")" && pwd)
A=$1; B=$2; ROUTE=${3:-$DIR/routes/intro.txt}
T=$(mktemp -d)
[ -x "$DIR/runner" ] || gcc -O2 -o "$DIR/runner" "$DIR/runner.c" -lmgba -lpng
for r in a b; do
	mkdir -p "$T/$r"
	sed "s|{OUT}|$T/$r|" "$ROUTE" > "$T/$r.txt"
done
"$DIR/runner" "$A" "$T/a.txt"
"$DIR/runner" "$B" "$T/b.txt"
fail=0
for f in "$T"/a/*.png; do
	n=$(basename "$f")
	if ! cmp -s "$f" "$T/b/$n"; then echo "differs: $n"; fail=1; fi
done
echo "$(ls "$T"/a | wc -l) screenshots compared"
[ $fail = 0 ] && echo "identical" && rm -rf "$T"
[ $fail = 0 ] || { echo "screenshots kept in $T"; exit 1; }
