#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int k,n;cin>>k>>n;
		int a[k][n];
		for(int i=0;i<k;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		set<int> s;
		for(int i=0;i<k;i++){
			for(int j=0;j<n;j++){
				s.insert(a[i][j]);
			}
		}
		for(int x:s){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
