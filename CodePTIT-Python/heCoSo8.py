def check(ss):
    s1=int(ss[0])*(2**2)+int(ss[1])*(2**1)+int(ss[2])*(2**0)
    return s1
s=input()
if len(s)%3==1: s="00"+s
if len(s)%3==2: s="0"+s
s2=""
for i in range(0,len(s),3):
    s2+=str(check(s[i:i+3]))
print(s2)