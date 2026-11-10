A=input()
B=input()
if len(A)<len(B):
    A,B=B,A
while len(B)<len(A):
    B="0"+B
A=A[::-1]
B=B[::-1]
s=""
f=False
for i in range(len(A)):
    sum=int(A[i])+int(B[i])
    if f==True:
        sum+=1
    s+=str(sum%10)
    if(sum>=10): f=True
    else: f=False
if f==True:
    s+="1"
s=s[::-1]
print(s.lstrip("0") or "0")