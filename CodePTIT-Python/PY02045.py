s=input()
while len(s)!=1:
    n=len(s)//2
    s1=s[:n]
    s2=s[n:]
    sum=int(s1)+int(s2)
    print(sum)
    s=str(sum)
