#include <bits/stdc++.h>
using namespace std;

int t, n, u;
int a[105][105];
bool vis[105];

void dfs(int u) {
    vis[u] = true;
    for (int v = 1; v <= n; v++) {
        if (a[u][v] && !vis[v]) {
            dfs(v);
        }
    }
}

int main() {
    ifstream cin("CT.INP");
    ofstream cout("CT.OUT");

    cin >> t;

    if (t == 1) {
        cin >> n;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }

        vector<int> deg(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                deg[i] += a[i][j];
            }
        }

        int start = 0;
        for (int i = 1; i <= n; i++) {
            if (deg[i] > 0) {
                start = i;
                break;
            }
        }

        if (start != 0) {
            dfs(start);

            for (int i = 1; i <= n; i++) {
                if (deg[i] > 0 && !vis[i]) {
                    cout << 0;
                    return 0;
                }
            }
        }

        int odd = 0;
        for (int i = 1; i <= n; i++) {
            if (deg[i] % 2 != 0) odd++;
        }

        if (odd == 0) cout << 1;
        else if (odd == 2) cout << 2;
        else cout << 0;
    }

    else if (t == 2) {
        cin >> n >> u;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> a[i][j];
            }
        }

        vector<int> res;
        stack<int> st;

        st.push(u);

        while (!st.empty()) {
            int x = st.top();
            bool found = false;

            for (int v = 1; v <= n; v++) {
                if (a[x][v]) {
                    st.push(v);

                    a[x][v] = 0;
                    a[v][x] = 0;

                    found = true;
                    break;
                }
            }

            if (!found) {
                res.push_back(x);
                st.pop();
            }
        }

        for (int i = (int)res.size() - 1; i >= 0; i--) {
            cout << res[i];
            if (i) cout << " ";
        }
    }

    return 0;
}
