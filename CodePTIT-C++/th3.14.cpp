#include <bits/stdc++.h>
using namespace std;
void check(int a[][100],int n){
	for(int j=0;j<n;j++){
		cout<<a[0][j];
		if(j!=n-1) cout<<" ";
	}
	cout<<endl;
	for(int i=1;i<n-1;i++){
		cout<<a[i][0]<<" "<<a[i][n-1]<<endl;
	}
	if(n>1){
		for(int j=0;j<n;j++){
			cout<<a[n-1][j];
			if(j!=n-1) cout<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[100][100];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		check(a,n);
	}
	return 0;
}
