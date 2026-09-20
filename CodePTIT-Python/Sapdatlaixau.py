t=int(input())
k=0
while t>0:
    k+=1
   
    t-=1
    s1=input()
    s2=input()
    print(f"Test {k}: ",end="")
    if len(s1)!=len(s2):
        print("NO")
        continue
    f=False
    for c in s1:
        if s1.count(c)!=s2.count(c):
            f=True
            break
    if f: print("NO")
    else: print("YES")