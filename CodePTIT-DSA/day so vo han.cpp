#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long check(long long n){
	long long a=0;
	long long b=1;
	for(long long i=2;i<=n;i++){
		long long c=(a+b)%mod;
		a=b;
		b=c;
	}
	return b;
}
int main(){

		int t;
		cin>>t;
		while(t--){
			long long n;cin>>n;
			cout<<check(n)<<endl;
		}
	
	return 0;
}
