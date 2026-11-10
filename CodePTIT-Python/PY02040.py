n=int(input())
a=[list(map(int,input().split())) for _ in range(n)]
k=int(input())
sumT=0
sumD=0
t=n-1
for i in range(n):
    for j in range(n):
        if j<t:sumT+=a[i][j]
        if j>t: sumD+=a[i][j]
    t-=1
if abs(sumT-sumD)<=k:
    print("YES")
else: print("NO")
print(abs(sumT-sumD))