def ngto(n):
    if n<2: return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:return False
    return True
n=int(input())
a=list(map(int,input().split()))
Max=0
for x in a:
    if not ngto(x):
        d=1
        while True:
            k=x-d
            if ngto(k):
                if d>Max:
                    Max=d
                break
            else:
                r=x+d
                if ngto(r):
                    if d>Max:
                        Max=d
                    break
            d+=1
print(Max)