def palindrom_base(n,base):
    a=[]
    while n>0:
        a.append(n%base)
        n//=base
    return a==a[::-1]
a,b,m=map(int,input().split())
dem=0
for n in range(a,b+1):
    if not palindrom_base(n,2):
        continue
    max_base=min(m,n-1)
    ok=True
    for base in range(3,max_base+1):
        if not palindrom_base(n,base):
            ok=False
            break
    if ok:
        dem+=1
print(dem)