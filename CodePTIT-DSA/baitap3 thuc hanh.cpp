#include <bits/stdc++.h>
using namespace std;
const int MAXN=100000+5;
vector<int> adj[MAXN];
bool visited[MAXN];
int comp[MAXN];
int compsize[MAXN];
int N,M;
int cntcomp=0;
void dfs(int u){
	visited[u]=true;
	comp[u]=cntcomp;
	compsize[cntcomp]++;
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
	for(int i=1;i<=N;i++){
		if(!visited[i]){
			cntcomp++;
			dfs(i);
		}
	}
	int comp1=comp[1];
	int res=compsize[comp1];
	int best=0;
	for(int i=1;i<=cntcomp;i++){
		if(i!=comp1){
			best=max(best,compsize[i]);
		}
	}
	cout<<res+best;
	return 0;
}
