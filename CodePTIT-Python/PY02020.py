n=int(input())
a=sorted(list(map(float,input().split())))
Max=a[n-1]
Min=a[0]
while Max in a:
    a.remove(Max)
while Min in a:
    a.remove(Min)
sum=0
for i in range(len(a)):
    sum+=a[i]
tb=sum/len(a)
print(f"{tb:.2f}")