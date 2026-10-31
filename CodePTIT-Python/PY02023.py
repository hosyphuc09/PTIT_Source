def tong(n):
    tong=0
    while(n>0):
        r=n%10
        tong+=r
        n//=10
    return tong
t=int(input())
while t>0:
    t-=1
    n=int(input())
    a=list(map(int,input().split()))
    a.sort(key=lambda x:(tong(x),x))
    print(*a)