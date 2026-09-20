#include <bits/stdc++.h>
using namespace std;
bool vs[1005];
	vector<vector<int>> res(1005);
void bfs(int u){
	queue<int> q;
	q.push(u);
	vs[u]=true;
	while(!q.empty()){
		int x=q.front();
		cout<<x<<" ";
		q.pop();
		for(auto y:res[x]){
			if(!vs[y]){
			
			vs[y]=true;
			q.push(y);
		}}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m,u;
		cin>>n>>m>>u;
	for(int i=1;i<=n;i++){
		res[i].clear();
		vs[i]=false;
	}
		int a[m*2];
		for(int i=1;i<=m*2;i++){
			cin>>a[i];
			
		}
		for(int i=1;i<m*2;i++){
			if(i%2==1){
				res[a[i]].push_back(a[i+1]);
			}
		}
		for(int i=1;i<=n;i++){
			sort(res[i].begin(),res[i].end());
		}
		bfs(u);
		cout<<endl;
	}
}
