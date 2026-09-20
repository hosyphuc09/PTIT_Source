#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		priority_queue<long long,vector<long long>,greater<long long>> q;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			q.push(a[i]);
		}
		long long sum=0;
		while(q.size()>1){
			long long x=q.top();
			q.pop();
			long long y=q.top();
			q.pop();
			long long z=(x+y)%mod;
			sum=(sum%mod+z)%mod;
			q.push(z);
			
		}
		cout<<sum<<endl;
	}
	return 0;
}
