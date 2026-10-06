import sys

def solve():
    # Đọc nhanh toàn bộ dữ liệu từ standard input
    input_data = sys.stdin.read().split()
    if not input_data:
        return

    m = int(input_data[0])
    d = int(input_data[1])
    a = input_data[2]
    b = input_data[3]

    MOD = 10**9 + 7
    L = len(a)

    # Tiền xử lý các mảng chuyển số dư (Transition Table) để tăng tốc độ cho vòng lặp
    trans_odd_nrem = [[(rem * 10 + dig) % m for dig in range(10) if dig != d] for rem in range(m)]
    trans_even_nrem = [[(rem * 10 + dig) % m for dig in range(10)] for rem in range(m)]
    trans = [[(rem * 10 + dig) % m for dig in range(10)] for rem in range(m)]

    # dp[rem] là số lượng các tiền tố tự do (chắc chắn lớn hơn a và nhỏ hơn b) có số dư là `rem`
    dp = [0] * m
    
    # Các trạng thái theo sát biên (tight bounds)
    is_eq_both = True; rem_both = 0
    is_eq_a = False;   rem_a = 0
    is_eq_b = False;   rem_b = 0

    valid_digits_odd = [dig for dig in range(10) if dig != d]
    valid_digits_even = list(range(10))

    for i in range(L):
        new_dp = [0] * m
        new_is_eq_both = False; new_rem_both = 0
        new_is_eq_a = False;    new_rem_a = 0
        new_is_eq_b = False;    new_rem_b = 0

        # Vị trí tính từ phải sang trái
        pos = L - i
        if pos % 2 == 1:
            valid_digits = valid_digits_odd
            current_trans_nrem = trans_odd_nrem
        else:
            valid_digits = valid_digits_even
            current_trans_nrem = trans_even_nrem

        # 1. Cập nhật các trạng thái nằm hoàn toàn ở giữa a và b (Trạng thái tự do)
        for rem, val in enumerate(dp):
            if val:
                for nrem in current_trans_nrem[rem]:
                    new_dp[nrem] += val

        # 2. Cập nhật từ tiền tố đang khớp cả a và b
        if is_eq_both:
            da = int(a[i])
            db = int(b[i])
            for dig in valid_digits:
                nrem = trans[rem_both][dig]
                if dig == da and dig == db:
                    new_is_eq_both = True
                    new_rem_both = nrem
                elif dig == da and dig < db:
                    new_is_eq_a = True
                    new_rem_a = nrem
                elif dig > da and dig == db:
                    new_is_eq_b = True
                    new_rem_b = nrem
                elif dig > da and dig < db:
                    new_dp[nrem] += 1
        
        # 3. Cập nhật từ tiền tố đang khớp a (và chắc chắn đã nhỏ hơn b)
        if is_eq_a:
            da = int(a[i])
            for dig in valid_digits:
                nrem = trans[rem_a][dig]
                if dig == da:
                    new_is_eq_a = True
                    new_rem_a = nrem
                elif dig > da:
                    new_dp[nrem] += 1
# 4. Cập nhật từ tiền tố đang khớp b (và chắc chắn đã lớn hơn a)
        if is_eq_b:
            db = int(b[i])
            for dig in valid_digits:
                nrem = trans[rem_b][dig]
                if dig == db:
                    new_is_eq_b = True
                    new_rem_b = nrem
                elif dig < db:
                    new_dp[nrem] += 1

        # Lấy modulo sau khi duyệt xong toàn bộ chữ số của vòng hiện tại (tránh modulo liên tục)
        for rem in range(m):
            dp[rem] = new_dp[rem] % MOD
        
        # Cập nhật lại các trạng thái biên cho chữ số tiếp theo
        is_eq_both, rem_both = new_is_eq_both, new_rem_both
        is_eq_a, rem_a = new_is_eq_a, new_rem_a
        is_eq_b, rem_b = new_is_eq_b, new_rem_b

    # Tổng hợp lại kết quả chia hết cho m (tức số dư == 0)
    ans = dp[0]
    if is_eq_both and rem_both == 0:
        ans += 1
    if is_eq_a and rem_a == 0:
        ans += 1
    if is_eq_b and rem_b == 0:
        ans += 1
    
    print(ans % MOD)

if __name__ == '__main__':
    solve()