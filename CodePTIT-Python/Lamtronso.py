t=int(input())
for _ in range(t):
    n=int(input())
    p=10
    while n>p:
        n=((n+p//2)//p)*p
        p*=10
    print(n)