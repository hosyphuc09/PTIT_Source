#include <bits/stdc++.h>
using namespace std;

int n, u, v, t;
int a[105][105];
bool visited[105];
int parent[105];

void DFS(int x) {
    visited[x] = true;
    for (int i = 1; i <= n; i++) {
        if (a[x][i] == 1 && !visited[i]) {
            parent[i] = x;
            DFS(i);
        }
    }
}

int main() {
    cin >> t;
    cin >> n >> u >> v;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    
    if (t == 1) {
        int count = 0;
        for (int k = 1; k <= n; k++) {
            if (a[u][k] == 1 && a[k][v] == 1)
                count++;
        }
        cout << count;
    }

    
    else {
        memset(visited, false, sizeof(visited));
        memset(parent, 0, sizeof(parent));

        DFS(u);

        if (!visited[v]) {
            cout << 0;
        } else {
            vector<int> path;
            int cur = v;
            while (cur != 0) {
                path.push_back(cur);
                cur = parent[cur];
            }
            reverse(path.begin(), path.end());

            for (int x : path)
                cout << x << " ";
        }
    }

    return 0;
}
