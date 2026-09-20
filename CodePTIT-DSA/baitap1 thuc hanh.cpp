#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int V,E,u,v;
		cin>>V>>E>>u>>v;
		vector<vector<int>> adj(V+1);
		for(int i=0;i<E;i++){
			int x,y;
			cin>>x>>y;
			adj[x].push_back(y);
		}
		vector<bool> visited(V+1,false);
		vector<int> parent(V+1,-1);
		queue<int> q;
		q.push(u);
		visited[u]=true;
		while(!q.empty()){
			int cur=q.front();
			q.pop();
			if(cur==v) break;
			for(int next:adj[cur]){
				if(!visited[next]){
					visited[next]=true;
					parent[next]=cur;
					q.push(next);
				}
			}
		}
		if(!visited[v]){
			cout<<"-1"<<"\n";
		}else{
			vector<int> path;
			for(int x=v;x!=-1;x=parent[x]){
				path.push_back(x);
			}
			reverse(path.begin(),path.end());
			for(int x:path){
				cout<<x<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
