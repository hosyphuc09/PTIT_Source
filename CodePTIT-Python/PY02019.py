def usc(a, b):
    while b != 0:
        a, b = b, a % b
    return a

n = int(input())
a = sorted(map(int, input().split()))

for i in range(n):
    for j in range(i + 1, n):
        if usc(a[i], a[j]) == 1:
            print(a[i], a[j])