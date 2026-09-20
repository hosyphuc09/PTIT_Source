def check(n):
    k=n%10
    n//=10
    sum=k
    while n>0:
        temp=n%10
        n//=10
        sum+=temp
        if abs(k-temp)!=2: return False
        k=temp
    if sum%10!=0: return False
    return True

t=int(input())
while t>0:
    t-=1
    n=int(input())
    if check(n): print("YES")
    else: print("NO")
