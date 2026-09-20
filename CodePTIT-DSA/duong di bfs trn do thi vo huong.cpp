#include <bits/stdc++.h>
using namespace std;
int t,n,m,u,v;
vector<vector<int>> res(1005);
bool vs[1005];
vector<int> parent(1005);
bool bfs(int u){
	queue<int> q;
	vs[u]=true;
	q.push(u);
	parent[u]=-1;
	while(!q.empty()){
		int x=q.front();
		if(x==v) return true;
		q.pop();
		for(auto k:res[x]){
			if(!vs[k]){
				parent[k]=x;
				vs[k]=true;
				q.push(k);
			}
		}
	}
	return false;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>u>>v;
			for(int i=1;i<=n;i++){
			vs[i]=false;
			res[i].clear();
		}
		vector<int> a(2*m+1);
		for(int i=1;i<=m*2;i++){
			cin>>a[i];
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
		
		if(bfs(u)){
			int cur=v;
		vector<int> path;
		while(cur!=-1){
			path.push_back(cur);
			cur=parent[cur];
		}
		reverse(path.begin(),path.end());
			for(auto x:path){
				cout<<x<<" ";
			}
			cout<<endl;
		}else{
			cout<<"-1"<<endl;
		}
		
		
	}
}
