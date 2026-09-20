#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int c[n],d[n];
		for(int i=0;i<k;i++){
			cin>>c[i]>>d[i];
		}
	
			for(int i=0;i<k;i++){
				
			int sum=0;
			for(int j=c[i]-1;j<d[i];j++){
				sum+=a[j];
			}
			cout<<sum<<endl;
	}
	}
}
