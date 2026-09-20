def ngto(n):
    if n<2: return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return False
    return True
t=int(input())
while t>0:
    t-=1
    s=input()
    x=0
    y=0
    k=len(s)
    for i in range(len(s)):
        if ngto(int(s[i])): x+=1
        else: y+=1
    if ngto(k) and x>y:
        print("YES")
    else: print("NO")