x=int(input())
k=0
while x>0:
    r=x%10
    x//=10
    if r==4 or r==7:
        k+=1
if k==4 or k==7:
    print("YES")
else: print("NO")