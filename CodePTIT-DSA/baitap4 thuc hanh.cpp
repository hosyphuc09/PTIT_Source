#include <bits/stdc++.h>
using namespace std;
vector<int> adj[305];
bool visited[305];
int N,M;
void dfs(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}
int main(){
	cin>>N>>M;
	for(int i=0;i<M;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1);
	bool found=false;
	for(int i=1;i<=N;i++){
		if(!visited[i]){
			cout<<i<<"\n";
			found=true;
		}
	}
	if(!found){
		cout<<0;
	}
	return 0;
}
