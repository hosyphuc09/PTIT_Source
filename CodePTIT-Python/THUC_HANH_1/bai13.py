import sys
def generate_valid_numbers():
    results=[]
    even_digits=['0','2','4','6','8']
    for d1 in ['2','4','6','8']:
        num =int(d1+d1)
        results.append(num)
    for d1 in  ['2','4','6','8']:
        for d2 in even_digits:
            half =d1+d2
            num=int(half+half[::-1])
            results.append(num)
    for d1 in  ['2','4','6','8']:
        for d2 in even_digits:
            for d3 in even_digits:
                half=d1+d2+d3
                num =int(half+half[::-1])
                results.append(num)
    results.sort()
    return results
def main():
    valid_numbers=generate_valid_numbers()
    input_data=sys.stdin.read().split()
    if not input_data:
        return
    t=int(input_data[0])
    for i in range(1,t+1):
        n=int(input_data[i])
        res=[str(x) for x in valid_numbers if x<n]
        print(" ".join(res))
if __name__=='__main__':
    main()