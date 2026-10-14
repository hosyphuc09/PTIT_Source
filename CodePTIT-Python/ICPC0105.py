t=int(input())
while t>0:
    t-=1
    n=""
    number=[]
    s=input()
    for x in s:
        if(x.isdigit()):
            n+=x
        else:
            if(n!=""):
                number.append(int(n))
                n=""
    if n!="":
        number.append(int(n))
    print(max(number))