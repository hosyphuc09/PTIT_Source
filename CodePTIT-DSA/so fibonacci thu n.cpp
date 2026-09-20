#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;

long long f[1000000000];
long long check(long long n){
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=n;i++){
		f[i]=f[i-1]+f[i-2];
	}
	long long r=f[n]%mod;
	return r;
}
int main(){
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long k=check(n);
		cout<<k<<endl;
	}
	return 0;
}
