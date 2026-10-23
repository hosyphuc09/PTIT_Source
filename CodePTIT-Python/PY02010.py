def sosanh(n,m):
    for i in range(len(n)):
        if int(n[i])>int(m[i]): return n
        elif int(m[i])>int(n[i]): return m
while True:
    n=int(input())
    if n==0: break
    a=[]
    for i in range(n):
        s=input()
        s=s.lstrip('0')
        if s=='':
            s='0'
        a.append(s)
    Min=a[0]
    Max=a[0]
    for x in a:
        if len(x)<len(Min) or (len(x)==len(Min) and x<Min):
            Min=x
        elif len(x)>len(Max) or (len(x)==len(Max) and x>Max):
            Max=x
    if Max==Min:
        print("BANG NHAU")
    else:
        print(Min,Max)