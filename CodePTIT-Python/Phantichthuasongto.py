t=int(input())
while t>0:
    t-=1
    n=int(input())
    print("1",end="")
    for i in range(2,int(n**0.5),1):
        if n%i==0:
            k=0
            while n%i==0:
                k+=1
                n//=i
            print(f" * {i}^{k}",end="")
    if n>1: print(f" * {n}^1",end="")
    print()