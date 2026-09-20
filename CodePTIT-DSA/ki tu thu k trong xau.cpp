#include <bits/stdc++.h>
using namespace std;
char xet(int n,long long k){
	long long res=(1LL<<(n-1));
	if(k==1) return 'A';
	if(k==res){
		return 'A'+(n-1);
	}
	if(k<res){
		return xet(n-1,k);
	}else{
		return xet(n-1,k-res);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		cout<<xet(n,k)<<endl;
	}
	return 0;
}
