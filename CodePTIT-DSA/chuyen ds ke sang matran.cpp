#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	cin.ignore();
	vector<vector<int>> res(n+1);
	for(int i=1;i<=n;i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		int t;
		while(ss>>t){
			res[i].push_back(t);
		}
	}
	int a[1005][1005]={0};
	for(int i=1;i<=n;i++){
		for(int j=0;j<res[i].size();j++){
			a[i][res[i][j]]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
} 
