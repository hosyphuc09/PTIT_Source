#include <bits/stdc++.h>
using namespace std;
int mod=123456789;
long long power(int n,long long k){
	if(k==0) return 1;
	long long x=power(n,k/2);
	if(k%2==0) return x*x%mod;
	else return n*(x*x%mod)%mod;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long x=n-1;
		cout<<power(2,x)<<endl;
	}
	return 0;
}
