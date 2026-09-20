def hanoi(n,source,second,third):
    if n==1:
        print(source, " -> " ,third)
        return
    hanoi(n-1,source,third,second)
    print(source, " -> ",third)
    hanoi(n-1,second,source,third)
n=int(input())
hanoi(n,'A','B','C')