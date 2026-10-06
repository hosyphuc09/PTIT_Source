t=int(input())
while t>0:
    t-=1
    s=input()
    a=s.split(".")
    f=False
    if len(a)!=4:
        print("NO")
        continue
    for i in range (len(a)):
       if not a[i].isdigit():
           f=True
           break
       if int(a[i])>255 or int(a[i])<0:
           f=True
           break
    if f:
        print("NO")
    else:
        print("YES")