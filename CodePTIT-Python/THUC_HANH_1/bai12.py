import sys
def check_base_3(s):
    valid_chars={'0','1','2'}
    for char in s:
        if char not in valid_chars:
            return "NO"
    return "YES"
def main():
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    t=int(input_data[0])
    for i in range(1,t+1):
        print(check_base_3(input_data[i]))
if __name__=='__main__':
    main()