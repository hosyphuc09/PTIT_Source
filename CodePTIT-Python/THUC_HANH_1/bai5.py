import sys
def solve():
    s=sys.stdin.read().strip()
    if s:
        print(oct(int(s,2))[2:])
if __name__=="__main__":
    solve()