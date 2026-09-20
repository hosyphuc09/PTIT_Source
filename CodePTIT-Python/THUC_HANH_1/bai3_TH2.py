def tinh(a):
    n=len(a)
    kq=[0]*n
    stack=[]
    for i in range(n):
        while stack and a[stack[-1]]<=a[i]:
            stack.pop()
        if not stack:
            kq[i]=i+1
        else:
            kq[i]=i-stack[-1]
        stack.append(i)
    return kq
t=int(input())
for _ in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    kq=tinh(a)
    print(*kq)