while True:
    a=list(map(int,input().split()))
    if a[0]==a[1]==a[2]==a[3]==0:
        break
    dem=0
    while not (a[0]==a[1]==a[2]==a[3]):
        dem+=1
        k=a[0]
        for i in range(len(a)-1):
            a[i]=abs(a[i]-a[i+1])
        a[3]=abs(a[3]-k)
    print(dem)