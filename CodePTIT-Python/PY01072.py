n,k=map(int,input().split())
a=list(map(int,input().split()))
a=sorted(set(a))
res=[]
def Try(m):
    if len(res)==k:
        print(*res)
    for i in range(m,len(a)):
        res.append(a[i])
        Try(i+1)
        res.pop()
Try(0)