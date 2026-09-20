#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> color;
int V,E;
bool res;
void dfs(int u){
	if(res) return ;
	color[u]=1;
	for(int v:adj[u]){
		if(color[v]==0){
			dfs(v);
		}
		else if(color[v]==1){
			res=true;
			return;
		}
	}
	color[u]=2;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>V>>E;
		adj.assign(V+1,vector<int>());
		color.assign(V+1,0);
		res=false;
		for(int i=0;i<E;i++){
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
		}
		for(int i=1;i<=V;i++){
			if(color[i]==0){
				dfs(i);
			}
		}
		if(res) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
