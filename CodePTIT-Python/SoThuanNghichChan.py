def TN(n):
    for i in range(0,len(n)//2):
        if n[i]!=n[len(n)-1-i]: return False
    return True
def check(n):
    k=0
    while n>0:
        r=n%10
        n//=10
        k+=1
        if r%2==1: return False
    if k%2==1: return False
    return True
t=int(input())
while t>0:
    t-=1
    n=int(input())
    for i in range(22,n):
        if TN(str(i)) and check(i):
            print(i,end=" ")
    print()