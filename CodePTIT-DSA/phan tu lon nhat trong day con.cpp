#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-k+1;i++){
			int r=i;
			int m=i;
			for(int j=i+1;j<r+k;j++){
				if(a[j]>a[m]) m=j;
			}
			cout<<a[m]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
