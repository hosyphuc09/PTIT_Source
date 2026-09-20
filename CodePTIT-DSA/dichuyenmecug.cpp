#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> res;
int a[105][105];
void Try(int i,int j,string s){
	if(i==n-1&&j==n-1){
		res.push_back(s);
	}
	
	if(i<n&&a[i+1][j]==1){
		Try(i+1,j,s+'D');
	}
	if(i<n&&a[i][j+1]==1){
		Try(i,j+1,s+'R');
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		res.clear();
		string s;
		Try(0,0," ");
		for(auto x:res){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
