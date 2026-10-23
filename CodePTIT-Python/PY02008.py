def ngto(n):
    if n<2:
        return False
    for i in range(2,int(n*0.5)+1):
        if n%i==0: return False
    return True
def sinh():
    a=[]
    i=2
    while len(a)<1001:
        if ngto(i): a.append(i)
        i+=1
    return a
n,m=map(int,input().split())
a=sinh()
print(m,end=" ")
k=0
for i in range(n):
    k=m+a[i]
    print(k,end=" ")
    m=k