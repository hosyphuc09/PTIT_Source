#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[105][105];
int d=0;
void Try(int i,int j){
	if(i==n-1&&j==m-1){
		d++;
	return;
	}
	if(j+1<m){
		Try(i,j+1);
	}
	if(i+1<n){
		Try(i+1,j);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}}
		d=0;
		Try(0,0);
		cout<<d<<endl;
	}
}
