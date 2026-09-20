t=int(input())
while t>0:
    t-=1
    s=input()
    s1=s[::-1]
    f=False
    for i in range(1,len(s)):
        if abs(ord(s[i])-ord(s[i-1]))!=abs(ord(s1[i])-ord(s1[i-1])): f=True
    if not f:
        print("YES")
    else: print("NO")