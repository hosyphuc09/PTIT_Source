def giaiThua(n):
    g=1
    for i in range(1,n+1):
        g*=i
    return g
t=int(input())
while(t>0):
    t-=1
    n=int(input())
    s=str(n)
    sum=0
    for i in range(len(s)):
        sum+=giaiThua(int(s[i]))
    if(sum==n): print("Yes")
    else: print("No")