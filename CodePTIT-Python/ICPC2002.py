def sinh():
    a=1
    b=1
    list=[1,1]
    while len(list)<93:
        temp=a+b
        a=b
        b=temp
        list.append(b)
    return list
t=int(input())
while t>0:
    t-=1
    a,b=map(int,input().split())
    list=sinh()
    for i in range(a-1,b):
        print(list[i],end=" ")
    print()