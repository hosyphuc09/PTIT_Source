#include <bits/stdc++.h>
using namespace std;
int n,m;
int b[105];
bool vs[105];
int d=0;
void in(int c[]){
	bool ok=false;
	for(int i=1;i<=n;i++){
		if(b[i]!=c[i]){
			ok=true;
			break;
		}
	}
	if(!ok) d++;
	if(d==1){
		for(int i=1;i<=n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
void Try(int u,int a[]){
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			b[u]=i;
			vs[i]=true;
			if(u==m) in(a);
			else Try(u+1,a);
			vs[u]=false;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>m;
		int a[m];
		for(int i=1;i<=m;i++){
		cout<<a[i];
	}
	Try(1,a);
	}
}
