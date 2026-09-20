t=int(input())
while t>0:
    t-=1
    a,b,c=map(float,input().split())
    sum=0.0
    k=0
    while True:
        sum=a*b/100+a
        k+=1
        if sum>=c: break
        a=sum
    print(k)