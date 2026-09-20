t=int(input())
while t>0:
    t-=1
    n=int(input())
    sum=0
    if n%2==1:
        for i in range(1,n+1,2):
            sum+=1/i
    elif n%2==0:
        for i in range(2,n+1,2):
            sum+=1/i
    print(f"{sum:.6f}")