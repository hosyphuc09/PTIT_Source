t=int(input())
while t>0:
    t-=1
    n=int(input())
    s=input().strip()
    if n==2:
        print(s)
        continue
    digits="0123456789ABCDEF"
    k={4:2,8:3,16:4}[n]
    while len(s)%k!=0:
        s="0"+s
    res=""
    for i in range(0,len(s),k):
        so=s[i:i+k]
        group=int(so,2)
        res+=digits[group]
    print(res)