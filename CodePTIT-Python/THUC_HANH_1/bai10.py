def rotate(s):
    total=0
    for c in s:
        total+=ord(c)-ord('A')
    k=total%26
    res=""
    for c in s:
        x=(ord(c)-ord('A')+k)%26
        res+=chr(x+ord('A'))
    return res
t=int(input())
for _ in range(t):
    s=input().strip()
    n=len(s)
    mid=n//2
    a=s[:mid]
    b=s[mid:]
    a=rotate(a)
    b=rotate(b)
    ans=""
    for i in range(mid):
        x=ord(a[i])-ord('A')
        y=ord(b[i])-ord('A')
        z=(x+y)%26
        ans+=chr(z+ord('A'))
    print(ans)