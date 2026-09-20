#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("DT.INP","r",stdin);
	freopen("DT.OUT","w",stdout);
	int t;cin>>t;
	int n,m;cin>>n>>m;
	vector<pair<int,int>> edges(m);
	vector<int> deg(n+1,0);
	for(int i=0;i<m;i++){
		cin>>edges[i].first>>edges[i].second;
		int u=edges[i].first;
		int v=edges[i].second;
		deg[u]++;
		deg[v]++;
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			cout<<deg[i]<<" ";
		}
	}
	else if(t==2){
		vector<vector<int>> a(n+1,vector<int>(m,0));
		for(int j=0;j<m;j++){
			int u=edges[j].first;
			int v=edges[j].second;
			a[u][j]=1;
			a[v][j]=1;
		}
		cout<<n<<" "<<m<<endl;
		for(int i=1;i<=n;i++){
			for(int j=0;j<m;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
