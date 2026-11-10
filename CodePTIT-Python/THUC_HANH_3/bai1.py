import sys
def is_palindrome(s):
    return len(s)>=2 and s== s[::-1]
def main():
    data=sys.stdin.read().split()
    if not data:
        return
    n,m=int(data[0]),int(data[1])
    matrix=[]
    idx=2
    max_val=-1
    for i in range(n):
        row=[]
        for j in range(m):
            val_str=data[idx]
            val=int(val_str)
            row.append(val)
            if is_palindrome(val_str) and val>max_val:
                max_val=val
            idx+=1
        matrix.append(row)
    if max_val==-1:
        print("NOT FOUND")
    else:
        print(max_val)
        for i in range(n):
            for j in range(m):
                if matrix[i][j]==max_val:
                    print(f"Vi tri [{i}][{j}]")
if __name__=='__main__':
    main()