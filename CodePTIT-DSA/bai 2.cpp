#include <bits/stdc++.h>
using namespace std;
const long long mod =1e9+7;
long long power(long long a,long long b){
	long long res=1;
	while(b){
		if(b%2) res=res*a%mod;
		a=a*a%mod;
		b/=2;
	}
	return res;
}
int main(){
	int n;cin>>n;
	cout<<power(3,n-1);
}
