import sys
def is_beautiful(s):
    if len(set(s))!=2:
        return False
    for i in range(2,len(s)):
        if s[i]!=s[i-2]:
            return False
    return True
def solve():
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    t=int(input_data[0])
    results=[]
    for i in range(1,t+1):
        s=input_data[i]
        if is_beautiful(s):
            results.append("YES")
        else:
            results.append("NO")
    print("\n".join(results))
if __name__=="__main__":
    solve()