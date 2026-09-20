def check(s):
    if s[0]==s[1]: return False
    c=s[0]
    if c!=s[len(s)-1]: return False
    for i in range(2,len(s),2):
        if c!=s[i]: return False
    return True
t=int(input())
while t>0:
    t-=1
    s=input()
    dem=len(s)
    if dem%2==1 and check(s):
        print("YES")
    else: print("NO")