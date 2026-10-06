import sys
from bisect import bisect_left

sys.setrecursionlimit(300000)
input = sys.stdin.buffer.readline

n = int(input())
x = [0] * n
y = [0] * n

for i in range(n):
    x[i], y[i] = map(int, input().split())

vals = sorted(set(y))
yr = [bisect_left(vals, v) + 1 for v in y]
m = len(vals)

dp = [1] * n
bit = [0] * (m + 1)


def update(pos, val, touched):
    while pos <= m:
        if bit[pos] < val:
            bit[pos] = val
            touched.append(pos)
        pos += pos & -pos


def query(pos):
    res = 0
    while pos > 0:
        if bit[pos] > res:
            res = bit[pos]
        pos -= pos & -pos
    return res


def cdq(l, r):
    if l >= r:
        return

    mid = (l + r) // 2

    cdq(l, mid)

    left = list(range(l, mid + 1))
    right = list(range(mid + 1, r + 1))

    left.sort(key=lambda i: x[i])
    right.sort(key=lambda i: x[i])

    p = 0
    touched = []

    for j in right:
        while p < len(left) and x[left[p]] < x[j]:
            i = left[p]
            update(yr[i], dp[i], touched)
            p += 1

        best = query(yr[j] - 1)
        if dp[j] < best + 1:
            dp[j] = best + 1

    for pos in touched:
        bit[pos] = 0

    cdq(mid + 1, r)


cdq(0, n - 1)

print(max(dp))