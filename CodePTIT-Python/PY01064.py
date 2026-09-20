def Try(n,k):
    if n==1:
        return 'A'
    a=2**(n-1)
    if a==k:
        
        return chr(ord('A')+n-1)
    if k<a:
        return Try(n-1,k)
    
    return Try(n-1,k-a)
t=int(input())
while t>0:
    t-=1
    n,k=map(int,input().split())
    print(Try(n,k))