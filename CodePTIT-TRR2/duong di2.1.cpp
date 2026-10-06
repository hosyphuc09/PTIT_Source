#include <bits/stdc++.h>
using namespace std;
int t,n,u,v;
int a[105][105];
bool visited[105];
int parent[105];
bool dfs(int x){
	visited[x]=true;
	if(x==v) return true;
	for(int i=1;i<=n;i++){
		if(a[x][i]==1&&!visited[i]){
			parent[i]=x;
			if(dfs(i)) return true;
		}
	}
	return false;
}
int main(){
	ifstream cin("TK.INP");
	ofstream cout("TK.OUT");
	cin>>t>>n>>u>>v;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	
	if(t==1){
		int d=0;
		for(int i=1;i<=n;i++){
			if(a[u][i]==1&&a[i][v]==1) d++;
		}
		cout<<d<<endl;
	}
	else if(t==2){
	memset(visited,false,sizeof(visited));
	memset(parent,-1,sizeof(parent));
	if(dfs(u)){
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
	}
	else{
		cout<<0;
	}
	}
}
