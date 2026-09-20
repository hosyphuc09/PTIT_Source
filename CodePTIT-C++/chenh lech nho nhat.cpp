#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,a[100];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int m=INT_MAX;
		for(int i=0;i<n;i++){
			m=min(m,a[i]-a[i-1]);
		}
		cout<<m<<endl;
	}}
