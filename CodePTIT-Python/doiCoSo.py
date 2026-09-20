t=int(input())
chars="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
while t>0:
    t-=1
    s=""
    n,k=map(int,input().split())
    while n>0:
        r=n%k
        n//=k
        s+=chars[r]
    s2=s[::-1]
    print(s2)