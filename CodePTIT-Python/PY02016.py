t=int(input())
while t>0:
    t-=1
    n=int(input())
    a=list(map(int,input().split()))
    d={}
    Min=-1
    for x in a:
        if x>Min:
            Min=x
        d[x]=d.get(x,0)+1
    Max=max(d.values())
    if Max>n/2:
        for x,y in d.items():
            if y==Max and x<Min:
                Min=x
        print(Min)
    else: print("NO")