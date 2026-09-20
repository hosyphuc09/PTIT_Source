import sys
def solve():
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    T=int(input_data[0])
    results=[]
    for i in range(1,T+1):
        N=int(input_data[i])
        found=False
        if N%7==0:
            results.append(str(N))
            found=True
        else:
            for _ in range(1000):
                rev_N=int(str(N)[::-1])
                N+=rev_N
                if N%7==0:
                    results.append(str(N))
                    found=True
                    break
        if not found:
            results.append("-1")
    print("\n".join(results))
if __name__=="__main__":
    solve()
