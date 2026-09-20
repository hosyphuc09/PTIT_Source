#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1005];
bool vs[1005];
void in(){
	for(int i=1;i<=m;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int k){
	for(int i=a[k-1];i<=n-m+k;i++){
		
	
		a[k]=i;
		if(k==m) in();
		else Try(k+1);
		
	}
}
int main(){
	int t;cin>>t;
	while(t--){
	cin>>n>>m;
	memset(vs,false,sizeof(vs));
	Try(1);	
	}
}
