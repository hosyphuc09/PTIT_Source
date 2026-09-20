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
	long long a;
	long long b;
	while(true){
		cin>>a>>b;
		if(a==0&&b==0) break;
		cout<<power(a,b)<<endl;
	}
	return 0;
}
