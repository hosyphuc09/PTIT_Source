#include <bits/stdc++.h>
using namespace std;
int n,m,u,v,res;
vector<vector<int>> G;
vector<bool> vs;
void bfs(int s){
	int size=1;
	queue<int> q;
	q.push(s);
	vs[s]=true;
	while(!q.empty()){
		u=q.front();
		q.pop();
		for(int v:G[u]){
			if(!vs[v]){
				size++;
				q.push(v);
				vs[v]=true;
			}
		}
	}
	res=max(res,size);
}
void test(){
	res=0;
	cin>>n>>m;
	G.assign(n+1,{});
	vs.assign(n+1,false);
	for(int i=1;i<=m;i++){
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			bfs(i);
		}
	}
	cout<<res;
}
int main(){
	int t;cin>>t;
	while(t--){
		test();
		cout<<"\n";
	}
	return 0;
}
