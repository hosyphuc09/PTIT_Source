t=int(input())
while t>0:
    t-=1
    s=input()
    s1=s[len(s)-1]
    s2=s[len(s)-2]
    s3=s2+s1
    if s3=="86": print("YES")
    else: print("NO")