t=int(input())
while t>0:
    t-=1
    s=input()
    s1=" "
    sum=0
    for c in s:
        if c>='0' and c<='9':
            sum+=int(c)
        if c>='A' and c<='Z':
            s1+=c
    s1=''.join(sorted(s1))
    s1=s1+str(sum)
    print(s1)