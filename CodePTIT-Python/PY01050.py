def Try(s,k,a,b,c):
    if len(s)==k:
        if a>0 and b>0 and c>0 and a<=b<=c:
            print(''.join(s))
        return
    #them A
    s.append('A')
    Try(s,k,a+1,b,c)
    s.pop()
    #them B

    s.append('B')
    Try(s,k,a,b+1,c)
    s.pop()
    #them C
    s.append('C')
    Try(s,k,a,b,c+1)
    s.pop()
n=int(input())
for k in range(3,n+1):
    Try([],k,0,0,0)