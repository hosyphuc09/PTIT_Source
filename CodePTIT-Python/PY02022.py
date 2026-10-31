def ngto(n):
    if n<2: return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return False
    return True
n=int(input())
a=list(map(int,input().split()))
d={}
for x in a:
    if ngto(x):
        d[x]=d.get(x,0)+1
for x,y in d.items():
    print(x,y)