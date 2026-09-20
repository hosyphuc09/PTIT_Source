t=int(input())
while t>0:
    t-=1
    s=input()
    sum=1
    for c in s:
        if int(c)!=0:
            sum*=int(c)
    print(sum)