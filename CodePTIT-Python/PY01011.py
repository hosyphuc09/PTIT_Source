def sinh_so():
    ds=[]
    for length in [2,4,6]:
        haft=length//2
        def backtrack(s):
            if len(s)==haft:
                x=s+s[::-1]
                ds.append(int(x))
                return
            for c in "02468":
                if len(s)==0 and c=='0':
                    continue
                backtrack(s+c)
        backtrack("")
    ds.sort()
    return ds
def main():
    t=int(input())
    while t>0:
        t-=1
        n=int(input())
        results=[]
        ds=sinh_so()
        for x in ds:
            if x>=n: break
            results.append(str(x))
        print(" ".join(results))
main()