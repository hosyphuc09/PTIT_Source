#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("DT.INP");
    ofstream cout("DT.OUT");

    int t;
    cin >> t;

    if(t == 1){
        int n, m;
        cin >> n >> m;

        vector<int> deg(n+1, 0);

        for(int i=0;i<m;i++){
            int u, v;
            cin >> u >> v;
            deg[u]++;
            deg[v]++;
        }

        for(int i=1;i<=n;i++){
            cout << deg[i] << " ";
        }
    }

    else if(t == 2){
        int n;
        cin >> n;

        vector<pair<int,int>> res;

        for(int i=1;i<=n;i++){
            int k; cin >> k;
            for(int j=0;j<k;j++){
                int x; cin >> x;
                if(i < x){
                    res.push_back({i, x});
                }
            }
        }

        sort(res.begin(), res.end());

        cout << n << " " << res.size() << endl;
        for(auto x : res){
            cout << x.first << " " << x.second << endl;
        }
    }
}
