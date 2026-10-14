import sys
def solve():
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    t=int(input_data[0])
    idx=1
    while t>0:
        t-=1
        s1=input_data[idx]
        s2=input_data[idx+1]
        d=min(s1,s2)
        D=max(s1,s2)
        n=input_data[idx+2]
        m=input_data[idx+3]
        idx+=4
        sumMin=int(n.replace(D,d))+int(m.replace(D,d))
        sumMax=int(n.replace(d,D))+int(m.replace(d,D))
        print(f"{sumMin} {sumMax}")
if __name__=="__main__":
    solve()