while True:
    n=int(input())
    a=[]
    if n==0:
        break
    while True:
        if n==1:
            a.append(n)
            break
        if n%2==0:
            a.append(n/2)
            n=n/2
        else:
            a.append(n*3+1)
            n=n*3+1
    print(len(a))