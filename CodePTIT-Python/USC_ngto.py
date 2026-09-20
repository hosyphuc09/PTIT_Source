def gcd(a,b):
    while b!=0:
        temp=a%b
        a=b
        b=temp
    return a
def ngto(n):
    if n<2: return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return False
    return True
t=int(input())
while t>0:
    t-=1
    n,m=map(int,input().split())
    k=gcd(n,m)
    sum=0
    while k>0:
        r=k%10
        k//=10
        sum+=r
    if ngto(sum): print("YES")
    else: print("NO")