def ngto(n):
    if n<2: return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return False
    return True
t=int(input())
while t>0:
    t-=1
    s=input()
    s1=s[:3]
    s2=s[-3:]
    if ngto(int(s1)) and ngto(int(s2)):
        print("YES")
    else: print("NO")