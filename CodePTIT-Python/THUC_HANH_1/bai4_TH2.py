t=int(input())
for _ in range(t):
    n=int(input())
    a=[]
    b=[]
    for i in range(n):
        x,y=map(float,input().split())
        a.append(x)
        b.append(y)
    dp=[1]*n
    for i in range(n):
        for j in range(i):
            if a[j]<a[i]and b[j]>b[i]:
                dp[i]=max(dp[i],dp[j]+1)
    print(max(dp,default=0))