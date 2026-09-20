#include <bits/stdc++.h>
using namespace std;
int t,n,m,u,v;
bool vs[1005];
vector<int> path; 
vector<vector<int>> res(1005);
bool dfs(int u){
	vs[u]=true;
	path.push_back(u);
	if(u==v) return true;
	for(auto x:res[u]){
		if(!vs[x]){
			vs[x]=true;
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
		path.clear(); 
		for(int i=1;i<=n;i++){
			res[i].clear();
			vs[i]=false;
		}
		int a[m*2+1];
		for(int i=1;i<=2*m;i++){
			cin>>a[i];
		}
		for(int i=1;i<2*m;i++){
			if(i%2==1){
				res[a[i]].push_back(a[i+1]);
			}
		}
		for(int i=1;i<=n;i++){
			sort(res[i].begin(),res[i].end());
		}
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
