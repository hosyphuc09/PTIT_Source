#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
	 int n,m;
	 cin>>n>>m;
	 int a[n],b[m];
	 for(int i=0;i<n;i++){
	 	cin>>a[i];
	 }
	 for(int i=0;i<m;i++){
	 	cin>>b[i];
	 }
	int c[n+m]={0};
	int d=0;
	 for(int i=0;i<n;i++){
	c[d++]=a[i];}
	 	for(int i=0;i<m;i++){
		 
	 c[d++]=b[i];
	 }
	 sort(c,c+d);
	 for(int i=0;i<d;i++){
	 	cout<<c[i]<<" ";
	 }
	 cout<<endl;
	}
}
