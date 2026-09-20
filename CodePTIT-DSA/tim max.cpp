#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long x=0;
		for(int i=0;i<n;i++){
			x+=(a[i]*i)%mod;
		}
		cout<<x%mod<<endl;
	}
	return 0;
}
