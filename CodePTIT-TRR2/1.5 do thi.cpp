#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    int t, n, m;
    cin >> t;
    cin >> n >> m;

    vector<int> deg(n + 1, 0);
    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        
        deg[u]++;
        deg[v]++;

        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            cout << deg[i] << " ";
        }
    }
    else if (t == 2) {
        cout << n << endl;

        for (int i = 1; i <= n; i++) {
            
            sort(adj[i].begin(), adj[i].end());

            cout << adj[i].size();
            for (int v : adj[i]) {
                cout << " " << v;
            }
            cout << endl;
        }
    }

    return 0;
}
