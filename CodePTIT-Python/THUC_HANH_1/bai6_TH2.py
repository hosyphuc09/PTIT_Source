t=int(input())
for _ in range(t):
    x,y=map(int,input().split())
    ans=0
    m=min(x,y)
    for k in range(1,m+1):
        ans+=4*(x-k+1)*(y-k+1)
    for M in range(1,min(y,x-1)+1):
        K=min(M,x-M)
        s=2*(K*(x-M+1)-K*(K+1)//2)
        if K==M:
            s-=x-2*M+1
        ans+=2*(y-M+1)*s
    for M in range(1,min(x,y-1)+1):
        K=min((M,y-M))
        s=2*(K*(y-M+1)-K*(K+1)//2)
        if K==M:
            s-=y-2*M+1
        ans+=2*(x-M+1)*s
    print(ans)        