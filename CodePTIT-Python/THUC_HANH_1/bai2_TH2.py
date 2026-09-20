def sinh(n):
    a=[0]*n
    used=[False]*(n+1)
    kq=[]
    def backtrack(pos):
        if pos ==n:
            kq.append(''.join(map(str,a)))
            return
        for i in range(n,0,-1):
            if not used[i]:
                a[pos]=i
                used[i]=True
                backtrack(pos+1)
                used[i]=False
    backtrack(0)
    print(len(kq))
    print(*kq)
t=int(input())
for _ in range(t):
    n=int(input())
    sinh(n)
