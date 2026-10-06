MOD = 1000000007

n = int(input())
s = input().strip()

MAXM = 20

# edges[i] chứa các đoạn bắt đầu tại i
# (vị trí kết thúc + 1, giá trị đoạn nhị phân)
edges = [[] for _ in range(n + 1)]

for i in range(n):
    val = 0
    for j in range(i, min(n, i + 10)):  # 2^10 > 20
        val = (val << 1) + int(s[j])

        if 1 <= val <= MAXM:
            edges[i].append((j + 1, val))

ans = 0

# mask đẹp: 1, 11, 111, ...
good_masks = set()
mask = 0
for m in range(1, MAXM + 1):
    mask |= (1 << (m - 1))
    good_masks.add(mask)

for start in range(n + 1):

    dp = {(start, 0): 1}

    while dp:
        ndp = {}

        for (pos, used), cnt in dp.items():

            if used in good_masks and used != 0:
                ans = (ans + cnt) % MOD

            if pos == n:
                continue

            for nxt, v in edgesbit = 1 << (v - 1)

                if used & bit:
                    continue

                new_used = used | bit

                mx = new_used.bit_length()

                # phải là tập con của {1..mx}
                if new_used & ~((1 << mx) - 1):
                    continue

                key = (nxt, new_used)

                ndp[key] = (ndp.get(key, 0) + cnt) % MOD

        dp = ndp

print(ans % MOD)