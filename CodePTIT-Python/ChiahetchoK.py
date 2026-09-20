a,k,n=map(int,input().split())
m=n-a
if m<=0: print("-1")
else:
    start=(-a)%k
    if start==0: start=k
    if start >m: print("-1")
    else:
        for i in range(start,m+1,k):
            print(i,end=" ")