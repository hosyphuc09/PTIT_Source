def ngto(n):
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True
t=int(input())
while t>0:
    t-=1
    s=input()
    k=0
    s1=""
    s=s[::-1]
    for i in range(0,4):
        s1=s1+s[i]
    s1=s1[::-1]
    for c in s1:
        k=k*10+int(c)
    if ngto(k): 
        print("YES")
    else:print("NO")