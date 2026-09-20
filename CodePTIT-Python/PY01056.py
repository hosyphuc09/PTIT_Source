def ngto(n):
    if n<2: return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return False
    return True
def check(s):
    for i in range(len(s)):
        if i%2==0:
            if int(int(s[i])%2!=0): return False
        else:
            if int(int(s[i]))%2!=1: return False
    return True
t =int(input())
while t>0:
    t-=1
    s=input()
    sum=0;
    for c in s:
        sum+=int(c)
    if ngto(sum) and check(s):
        print("YES")
    else: print("NO")