#include <bits/stdc++.h>
using namespace std;
int n;
int a[105][105],b[105][105];
bool vs[105];
void dfs(int u,int g[105][105]){
	vs[u]=true;
	for(int i=1;i<=n;i++){
		if(g[u][i]==1&&!vs[i]){
			dfs(i,g);
		}
	}
}
int ltmanh(){
	memset(vs,false,sizeof(vs));
	dfs(1,a);
	for(int i=1;i<=n;i++){
        if(vs[i]==0) return 0;
	}
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
		
				b[i][j]=a[j][i];
			
		}
	}
	memset(vs,false,sizeof(vs));
	dfs(1,b);
	for(int i=1;i<=n;i++){
		if(vs[i]==0) return 0;
	}
	return 1;
}
int ltyeu(){
	
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1){
				b[i][j]=1;
				b[j][i]=1;
			}
		}
	}
	memset(vs,false,sizeof(vs));
	dfs(1,b);
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
	if(ltmanh()){
		cout<<1<<endl;
	}else if(ltyeu()){
		cout<<2<<endl;
	}else cout<<0<<endl;
}
