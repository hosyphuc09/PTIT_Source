import math
n,m=map(int,input().split())
for i in range(n,m):
    for j in range(i+1,m):
        for t in range(j+1,m+1):
            if math.gcd(i,j)==1 and math.gcd(i,t)==1 and math.gcd(j,t)==1:
                print(f"({i}, {j}, {t})")