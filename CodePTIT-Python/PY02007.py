import sys
a=list(map(int,sys.stdin.read().split()))
dem=0
s=set()
for x in a:
    s.add(x%42)
print(len(s))
