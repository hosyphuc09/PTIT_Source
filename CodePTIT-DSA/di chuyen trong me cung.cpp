#include <bits/stdc++.h>
using namespace std;
int n;
int a[10][10];
vector<string> res;
void Try(int i,int j,string s){
	if(i==n-1&&j==n-1){
		res.push_back(s);
		return;
	}
	
	if(i+1<n&&a[i+1][j]==1){
		Try(i+1,j,s+"D");
	}
	if(j+1<n&&a[i][j+1]==1){
		Try(i,j+1,s+"R");
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			cin>>a[i][j];}
		}
		res.clear();
		if(a[0][0]==0||a[n-1][n-1]==0){
			cout<<"-1"<<endl;
			continue;
		}
		Try(0,0,"");
		if(res.empty()){
			cout<<"-1"<<endl;
		}
		else{
			for(auto x:res){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
