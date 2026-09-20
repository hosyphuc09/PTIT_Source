#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[93];
		a[1]=1;
		a[2]=1;
		int k=2;
		if(n==2) cout<<"1"<<endl;
		if(n==1) cout<<"0"<<endl;
		bool f=false;
		for(long long i=3;i<=92;i++){
			a[i]=a[i-1]+a[i-2];
			k++;
			if(k==n){
				cout<<a[i]<<endl;
				f=true;
				break;
			}
			if(f) break;
		}
	}
}