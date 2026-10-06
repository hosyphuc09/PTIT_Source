#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    int t, n, m;
    cin >> t;
    cin >> n >> m;

    vector<int> deg(n + 1, 0);

   
    vector<vector<int>> a(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;

        
        deg[u]++;
        deg[v]++;

        
        a[u][i] = 1;
        a[v][i] = 1;
    }

    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            cout << deg[i] << " ";
        }
    }
    else if (t == 2) {
        cout << n << " " << m << endl;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
