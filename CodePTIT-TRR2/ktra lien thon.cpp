#include <bits/stdc++.h>
using namespace  std;
int a[105][105],b[105][105];
int vs[105];
int n;
void DFS(int u,int g[105][105]){
	vs[u]=1;
	for(int i=1;i<=n;i++){
		if(g[u][i]==1&&vs[i]==0){
			DFS(i,g);
		}
	}
}
int lienthongmanh(){
	memset(vs,0,sizeof(vs));
	DFS(1,a);
	for(int j=1;j<=n;j++){
		if(vs[j]==0) return 0;
	}
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[i][j]=a[j][i];
		}
	}
	memset(vs,0,sizeof(vs));
	
	DFS(1,b);
	for(int j=1;j<=n;j++){
		if(vs[j]==0) return 0;
	}
	return 1;
}
int lienthongyeu(){
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1){
				b[i][j]=1;
				b[j][i]=1;
			}
		}
	}
	memset(vs,0,sizeof(vs));
	DFS(1,b);
	for(int i=1;i<=n;i++){
		if(vs[i]==0) return 0;
	}
	return 1;
}
int main(){
	ifstream cin("TK.INP");
	ofstream cout("TK.OUT");
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	if(lienthongmanh()){
		cout<<1<<"\n";
		
	}else if(lienthongyeu()){
		cout<<2<<"\n";
	}else cout<<0<<"\n";
}
