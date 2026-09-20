t=int(input())
while t>0:
    t-=1
    s=input()
    sum=0
    tich=1
    sokhac=False
    for i in range(len(s)):
        if i%2==1:
            sum+=int(s[i])
        else:
            if int(s[i])!=0:
                tich*=int(s[i])
                sokhac=True
    if not sokhac:
        tich=0
    print(tich, sum)