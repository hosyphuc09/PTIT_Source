#include <bits/stdc++.h>
using namespace std;

int t, n, s;
int a[105][105];
bool vs[105];
vector<pair<int,int>> res;

void dfs(int u){
    vs[u] = true;

    for(int v = 1; v <= n; v++){
        if(a[u][v] && !vs[v]){
            res.push_back({u, v});
            dfs(v);
        }
    }
}

void bfs(int s){
    queue<int> q;
    q.push(s);
    vs[s] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v = 1; v <= n; v++){
            if(a[u][v] && !vs[v]){
                vs[v] = true;
                res.push_back({u, v});
                q.push(v);
            }
        }
    }
}

int main(){
    ifstream cin("CK.INP");
    ofstream cout("CK.OUT");

    cin >> t;
    cin >> n >> s;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    memset(vs, false, sizeof(vs));

    if(t == 1)
        dfs(s);
    else
        bfs(s);

    
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(vs[i]) cnt++;
    }

    if(cnt != n){
        cout << 0;
        return 0;
    }

    cout << n - 1 << '\n';

    for(auto &e : res){
        cout << e.first << ' ' << e.second << '\n';
    }

    return 0;
}
