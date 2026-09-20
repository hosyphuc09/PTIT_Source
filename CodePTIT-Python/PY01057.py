def ngto(n):
    if n<2: return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return False
    return True
def check(s):
    for i in range(len(s)):
        if ngto(i):
            if int(s[i])!=2 and int(s[i])!=3 and int(s[i])!=5 and int(s[i])!=7: return False
        else:
            if int(s[i])==2 or int(s[i])==3 or int(s[i])==5 or int(s[i])==7: return False
    return True
t=int(input())
while t>0:
    t-=1
    s=input()
    if check(s): print("YES")
    else: print("NO")