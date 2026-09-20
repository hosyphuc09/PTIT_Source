#include <bits/stdc++.h>
using namespace std;
int t,n,m,u,v,Q;
bool vs[1005];
vector<vector<int>> res(1005);
bool dfs(int u){
	vs[u]=true;
	if(u==v) return true;
	for(auto x:res[u]){
		if(!vs[x]){
		
			if(dfs(x)) return true;
		}
	}
	return false;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			
			res[i].clear();
		}
		for(int i=1;i<=m;i++){
			int x,y;
			cin>>x>>y;
			res[x].push_back(y);
			res[y].push_back(x);
		}
		for(int i=1;i<=n;i++){
			sort(res[i].begin(),res[i].end());
		}
		cin>>Q;
		while(Q--){
			cin>>u>>v;
			for(int i=1;i<=n;i++){
				vs[i]=false;
			}
		if(dfs(u)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}}
}
