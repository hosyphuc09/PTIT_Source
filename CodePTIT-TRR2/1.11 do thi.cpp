#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    int t, n, m;
    cin >> t >> n >> m;

    vector<int> deg(n + 1, 0);

    
    vector<vector<int>> c(n + 1, vector<int>(n + 1, 10000));

    for (int i = 1; i <= n; i++) {
        c[i][i] = 0;
    }

   
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

       
        deg[u]++;
        deg[v]++;

        
        c[u][v] = w;
        c[v][u] = w;
    }

    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            cout << deg[i] << " ";
        }
    }
    else if (t == 2) {
        cout << n << endl;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
