n=int(input())
a=[]
while len(a)<n:
    a.extend(map(int,input().split()))
b=[]
c=[]
for i in range(n):
    if a[i]%2==1:
        b.append(a[i])
    else:
        c.append(a[i])
c.sort()
b.sort(reverse=True)
rb,rc=0,0
for i in range(n):
    if a[i]%2==1:
        print(b[rb],end=" ")
        rb+=1
    else:
        print(c[rc],end=" ")
        rc+=1
print()