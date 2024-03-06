#!/usr/bin/env python3

f = [[0 for _ in range(100)] for _ in range(100)]
data = [int(value) for value in open('in.txt', 'r').read().split()]
r, c = 0, 0
b = True

for v in data:
    for _ in range(v):
        f[r][c] = b
        c += 1
        if c >= 100:
            c = 0
            r += 1
            if r >= 100:
                r = 0
    b = not b

for r in f:
    for b in r:
        if b:
            print('.', end='')
        else:
            print('#', end='')
    print()
