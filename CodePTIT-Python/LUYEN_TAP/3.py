n=int(input())
a=list(map(int,input().split()))
m=max(a)
cnt,res=0,0
for i in a:
    if i==m:
        cnt+=1
    else:
        res=max(res,cnt)
        cnt=0
print(max(res,cnt))