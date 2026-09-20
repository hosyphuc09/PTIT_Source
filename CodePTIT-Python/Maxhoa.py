t=int(input())
while t>0:
    t-=1
    s=input()
    ans=""
    i=0
    while i<len(s):
        j=i
        while j<len(s) and s[j]==s[i]:
            j+=1
        ans+=str(j-i)+s[i]
        i=j
    print(ans)