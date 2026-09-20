#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		set<int> hop;
		set<int> giao;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
			hop.insert(a[i]);
			giao.insert(a[i]);
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			hop.insert(b[i]);
		}
		for(auto x:hop){
			cout<<x<<" ";
		}
		cout<<endl;
		for(int i=0;i<m;i++){
			if(giao.find(b[i])!=giao.end()){
				cout<<b[i]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
