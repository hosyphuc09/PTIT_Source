#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
long long power(long long n,long long k){
	if(k==0) return 1;
	long long x=power(n,k/2);
	if(k%2==0) return x*x%mod;
	return n*(x*x%mod)%mod;
}
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		long long r=0,l=n;
		while(l>0){
			int k=l%10;
			r=r*10+k;
			l/=10;
		}
		cout<<power(n, r)<<endl;
	}
	return 0;
}
