import sys

input = sys.stdin.buffer.readline

t = int(input())

for _ in range(t):
    n = int(input())
    a = []

    for _ in range(n):
        x1, x2 = map(int, input().split())
        a.append((x2, x1))

    a.sort()

    dem = 0
    last = -1

    for x2, x1 in a:
        if x1 >= last:
            dem += 1
            last = x2

    print(dem)