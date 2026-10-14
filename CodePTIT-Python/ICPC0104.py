t=int(input())
while t>0:
    t-=1
    s=input()
    m=""
    number=[]
    for x in s:
        if x.isdigit():
            m+=x
        else:
            if(m!=""):
                number.append(int(m))
                m=""
    print(min(number))