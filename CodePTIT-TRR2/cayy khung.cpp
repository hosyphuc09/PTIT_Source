#include <bits/stdc++.h>
using namespace std;

int n, s, t;
int a[105][105];
bool visited[105];
vector<pair<int,int>> tree;

void DFS(int u){
    visited[u] = true;
    for(int v = 1; v <= n; v++){
        if(a[u][v] == 1 && !visited[v]){
            tree.push_back({v, u}); 
            DFS(v);
        }
    }
}

void BFS(int s){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v = 1; v <= n; v++){
            if(a[u][v] == 1 && !visited[v]){
                visited[v] = true;
                tree.push_back({v, u});
                q.push(v);
            }
        }
    }
}

int main(){
    cin >> t;
    cin >> n >> s;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    memset(visited, false, sizeof(visited));
    tree.clear();

    if(t == 1) DFS(s);
    else BFS(s);

    if(tree.size() != n - 1){
        cout << 0;
        return 0;
    }

    cout << n - 1 << "\n";
    for(auto &e : tree){
        cout << e.second << " " << e.first << "\n"; 
    }

    return 0;
}
