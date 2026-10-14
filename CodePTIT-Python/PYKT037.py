t=int(input())
digits="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
while t>0:
    t-=1
    n,m=map(int,input().split())
    s=""
    while n>0:
        x=n%m
        s=digits[x]+s
        n//=m
    print(s)