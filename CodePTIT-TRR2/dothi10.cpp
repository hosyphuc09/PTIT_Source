#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream cin("DT.INP");
    ofstream cout("DT.OUT");

    int t,n;
    cin >> t >> n;

    int a[105][105];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    if(t==1){
        vector<int> deg(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j] > 0 && a[i][j] <= 50) deg[i]++;
            }
        }
        for(int i=0;i<n;i++){
            cout << deg[i] << " ";
        }
    }

    else if(t==2){
        vector<vector<int>> res;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){ 
                if(a[i][j] > 0 && a[i][j] <= 50){
                    res.push_back({i+1, j+1, a[i][j]});
                }
            }
        }

        cout << n << " " << res.size() << endl;
        for(auto &e : res){
            cout << e[0] << " " << e[1] << " " << e[2] << endl;
        }
    }
}
