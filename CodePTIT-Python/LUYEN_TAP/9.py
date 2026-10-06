import sys

def count_upto(n):
    cnt = [0] * 10

    if n <= 0:
        return cnt

    factor = 1

    while factor <= n:
        lower = n % factor if factor > 1 else 0
        cur = (n // factor) % 10
        higher = n // (factor * 10)

        for d in range(1, 10):
            cnt[d] += higher * factor

            if cur > d:
                cnt[d] += factor
            elif cur == d:
                cnt[d] += lower + 1

        if higher > 0:
            cnt[0] += (higher - 1) * factor

            if cur == 0:
                cnt[0] += lower + 1
            else:
                cnt[0] += factor

        factor *= 10

    return cnt


input = sys.stdin.readline

t = int(input())

for _ in range(t):
    a, b = map(int, input().split())

    x = count_upto(b)
    y = count_upto(a - 1)

    print(*[x[i] - y[i] for i in range(10)])