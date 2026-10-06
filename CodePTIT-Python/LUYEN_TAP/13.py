from collections import defaultdict

N = input().strip()
digits = list(map(int, N[::-1]))

MAX = 9 * len(digits)

prime = [True] * (MAX + 1)
prime[0] = prime[1] = False

for i in range(2, int(MAX ** 0.5) + 1):
    if prime[i]:
        for j in range(i * i, MAX + 1, i):
            prime[j] = False

dp = {(0, 0, 0): 1}

for d in digits:
    ndp = defaultdict(int)

    for (carry, sx, sy), cnt in dp.items():
        for y in range(10):
            x = (d - 2 * y - carry) % 10
            total = x + 2 * y + carry

            if total % 10 == d:
                new_carry = total // 10
                ndp[(new_carry, sx + x, sy + y)] += cnt

    dp = ndp

ans = 0

for (carry, sx, sy), cnt in dp.items():
    if carry == 0 and prime[sx] and prime[sy]:
        ans += cnt

print(ans)