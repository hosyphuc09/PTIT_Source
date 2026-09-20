n=int(input())
s=""
k=0
while n>0:
    k+=1
    r=n%10
    n//=10
    s+=str(r)
    if k%3==0 and n>0:
        s+=","
s1=s[::-1]
print(s1)