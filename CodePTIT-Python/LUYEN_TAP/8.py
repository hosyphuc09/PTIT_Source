import math

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, math.isqrt(n) + 1):
        if n % i == 0:
            return False
    return True


n = int(input())
a = list(map(int, input().split()))

seen = set()
b = []

for x in a:
    if x not in seen:
        seen.add(x)
        b.append(x)

total = sum(b)
prefix = 0
found = False

for i in range(len(b)):
    prefix += b[i]
    suffix = total - prefix

    if is_prime(prefix) and is_prime(suffix):
        print(i)
        found = True
        break

if not found:
    print("NOT FOUND")