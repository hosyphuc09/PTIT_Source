t=int(input())
while t>0:
    t-=1
    s=input()
    s2=""
    for i in range(0,len(s)-1,2):
        x=int(s[i+1])
        s2+=s[i]*x
    print(s2)