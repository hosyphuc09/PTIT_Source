#include <bits/stdc++.h>
using namespace std;

const long long INF = -1e18;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<vector<long long>> dp(n + 1, vector<long long>(k, INF));

    dp[0][0] = 0;

    for (int i = 1; i <= n; i++) {

        long long best = INF;

        for (int j = 0; j < k; j++) {
            best = max(best, dp[i - 1][j]);
        }

       
        dp[i][0] = best;

        
        for (int j = 1; j < k; j++) {
            if (dp[i - 1][j - 1] != INF) {
                dp[i][j] = dp[i - 1][j - 1] + a[i];
            }
        }
    }

    long long ans = 0;

    for (int j = 0; j < k; j++) {
        ans = max(ans, dp[n][j]);
    }

    cout << ans;

    return 0;
}
