t=int(input())
while t>0:
    t-=1
    s=input()
    ok=False
    for i in range(0,len(s)):
        if s[i]!='0' and s[i]!='2' and s[i]!='1':
            ok=True
            break
    if ok: 
        print("NO")
    else: print("YES")