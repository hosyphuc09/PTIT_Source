def tich(n):
    tich=1
    while n>0:
        temp=n%10
        tich*=temp
        n//=10
    return tich
t=int(input())
while t>0:
    t-=1
    n=int(input())
    a=list(map(int,input().split()))
    a.sort(key=lambda x:(tich(x),x))
    print(*a)