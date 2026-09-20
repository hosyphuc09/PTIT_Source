#include <bits/stdc++.h>
using namespace std;

using ll = long long;


ll my_gcd(ll a, ll b) {
    while (b) {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        ll K;
        cin >> N >> K;

        vector<ll> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        int res = INT_MAX;

        vector<pair<ll, int>> prev;

        for (int i = 0; i < N; i++) {
            vector<pair<ll, int>> cur;

            if (A[i] % K != 0) {
                prev.clear();
                continue;
            }

            ll val = A[i] / K;

            cur.push_back({val, 1});

            for (auto [g, len] : prev) {
                ll new_g = my_gcd(g, val);

                if (!cur.empty() && cur.back().first == new_g) {
                    cur.back().second = min(cur.back().second, len + 1);
                } else {
                    cur.push_back({new_g, len + 1});
                }
            }

            for (auto [g, len] : cur) {
                if (g == 1) {
                    res = min(res, len);
                }
            }

            prev = cur;
        }

        if (res == INT_MAX) cout << -1 << "\n";
        else cout << res << "\n";
    }

    return 0;
}
