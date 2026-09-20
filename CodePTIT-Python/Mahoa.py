P="ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while True:
    line=input().split()
    if line[0]=="0": break
    k=int(line[0])
    s=line[1]
   
    s1=""
    for c in s:
        index=P.find(c)
        s1+=P[(index+k)%28]
    s2=s1[::-1]
    print(s2)