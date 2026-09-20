#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long n;
pair<long long,long long> fib(long long n){
	if(n==0) return {0,1};
	auto p=fib(n>>1);
	long long a=p.first;
	long long b=p.second;
	long long c=(a*((2*b)%mod-a+mod))%mod;
	long long d=((a*a)%mod+(b*b)%mod)%mod;
	if(n%2==0){
		return {c,d};
	}else return {d,(c+d)%mod};
}
int main(){
	int t;cin>>t;	
	while(t--){
		cin>>n;
		cout<<fib(n).first<<endl;
	}
	return 0;
}
