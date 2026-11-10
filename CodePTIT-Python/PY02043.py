t=int(input())
while t>0:
    t-=1
    s=input()
    n=input()
    dem=0
    i=0
    while i<(len(s)-len(n))+1:
        s1=s[i:i+len(n)]
        if s1==n:
            dem+=1
            i+=len(n)
        else: i+=1
    print(dem)