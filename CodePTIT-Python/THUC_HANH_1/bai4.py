import sys
def solve():
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    t =int(input_data[0])
    results=[]
    for k in range(1,t+1):
        s=list(input_data[k])
        n=len(s)
        i=n-2
        while i>=0 and s[i]<=s[i+1]:
            i-=1
        if i<0:
            results.append("-1")
            continue
        max_idx=-1
        for j in range(i+1,n):
            if s[j]<s[i]:
                if max_idx==-1 or s[j]>s[max_idx]:
                    max_idx=j
        s[i],s[max_idx]=s[max_idx],s[i]
        if s[0]=='0':
            results.append("-1")
        else:
            results.append("".join(s))
    print("\n".join(results))
if __name__=="__main__":
    solve()