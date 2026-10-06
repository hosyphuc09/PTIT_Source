#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("DT.INP", "r", stdin);
    freopen("DT.OUT", "w", stdout);

    int t, n;
    cin >> t >> n;

    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    vector<int> deg_in(n + 1, 0), deg_out(n + 1, 0);
    vector<pair<int,int>> edges;

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

   
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 1) {
                deg_out[i]++;
                deg_in[j]++;
                edges.push_back({i, j});
            }
        }
    }

    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            cout << deg_in[i] << " " << deg_out[i] << endl;
        }
    }
    else {
        int m = edges.size();
        cout << n << " " << m << endl;

        
        vector<vector<int>> b(n + 1, vector<int>(m, 0));

        for (int k = 0; k < m; k++) {
            int u = edges[k].first;
            int v = edges[k].second;

            b[u][k] = -1; 
            b[v][k] = 1;  
        }

        
        for (int i = 1; i <= n; i++) {
            for (int k = 0; k < m; k++) {
                cout << b[i][k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
