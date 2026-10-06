#include <bits/stdc++.h>
using namespace std;
int n,m,s,t;
bool visited[105];
vector<pair<int,int>> tree;
vector<int> arr[105];
void DFS(int u){
	visited[u]=true;
	for(auto v:arr[u]){
		if(!visited[v]){
			tree.push_back({v,u});
			DFS(v);
		}
	}
}
void BFS(int s){
	queue<int> q;
	q.push(s);
	visited[s]=true;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(auto v:arr[u]){
			if(!visited[v]){
				visited[v]=true;
				tree.push_back({v,u});
				q.push(v);
			}
		}
	}
}
int main(){
	cin>>t;
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++){
		sort(arr[i].begin(),arr[i].end());
	}
	if(t==1) DFS(s);
	else BFS(s);
	if(tree.size()!=n-1){
		cout<<0;
		return 0;
	}
	cout<<n-1<<"\n";
	for(auto x:tree){
		cout<<x.second<<" "<<x.first<<"\n";
	}
	return 0;
}
