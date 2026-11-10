def dem(x,y):
    ans=0
    for h in range(1,min(x,y)+1):
        p=x-h+1
        k=min(h-1,p-1)
        ngang=p+k*(2*p-k-1)+max(0,p-h)
        ans+=ngang*(y-h+1)
    return ans
for _ in range(int(input())):
    x,y=map(int,input().split())
    print(2*(dem(x,y)+dem(y,x)))