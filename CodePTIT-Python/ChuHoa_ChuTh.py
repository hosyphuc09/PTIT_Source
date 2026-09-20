s=input()
n=0
m=0
for c in s:
    if c.isupper(): n+=1
    elif c.islower(): m+=1
if n>m:
    print(s.upper())
else:
    print(s.lower())