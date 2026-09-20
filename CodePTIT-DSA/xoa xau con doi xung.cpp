#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        int n = s.size();

        vector<vector<int>> dp(n, vector<int>(n, 0));

        
        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }

        
        for (int len = 2; len <= n; len++) {
            for (int l = 0; l + len - 1 < n; l++) {
                int r = l + len - 1;

                
                dp[l][r] = 1 + dp[l + 1][r];

                
                for (int k = l + 1; k <= r; k++) {
                    if (s[l] == s[k]) {
                        int left = 0;

                        if (k > l + 1)
                            left = dp[l + 1][k - 1];

                       
                        dp[l][r] = min(dp[l][r], left + dp[k][r]);
                    }
                }
            }
        }

        cout << dp[0][n - 1] << "\n";
    }

    return 0;
}
