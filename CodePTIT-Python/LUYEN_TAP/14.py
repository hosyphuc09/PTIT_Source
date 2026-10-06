t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    ans = 0

    for i in range(n - 1):
        x = min(a[i], a[i + 1])
        y = max(a[i], a[i + 1])

        while y > 2 * x:
            x *= 2
            ans += 1

    print(ans)