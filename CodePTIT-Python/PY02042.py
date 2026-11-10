A=input().lstrip("0") or "0"
B=input().lstrip("0") or "0"
am=False
if len(A) <len(B) or(len(A)==len(B) and A<B):
    A,B=B,A
    am=True
while len(B)<len(A):
    B="0"+B
s=""
f=False
A=A[::-1]
B=B[::-1]
for i in range(len(A)):
    hieu=int(A[i])-int(B[i])
    if f==True:
        hieu-=1
    if hieu<0:
        s+=str(10+hieu)
        f=True
    else:
        s+=str(hieu)
        f=False
s=s[::-1].lstrip("0") or "0"
if am and s:
    print("-"+s)
else:
    print(s)