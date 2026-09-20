#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;cin>>t;
     while(t--){
     	int n,k;cin>>n>>k;
     	int a[n][n];
     	for(int i=0;i<n;i++){
     		for(int j=0;j<n;j++){
     			cin>>a[i][j];
			 }
		 }
		 int b[n*n];
		 int d=0;
		 for(int i=0;i<n;i++){
		 	for(int j=0;j<n;j++){
		 		b[d++]=a[i][j];
			 }
		 }
		 sort(b,b+d);
		 cout<<b[k-1]<<endl;;
	 }
}
