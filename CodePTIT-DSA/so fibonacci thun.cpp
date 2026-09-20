#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long fibon(long long n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	long long a=0,b=1;
	for(int i=2;i<=n;i++){
		long long c=(a+b)%mod;
		a=b;
		b=c;
	}
	return b;
}
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		long long f[n+1];
		
		cout<<fibon(n)<<endl;
	}
	return 0;
}
