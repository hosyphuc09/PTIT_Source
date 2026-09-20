def Try(s,k,a,b,c,d):
    if len(s)==k:
        if a>0 and b>0 and c>0 and d>0:
            if s[len(s)-1]!='2':
                print(''.join(s))
        return
    s.append('2')
    Try(s,k,a+1,b,c,d)
    s.pop()
    s.append('3')
    Try(s,k,a,b+1,c,d)
    s.pop()
    s.append('5')
    Try(s,k,a,b,c+1,d)
    s.pop()
    s.append('7')
    Try(s,k,a,b,c,d+1)
    s.pop()
n=int(input())
for k in range(4,n+1):

    Try([],k,0,0,0,0)