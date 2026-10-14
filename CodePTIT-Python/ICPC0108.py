import sys
def solve():
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    t=int(input_data[0])
    idx=1
    while t>0 and idx<len(input_data):
        t-=1
        n=int(input_data[idx])
        a=[]
        for i in range(n):
            a.append(int(input_data[idx+1+i]))
        idx+=n+1
        
        a.sort()
        dem=0
        for i in range(n-2):
            left=i+1
            right=n-1
            while left<right:
                sum=a[i]+a[left]+a[right]
                if sum==0:
                    dem+=1
                    left+=1
                    right-=1
                elif sum<0:
                    left+=1
                else: right-=1
        print(dem)
if __name__=='__main__':
    solve()