t=int(input())
while t>0:
    t-=1
    s=input()
    f=False
    for c in s:
        if c!='4' and c!='7':
            f=True
            break
    if f:
        print("NO")
    else: print("YES")