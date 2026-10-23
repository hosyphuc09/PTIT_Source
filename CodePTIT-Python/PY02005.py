n=int(input())
a=list(map(int,input().split()))
dem=0
for i in range(len(a)-1):
    for j in range(len(a)):
        if i<j:
            if a[i]>a[j]:
                dem+=1
print(dem)