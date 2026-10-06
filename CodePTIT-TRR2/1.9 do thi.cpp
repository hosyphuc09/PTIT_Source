#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    int t, n;
    cin >> t;
    cin >> n;

    vector<int> deg(n + 1, 0);
    vector<pair<int,int>> edges;

   
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        deg[i] = k;

        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            if (i < v) {
                edges.push_back({i, v});
            }
        }
    }

    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            cout << deg[i] << " ";
        }
    }
    else if (t == 2) {
        int m = edges.size();

        
        cout << n << " " << m << endl;

        
        vector<vector<int>> a(n + 1, vector<int>(m, 0));

        for (int j = 0; j < m; j++) {
            int u = edges[j].first;
            int v = edges[j].second;

            a[u][j] = 1;
            a[v][j] = 1;
        }

        
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
