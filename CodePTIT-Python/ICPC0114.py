def ngTo(n):
    if n<2: return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return False
    return True
def daoNgc(n):
    n=str(n)
    s=n[::-1]
    return ngTo(int(s))
def Tong(n):
    s=str(n)
    sum=0
    for i in range(len(s)):
        if ngTo(int(s[i]))==False:
            return False
        sum+=int(s[i])
    return ngTo(sum)
t=int(input())
while t>0:
    t-=1
    n=int(input())
    if(ngTo(n) and daoNgc(n) and Tong(n)):
        print("Yes")
    else: print("No")