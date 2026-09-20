def check(s,k,a,b,c):
    
    if len(s)==k:
        if a>0 and b>0 and c>0 and a<=b<=c:
            print(''.join(s))
        return
    s.append('A')
    check(s,k,a+1,b,c)
    s.pop()
    s.append('B')
    check(s,k,a,b+1,c)
    s.pop()
    s.append('C')
    check(s,k,a,b,c+1)
    s.pop()
n=int(input())
for k in range(3,n+1):
    check([],k,0,0,0)