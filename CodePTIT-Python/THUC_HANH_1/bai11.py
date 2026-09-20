import sys
def check_tang_giam(s):
    if len(s)<3:
        return "NO"
    n=len(s)
    i=0
    while i<n-1 and s[i]<s[i+1]:
        i+=1
    if i==0 or i==n-1:
        return "NO"
    while i<n-1 and s[i]>s[i+1]:
        i+=1
    if i==n-1:
        return "YES"
    else:
        return "NO"
def main():
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    t= int(input_data[0])
    for k in range(1,t+1):
        print(check_tang_giam(input_data[k]))
if __name__=="__main__":
    main()