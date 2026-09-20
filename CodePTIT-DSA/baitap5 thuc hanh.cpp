#include <bits/stdc++.h>
using namespace std;
const int MAXN =100000+5;
int parent[MAXN],sz[MAXN];
int findset(int u){
	if(u==parent[u]) return u;
	return parent[u]=findset(parent[u]);
}
void unionset(int u,int v){
	u=findset(u);
	v=findset(v);
	if(u!=v){
		if(sz[u]<sz[v]) swap(u,v);
		parent[v]=u;
		sz[u]+=sz[v];
	}
}
int main(){
	int Q;
	cin>>Q;
	for(int i=0;i<=100000;i++){
		parent[i]=i;
		sz[i]=1;
	}
	while(Q--){
		int x,y,z;
		cin>>x>>y>>z;
		if(z==1){
			unionset(x,y);
		}else{
			if(findset(x)==findset(y)){
				cout<<1<<"\n";
			}else cout<<0<<"\n";
		}
	}
	return 0;
}
