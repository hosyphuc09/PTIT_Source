t=int(input())
while t>0:
    t-=1
    s=input()
    s1=input()
    k=len(s1)
    dem=0
    i=0
    while i<=len(s)-k:
        if s[i:i+k]==s1:
            dem+=1
            i+=k
        else: i+=1
    print(dem)