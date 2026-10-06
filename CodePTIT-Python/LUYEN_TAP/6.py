import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.isqrt(n)) + 1):
        if n % i == 0:
            return False
    return True


n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]

max_prime = -1

for i in range(n):
    for j in range(m):
        if is_prime(a[i][j]):
            max_prime = max(max_prime, a[i][j])

if max_prime == -1:
    print("NOT FOUND")
else:
    print(max_prime)

    for i in range(n):
        for j in range(m):
            if a[i][j] == max_prime:
                print(f"Vi tri [{i}][{j}]")