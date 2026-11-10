import sys
from math import isqrt
def ngto(x):
    return x>=2 and all(x%d!=0 for d in range(2,isqrt(x)+1))
_,m,*a=map(int,sys.stdin.buffer.read().split())
p=max((x for x in a if ngto(x)),default=0)
if p:
    print(p)
    for k,x in enumerate(a):
        if x==p:
            i,j=divmod(k,m)
            print(f" Vi tri [{i}][{j}]")
else:
    print("NOT FOUND")