t=int(input())
while(t>0):
    t-=1
    n,m,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=list(map(int,input().split()))
    l=r=j=0
    d=[]
    while(l<n and r<m and j<k):
        if a[l]==b[r]==c[j]:
            d.append(a[l])
            l+=1
            r+=1
            j+=1
        elif a[l]<=b[r] and a[l]<=c[j]:
            l+=1
        elif b[r]<=a[l] and b[r]<=c[j]:
            r+=1
        else:
            j+=1
    if d:
        print(*d)
    else: print("NO")