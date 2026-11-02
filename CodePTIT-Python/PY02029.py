n,m=map(int,input().split())
a=list(map(int,input().split()))
d={}
for x in a:
    d[x]=d.get(x,0)+1
b=dict(sorted(d.items(),key=lambda x:(-x[1],x[0])))
f=False
value=max(d.values())
for x,y in b.items():
    if y<value:
        f=True
        print(x)
        break
if not f:
    print("NONE")