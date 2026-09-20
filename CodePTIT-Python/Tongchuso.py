s=input()
k=0

while len(s.replace('-',''))>1:
    sum=0
    for c in s:
        if c!='-':
            sum+=int(c)
    s=str(sum)
    k+=1
print(k)
