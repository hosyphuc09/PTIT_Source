import sys

data = sys.stdin.read().split()

N, M, K = map(int, data[:3])
team = ''.join(data[3:])
A = 0
for i in range(N):
    if team[i] == '0':
        A |= (1 << i)

MASK = (1 << N) - 1
B = MASK ^ A
def rotate_next(x):
    return (x >> 1) | ((x & 1) << (N - 1))
left = []
right = []
def push(x):
    if right:
        right.append((
            x,
            right[-1][1] | x,
            right[-1][2] & x
        ))
    else:
        right.append((x, x, x))


def transfer():
    while right:
        x = right.pop()[0]

        if left:
            left.append((
                x,
                left[-1][1] | x,
                left[-1][2] & x
            ))
        else:
            left.append((x, x, x))


def pop():
    if not left:
        transfer()
    left.pop()


def get_or_and():
    if left and right:
        return (
            left[-1][1] | right[-1][1],
            left[-1][2] & right[-1][2]
        )

    if left:
        return left[-1][1], left[-1][2]

    return right[-1][1], right[-1][2]
cur = B
for c in range(M - 2, -1, -1):
    push(rotate_next(cur))

    # Chỉ giữ tối đa K trạng thái
    if len(left) + len(right) > K:
        pop()

    OR, AND = get_or_and()
    win_A = OR & A
    win_B = AND & B

    cur = win_A | win_B
ans = []

for i in range(N):
    if (cur >> i) & 1:
        ans.append('0')
    else:
        ans.append('1')

print(' '.join(ans))