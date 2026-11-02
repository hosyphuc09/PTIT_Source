def ngto(n):
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True
n=int(input())
a=list(map(int,input().split()))
b=[]
for x in a:
    if ngto(x):
        b.append(x)
b.sort()
d=0
for x in a:
    if not ngto(x):
        print(x,end=" ")
    else:
        print(b[d],end=" ")
        d+=1