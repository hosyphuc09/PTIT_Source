n=int(input())
a=list(map(int,input().split()))
stack=[]
for x in a:
    if(len(stack)==0):
        stack.append(x)
    else:
        k=stack[-1]
        if (k+x)%2==0:
           stack.pop()
        else: stack.append(x)
print(len(stack))