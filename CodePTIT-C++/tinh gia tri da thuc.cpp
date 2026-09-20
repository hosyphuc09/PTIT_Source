#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main(){
	int t;cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
			
		}
		long long p=0;
	
		for(int i=0;i<n;i++){
			p=(p*x+a[i])%MOD;
		}
		cout<<p<<endl;
	}
}
