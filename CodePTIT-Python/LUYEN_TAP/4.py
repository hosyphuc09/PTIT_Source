import sys

def sinh(n):
    res = []

    def backtrack(con_lai, max_val, cur):
        if con_lai == 0:
            res.append(cur[:])
            return

        for x in range(min(con_lai, max_val), 0, -1):
            cur.append(x)
            backtrack(con_lai - x, x, cur)
            cur.pop()

    backtrack(n, n, [])
    return res


input = sys.stdin.readline

t = int(input())

for _ in range(t):
    n = int(input())
    res = sinh(n)

    print(len(res))
    print(" ".join("(" + " ".join(map(str, p)) + ")" for p in res))