import bisect
LIMIT =10**7
primes=[2,3,5,7,11,13,17,19,23]
hc=[]
max_div=0
def dfs(pos,max_exp,value,div_count):
    global max_div
    if div_count>max_div:
        max_div=div_count
        hc.append(value)
    if pos==len(primes):
        return
    p=primes[pos]
    x=value
    for e in range(1,max_exp+1):
        x*=p
        if x>LIMIT:
            break
        dfs(pos+1,e,x,div_count*(e+1))
dfs(0,30,1,1)
hc.sort()
t=int(input())
for _ in range(t):
    x=int(input())
    pos=bisect.bisect_left(hc,x)
    print(hc[pos])