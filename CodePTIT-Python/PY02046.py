def ngto(n):
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0: return False
    return True
n=int(input())
a=list(map(int,input().split()))
a=list(dict.fromkeys(a))
sum=sum(a)
sum1=0
f=False
for i in range(len(a)):
    sum1+=a[i]
    if ngto(sum1) and ngto(sum-sum1):
        print(i)
        f=True
        break
if not f:
    print("NOT FOUND")