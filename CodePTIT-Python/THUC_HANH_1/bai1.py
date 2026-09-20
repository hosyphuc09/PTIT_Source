t=int(input())
while t>0:
    t-=1
    n,b=map(int,input().split())
    if n==0:
        print(0)
        continue
    digits="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    res=""
    while n>0:
        res+=digits[n%b]
        n//=b
    print(res[::-1])
