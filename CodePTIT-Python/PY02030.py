def ngto(n):
    if n<2: return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return False
    return True
n=int(input())
a=list(map(int,input().split()))
a=list(dict.fromkeys(a))
sum=sum(a)
f=False
sum1=0
for x in a:
    sum1+=x
    if ngto(sum1):
        if ngto(sum-sum1):
            print(a.index(x))
            f=True
            break
if not f:
    print("NOT FOUND")
