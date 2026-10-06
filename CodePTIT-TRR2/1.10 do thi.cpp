#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    int t, n;
    cin >> t >> n;

    vector<vector<int>> c(n + 1, vector<int>(n + 1));
    vector<int> deg(n + 1, 0);
    vector<tuple<int,int,int>> edges;

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
        }
    }

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            if (i != j && c[i][j] != 10000) {
                deg[i]++;
            }

            
            if (i < j && c[i][j] != 10000) {
                edges.push_back({i, j, c[i][j]});
            }
        }
    }

    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            cout << deg[i] << " ";
        }
    }
    else {
        int m = edges.size();
        cout << n << " " << m << endl;

        for (auto [u, v, w] : edges) {
            cout << u << " " << v << " " << w << endl;
        }
    }

    return 0;
}
