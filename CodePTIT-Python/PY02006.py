t=int(input())
while(t>0):
    t-=1
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    a.sort()
    b.sort()
    f=False
    for i in range(n):
        if a[i]>b[i]: f=True
    if f:
        print("NO")
    else: print("YES")