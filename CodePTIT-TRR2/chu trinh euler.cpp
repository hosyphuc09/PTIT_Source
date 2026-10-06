#include <bits/stdc++.h>
using namespace std;

int n, u, t;
int A[105][105];
bool visited[105];


void dfs(int u) {
    visited[u] = true;
    for (int v = 1; v <= n; v++) {
        if (A[u][v] && !visited[v])
            dfs(v);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    if (t == 1) cin >> n;
    else cin >> n >> u;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> A[i][j];

    
    if (t == 1) {
        vector<int> deg(n + 1, 0);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                deg[i] += A[i][j];

        
        int start = -1;
        for (int i = 1; i <= n; i++)
            if (deg[i] > 0) {
                start = i;
                break;
            }

        memset(visited, false, sizeof(visited));
        if (start != -1) dfs(start);

        
        for (int i = 1; i <= n; i++) {
            if (deg[i] > 0 && !visited[i]) {
                cout << 0;
                return 0;
            }
        }

        int odd = 0;
        for (int i = 1; i <= n; i++)
            if (deg[i] % 2 == 1) odd++;

        if (odd == 0) cout << 1;
        else if (odd == 2) cout << 2;
        else cout << 0;
    }

    
    else {
        stack<int> st;
        vector<int> cycle;
        st.push(u);

        while (!st.empty()) {
            int x = st.top();
            bool found = false;

            for (int y = 1; y <= n; y++) {
                if (A[x][y]) {
                    st.push(y);
                    A[x][y] = A[y][x] = 0; 
                    found = true;
                    break;
                }
            }

            if (!found) {
                cycle.push_back(x);
                st.pop();
            }
        }

        reverse(cycle.begin(), cycle.end());
        for (int v : cycle)
            cout << v << " ";
    }

    return 0;
}
