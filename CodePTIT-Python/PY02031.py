s=input()
if len(s)%2!=0:
    s=s[0:len(s)-1]
a=[]
for i in range(0,len(s),2):
    a.append(s[i:i+2])
a=list(dict.fromkeys(a))
print(*a)