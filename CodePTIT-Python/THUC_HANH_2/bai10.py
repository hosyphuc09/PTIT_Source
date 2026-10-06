import sys
input = sys.stdin.readline
def check(c, k, x):
    avail = c[0]
    total_rows = 0
    n = len(c)

    for i in range(n):
        if i < n - 1:
            rows = (avail + c[i + 1]) // x
            rows = min(rows, k - total_rows)
        else:
            rows = min(avail // x, k - total_rows)

        total_rows += rows

        if total_rows >= k:
            return True
        use_current = min(avail, rows * x)

        need_next = rows * x - use_current

        if i < n - 1:
            avail = c[i + 1] - need_next

            if avail < 0:
                return False

    return False


def solve():
    t = int(input())

    for _ in range(t):
        n, k = map(int, input().split())
        c = list(map(int, input().split()))

        total = sum(c)

        # x = số người trong mỗi hàng
        left = 1
        right = total // k
        ans = 0

        while left <= right:
            mid = (left + right) // 2

            if check(c, k, mid):
                ans = mid
                left = mid + 1
            else:
                right = mid - 1

        print(ans * k)


solve()