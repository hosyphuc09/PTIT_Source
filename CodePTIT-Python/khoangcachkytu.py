t=int(input())
while t>0:
    t-=1
    s1=input()
    s2=s1[::-1]
    f=False
    for i in range(1,len(s1)):
        if abs(ord(s1[i])-ord(s1[i-1]))!=abs(ord(s1[-i])-ord(s1[-i-1])):
            f=True 
            break
    if f:
        print("NO")
    else: print("YES")