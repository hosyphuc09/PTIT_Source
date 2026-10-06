import sys
import heapq

data = list(map(int, sys.stdin.buffer.read().split()))
it = iter(data)

t = next(it)

for _ in range(t):
    n = next(it)
    x = next(it)
    y = next(it)
    z = next(it)

    limit = 2 * n + 2
    INF = 10**18

    dist = [INF] * (limit + 1)
    dist[0] = 0

    pq = [(0, 0)]

    while pq:
        d, u = heapq.heappop(pq)

        if d != dist[u]:
            continue

        if u == n:
            break

        if u + 1 <= limit:
            nd = d + x
            if nd < dist[u + 1]:
                dist[u + 1] = nd
                heapq.heappush(pq, (nd, u + 1))

        if u > 0:
            nd = d + y
            if nd < dist[u - 1]:
                dist[u - 1] = nd
                heapq.heappush(pq, (nd, u - 1))

        if u > 0 and u * 2 <= limit:
            nd = d + z
            if nd < dist[u * 2]:
                dist[u * 2] = nd
                heapq.heappush(pq, (nd, u * 2))

    print(dist[n])