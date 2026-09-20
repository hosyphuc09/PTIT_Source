def check(a,b):
    while b!=0:
        temp=a%b
        a=b
        b=temp
    return a==1
def ngto(n):
    if n<2: return False
    for i in range(2,int(n ** 0.5)+1):
        if n%i==0:
            return False
    return True

t=int(input())
while t>0:
    t-=1
    k=0
    n=int(input())
    for i in range(1,n):
        if check(i,n):
            k+=1
    if ngto(k):
        print("YES")
    else: print("NO")