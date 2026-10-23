n=int(input())
a=list(map(int,input().split()))
b=a.copy()
if n%2==1:
    k=n//2
else:
    k=n//2-1
a.sort()
sum=0
for x in a:
    sum+=abs(x-a[k])
if n%2==1:
    print(sum,a[k])
else: 
    ptu=-1
    for x in b:
        if x==a[k]:
            ptu=a[k]
            break
        elif x==a[k+1]:
            ptu=a[k+1]
            break
    print(sum,ptu)