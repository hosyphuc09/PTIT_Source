#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

int parent[MAXN], sz[MAXN];
vector<int> adj[MAXN];
bool active[MAXN];

int find_set(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}

bool union_set(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a == b) return false;

    if (sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        parent[i] = i;
        sz[i] = 1;
    }

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> P(N + 1);
    for (int i = 1; i <= N; i++) cin >> P[i];

    vector<string> res;

    int components = 0;

    for (int i = N; i >= 1; i--) {
        int u = P[i];
        active[u] = true;
        components++;

        for (int v : adj[u]) {
            if (active[v]) {
                if (union_set(u, v)) {
                    components--;
                }
            }
        }

        if (components == 1) res.push_back("YES");
        else res.push_back("NO");
    }

   
    reverse(res.begin(), res.end());

    
    for (int i = 0; i < N - 1; i++) {
        cout << res[i] << "\n";
    }

    return 0;
}
