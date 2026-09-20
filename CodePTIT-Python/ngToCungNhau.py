from math import gcd
n,k=map(int,input().split())
a=pow(10,k-1)
b=pow(10,k)
dem=0
for i in range(a,b,1):
    if gcd(int(i),n)==1:
        dem+=1
        print(i,end=" ")
    if dem==10:
        print()
        dem=0

    