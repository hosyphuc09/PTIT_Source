#include <bits/stdc++.h>
using namespace std;
int t,n,m,u;
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
				
			}
		}
	}
	
	
}
int main(){
	cin>>t;
	while(t--){
		cin>>n>>m>>u;
		
for(int i = 1; i <= n; i++){
            res[i].clear();
            vs[i] = false;
        }

		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			res[x].push_back(y);
			res[y].push_back(x);
			
		}
		for(int i=1;i<=n;i++){
			sort(res[i].begin(),res[i].end());
		}
		bfs(u);
			cout<<endl;
	}

}
