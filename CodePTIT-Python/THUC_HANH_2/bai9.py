import sys
def solve():
  input_data = sys.stdin.read().split()
  if not input_data:
    return

  N = int(input_data[0])
  Q = int(input_data[1])
  diff = [0] * (N + 2)

  idx = 2
  for _ in range(Q):
    x = int(input_data[idx])
    y = int(input_data[idx + 1])
    idx += 2
    diff[x] += 1
    diff[y + 1] -= 1
  ans = []
  current_flips = 0
  for i in range(1, N + 1):
    current_flips += diff[i]
    ans.append(str(current_flips % 2))

  # In kết quả cách nhau bởi khoảng trắng
  print(" ".join(ans))


if __name__ == "__main__":
  solve()