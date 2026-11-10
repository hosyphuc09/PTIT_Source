n,k=map(int,input().split())
a=list(map(int,input().split()))
dem=0
a.sort()
if n>0:
    dem=1
for i in range(1,n):
    if a[i]-a[i-1]>k:
        dem+=1
print(dem)