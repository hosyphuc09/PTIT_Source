n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]

max_pal = -1

for i in range(n):
    for j in range(m):
        x = a[i][j]
        s = str(x)

        if x >= 10 and s == s[::-1]:
            if x > max_pal:
                max_pal = x

if max_pal == -1:
    print("NOT FOUND")
else:
    print(max_pal)

    for i in range(n):
        for j in range(m):
            if a[i][j] == max_pal:
                print(f"Vi tri [{i}][{j}]")