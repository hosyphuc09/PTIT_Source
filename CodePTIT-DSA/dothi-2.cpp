#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("DT.INP","r",stdin);
	freopen("DT.OUT","w",stdout);
	int t;cin>>t;
	int n;cin>>n;
	vector<vector<int>> a(n+1,vector<int>(n+1));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			int deg_in=0,deg_out=0;
			for(int j=1;j<=n;j++){
				if(a[i][j]==1) deg_out++;
				if(a[j][i]==1) deg_in++;
				
			}
			cout<<deg_in<<" "<<deg_out<<endl;
		}
	}
	 else if(t == 2){
        vector<pair<int,int>> edges;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j] == 1){
                    edges.push_back({i,j});
                }
            }
        }

        int m = edges.size();
        cout << n << " " << m << endl;

        for(auto e : edges){
            cout << e.first << " " << e.second << endl;
        }
    }
    return 0;
}
