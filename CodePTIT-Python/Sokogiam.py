t=int(input())
while t>0:
    t-=1
    s=input()
    f=False
    for i in range(len(s)-1):
        if s[i]>s[i+1]:
            f=True
            break
    if f:
        print("NO")
    else: print("YES")