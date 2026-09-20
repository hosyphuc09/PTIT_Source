def so_nhom(a,k):
    a.sort()
    dem=1
    for i in range(1,len(a)):
        if a[i]-a[i-1]>k:
            dem+=1
    return dem
n,k=map(int,input().split())
a=list(map(int,input().split()))
print(so_nhom(a,k))