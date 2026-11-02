s=input()
if len(s)%2!=0:
    s=s[0:len(s)-1]
a=[]
for i in range(0,len(s),2):
    a.append(s[i:i+2])
d={}
for x in a:
    d[x]=d.get(x,0)+1
for x,y in d.items():
    print(x,y)