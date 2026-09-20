#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int power(long long n,long long k){
	if(k==0) return 1;
    long long x=power(n,k/2);
    if(k%2==0) return x*x%mod;
    else return n*(x*x%mod)%mod;
}
int main(){
	long long n,k;
	while(true){
		cin>>n>>k;
		if(n==0&&k==0) break;
		cout<<power(n,k)<<endl;
	}
	return 0;
}
