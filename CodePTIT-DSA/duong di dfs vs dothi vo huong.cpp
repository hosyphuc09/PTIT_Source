#include <bits/stdc++.h>
using namespace std;
int t,n,m,u,v;
bool vs[1005];
vector<vector<int>> res(1005);
vector<int> path;
bool dfs(int u){
	vs[u]=true;
	path.push_back(u);
	if(u==v) return true;
	for(auto x:res[u]){
		if(!vs[x]){
			if(dfs(x)) return true;
		}
	}
	path.pop_back();
	return false;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>u>>v;
		vector<int> a(2*m+1);
		for(int i=1;i<=2*m;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			vs[i]=false;
			res[i].clear();
		}
		for(int i=1;i<m*2;i++){
			if(i%2==1){
				res[a[i]].push_back(a[i+1]);
				res[a[i+1]].push_back(a[i]);
			}
		}
		for(int i=1;i<=n;i++){
			sort(res[i].begin(),res[i].end());
		}
		path.clear();
		if(dfs(u)){
			for(auto x:path){
				cout<<x<<" ";
			}
			cout<<endl;
		}else {
			cout<<"-1"<<endl;
		}
	}
}
