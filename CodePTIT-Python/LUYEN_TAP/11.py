n = int(input())
a = list(map(int, input().split()))

a.sort()

max2 = max(
    a[-1] * a[-2],
    a[0] * a[1]
)

max3 = max(
    a[-1] * a[-2] * a[-3],
    a[0] * a[1] * a[-1]
)

print(max(max2, max3))