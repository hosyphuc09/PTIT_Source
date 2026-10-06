import re

n = int(input())

a = []

for _ in range(n):
    s = input().strip()

    numbers = re.findall(r'\d+', s)

    for x in numbers:
        a.append(int(x))

a.sort()

for x in a:
    print(x)