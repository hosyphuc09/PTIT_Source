import sys
from collections import deque

a = sys.stdin.read().split()

start = ''.join(a[:4])
target = ''.join(a[4:8])

# Đánh số ô:
#  0  1  2  3
#  4  5  6  7
#  8  9 10 11
# 12 13 14 15

ke = [[] for _ in range(16)]

for i in range(16):
    r, c = divmod(i, 4)

    if r > 0:
        ke[i].append(i - 4)
    if r < 3:
        ke[i].append(i + 4)
    if c > 0:
        ke[i].append(i - 1)
    if c < 3:
        ke[i].append(i + 1)


def to_int(s):
    x = 0
    for i in range(16):
        if s[i] == '1':
            x |= 1 << i
    return x


start = to_int(start)
target = to_int(target)

if start == target:
    print(0)
    sys.exit()

q = deque([start])

parent = {start: -1}
move = {}

while q:
    s = q.popleft()

    for i in range(16):

        # i phải đang có quân
        if not (s & (1 << i)):
            continue

        for j in ke[i]:

            # j phải đang trống
            if s & (1 << j):
                continue

            ns = s ^ (1 << i) ^ (1 << j)

            if ns in parent:
                continue

            parent[ns] = s
            move[ns] = (i, j)

            if ns == target:
                q.clear()
                break

            q.append(ns)

        else:
            continue
        break

# Truy vết
path = []
cur = target

while cur != start:
    u, v = move[cur]

    path.append((
        u // 4 + 1,
        u % 4 + 1,
        v // 4 + 1,
        v % 4 + 1
    ))

    cur = parent[cur]

path.reverse()

print(len(path))

for u, v, x, y in path:
    print(u, v, x, y)