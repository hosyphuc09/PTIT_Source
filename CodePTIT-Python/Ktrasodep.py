t=int(input())
while t>0:
    t-=1
    s=input().strip()
    if len(set(s))!=2: 
        print("NO")
        continue
    ok=False
    for i in range(2,len(s)):
        if s[i]!=s[i-2]:
            ok=True
            break
    if ok:
        print("NO")
    else: print("YES")