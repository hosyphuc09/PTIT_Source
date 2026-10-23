n=int(input())
a=list(map(int,input().split()))
a.sort()
k=1
for x in a:
    if k==x:
        k+=1
    elif x>k:
        break
print(k)