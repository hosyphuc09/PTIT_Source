#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
	long long n;cin>>n;
	long long a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	int d=0;
	bool f=false;
	for(int i=0;i<n;i++){
		if(a[i]!=b[0])d++;
		if(a[i]==b[0]){
			f=true;
			break;
		}
	}
	cout<<d<<endl;}
	return 0;
}
