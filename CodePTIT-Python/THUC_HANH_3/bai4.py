def mul(a,b):
    c=[0]*(len(a)+len(b)-1)
    for i,x in enumerate(a):
        for j,y in enumerate(b):
            c[i+j]+=x*y
    return c
for _ in range(int(input())):
    n,m=map(int,input().split())
    s=input().strip()
    k=len(s)
    p=[int(s.startswith(s[i:])) for i in range(k)]+[0]
    q=mul(p,[1,-26])
    q[k]+=1
    total=pow(26,n,m)
    while n:
        r=[x if i%2 ==0 else -x for i,x in enumerate(q)]
        p=[x%m for x in ]