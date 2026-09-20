t=int(input())
while t>0:
    t-=1
    s=input()
    if len(s)<3: 
        print("NO")
        continue
    ok=False
    k=0
    for i in range(0,len(s)-1):
        if s[i]<s[i+1]:
            k+=1
        else:
            ok=True
            break
    if k==0:
        print("NO")
        continue
    f=False
    for i in range(k,len(s)-1):
        if s[i]<s[i+1]:
            f=True
            break
    if f: print("NO")
    else: print("YES")