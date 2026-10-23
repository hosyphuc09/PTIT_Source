t=int(input())
while t>0:
    t-=1
    n=int(input())
    a=list(map(int,input().split()))
    d={}
    for x in a:
        d[x]=d.get(x,0)+1
    for x,y in d.items():
        if y%2==1:
            print(x)
            break