n=int(input())
sum=0
for i in range(n):
    x=int(input())
    for j in range(2,int(x//2)):
        while x%j==0:
            sum+=j
            x//=j
    if x>1: sum+=x
print(sum)