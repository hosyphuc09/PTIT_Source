def check(s):
    sum=0
    for i in range(len(s)):
        if s[i]=='1':
            sum+=2**(len(s)-i-1)
    return str(sum)
s=input()
if len(s)%3==1:
    s="00"+s
elif len(s)%3==2:
    s="0"+s
s1=""
for i in range(0,len(s),3):
    s1+=check(s[i:i+3])
print(s1)