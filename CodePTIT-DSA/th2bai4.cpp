#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>> a(n+1);
	vector<int> b(n+1,0);
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		b[y]++;
	}
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(b[i]==0) q.push(i);
	}
	vector<int> d(n+1,0);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int v: a[u]){
			d[v]=max(d[v],d[u]+1);
			b[v]--;
			if(b[v]==0) q.push(v);
		}
	}
	cout<<*max_element(d.begin(),d.end());
}
