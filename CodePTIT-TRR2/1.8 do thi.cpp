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

        for (auto e : edges) {
            cout << e.first << " " << e.second << endl;
        }
    }

    return 0;
}
