#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m;
	cin>>t>>n>>m;
	int a[105][105];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j){
				a[i][j]=0;
			}else{
				a[i][j]=10000;
			}
		}
	}
	for(int i=1;i<=m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		a[x][y]=z;
		a[y][x]=z;
	} 
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
