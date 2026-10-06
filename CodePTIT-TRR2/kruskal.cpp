#include <bits/stdc++.h>
using namespace std;
struct Edge{
	int u,v,w;
};
int parent[105],rnk[105];
int find(int u){
	if(parent[u]!=u){
		parent[u]=find(parent[u]);
	}
	return parent[u];
}
bool unionset(int u,int v){
	u=find(u);
	v=find(v);
	if(u==v) return false;
	if(rnk[u]<rnk[v] ) swap(u,v);
	parent[v]=u;
	if(rnk[u]==rnk[v]) rnk[u]++;
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int V,E;
		cin>>V>>E;
		vector<Edge> edges(E);
		for(int i=0;i<E;i++){
			cin>>edges[i].u>>edges[i].v>>edges[i].w;
		}
		for(int i=1;i<=V;i++){
			parent[i]=i;
			rnk[i]=0;
		}
		sort(edges.begin(),edges.end(),[](Edge a,Edge b){ 
		return a.w<b.w;
		});
		long long weigh=0;
		int cnt=0;
		for(auto &e:edges){
			if(unionset(e.u,e.v)){
				weigh+=e.w;
				cnt++;
				if(cnt==V-1) break;
			}
		}
		cout<<weigh<<"\n";
	}
	return 0;
}
