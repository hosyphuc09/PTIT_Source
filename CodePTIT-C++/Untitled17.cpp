#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[500][500],sum=0;
		cin>>n; 
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
			
				
					sum+=a[i][j]; 
				}
				
			}
		
		cout<<sum<<endl; 
	}}

