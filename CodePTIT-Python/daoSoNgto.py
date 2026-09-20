def gcd(a,b):
    while b!=0:
        r=a%b
        a=b
        b=r
    return a==1
t=int(input())
while t>0:
    t-=1
    n=int(input())
    k=n
    m=0
    while k>0:
        r=k%10
        k//=10
        m=m*10+r
    if gcd(n,m):
        print("YES")
    else: print("NO")
    