t=int(input())
while t>0:
    t-=1
    n=int(input())
    sum=n
    dem=0
    while True:
        dem+=1
        if dem==1000 or (sum>0 and sum % 7==0):
            break
        temp=str(n)
        temp=int(temp[::-1])
        sum=n+temp
        n=sum
    print(sum)