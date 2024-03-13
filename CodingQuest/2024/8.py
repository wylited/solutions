#!/usr/bin/env python3

def count(d, o):
    dp = [0] * (d + 1)
    dp[0] = 1

    for i in range(1, d + 1):
        for option in o:
            if i >= option:
                dp[i] += dp[i - option]

    return dp[d]

o = [40, 12, 2, 1]
print(count(856, o))
