n=int(input())
a=[list(map(int,input().split())) for _ in range(n)]
k=int(input())
sumT=0
sumD=0
for i in range(n):
    for j in range(n):
        if j>i: sumT+=a[i][j]
        elif i>j: sumD+=a[i][j]
if abs(sumT-sumD)<=k:
    print("YES")
else: print("NO")
print(abs(sumT-sumD))