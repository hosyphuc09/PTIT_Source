t=int(input())
while t>0:
    t-=1
    s=input()
    i=0
    ss=""
    while True:
        c=s[i]
        k=0
        for j in range(i,len(s)):
            if s[j]==c: k+=1
            if s[j]!=c: i=j
        ss+=str(k)+s[i-1]
        if i==len(s): break
    print(ss)