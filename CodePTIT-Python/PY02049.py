t=int(input())
while t>0:
    t-=1
    n,m=map(int,input().split())
    x=0
    while n!=0:
        x+=n//m
        n//=m
    print(x)