#include <bits/stdc++.h>
using namespace std;
long long xet(int n,long long k){
	long long res=(1LL<<(n-1));
	if(k==1) return 1;
	if(k==res) return n;
	if(k<res){
		return xet(n-1,k);
	}else return xet(n-1,k-res);
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		cout<<xet(n,k)<<endl;
	}
	return 0;
}
