def check(n):
    for i in range(0,int(len(n)//2+1)):
        if n[i]!=n[len(n)-i-1]: return False
    return True
t=int(input())
while t>0:
    t-=1
    s=input()
    sum=0
    for c in s:
        sum+=int(c)
    if sum>9 and check(str(sum)): print("YES")
    else: print("NO")