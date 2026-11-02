n,m=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
A=set(a)
B=set(b)
for x in sorted(A):
    if x in B:
        print(x,end=" ")
print()
for x in sorted(A):
    if x not in B:
        print(x,end=" ")
print()
for x in sorted(B):
    if x not in A:
        print(x,end=" ")
print()