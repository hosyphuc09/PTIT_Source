#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    int t, n;
    cin >> t >> n;

    vector<vector<int>> adj(n + 1);
    vector<int> deg_in(n + 1, 0), deg_out(n + 1, 0);

  
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        adj[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> adj[i][j];
            deg_out[i]++;
            deg_in[adj[i][j]]++;
        }
    }

   
    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            cout << deg_in[i] << " " << deg_out[i] << "\n";
        }
    }

   
    else {
        vector<pair<int,int>> edges;

        
        for (int u = 1; u <= n; u++) {
            for (int v : adj[u]) {
                edges.push_back({u, v});
            }
        }

       
        sort(edges.begin(), edges.end());

        int m = edges.size();
        cout << n << " " << m << "\n";

        
        vector<vector<int>> matrix(n + 1, vector<int>(m, 0));

        for (int j = 0; j < m; j++) {
            int u = edges[j].first;
            int v = edges[j].second;

            matrix[u][j] = -1;
            matrix[v][j] = 1;
        }

       
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
