s=input()
k=int(input())
if len(s)%2!=0:
    s=s[0:len(s)-1]
a=[]
for i in range(0,len(s),2):
    a.append(s[i:i+2])
d={}
for x in a:
    d[x]=d.get(x,0)+1
f=False
for x,y in sorted(d.items(),key=lambda x:x[0]):
    if y>=k:
        f=True
        print(x,y)
if not f:
    print("NOT FOUND")