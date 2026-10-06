n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]

mx = max(max(row) for row in a)
mn = min(min(row) for row in a)

lucky = mx - mn

found = False

for i in range(n):
    for j in range(m):
        if a[i][j] == lucky:
            if not found:
                print(lucky)
                found = True
            print(f"Vi tri [{i}][{j}]")

if not found:
    print("NOT FOUND")