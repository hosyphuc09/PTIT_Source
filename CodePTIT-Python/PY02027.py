t=int(input())
c=[]
while t>0:
    t-=1
    a=input()
    s=""
    f=False
    for i in range(len(a)):
        if a[i].isdigit():
            s+=a[i]
            f=True
        if not a[i].isdigit():
            if f==True:
                c.append(int(s))
                f=False
                s=""
    if s:
        c.append(int(s)) 
c.sort()
for x in c:
    print(x)