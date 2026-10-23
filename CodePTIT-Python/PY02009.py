t=int(input())
while t>0:
    t-=1
    n=int(input())
    a=[]
    for i in range(n):
        k=int(input())
        a.append(k)
    d={}
    for i in a:
        if i in d:
           d[i]+=1
        else: d[i]=1
    valua=max(d.values())
    ans=min(x for x in d if d[x]==valua)
    print(ans)