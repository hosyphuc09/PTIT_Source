#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long power(int n,int k){
	if(k==0) return 1;
	long long x=power(n,k/2);
	if(k%2==0) return x*x%mod;
	else return n*(x*x%mod)%mod;
}
int main(){
	int t;cin>>t;
	while(t--){
		string n,m;
		cin>>n>>m;
		long long sum1=0,sum2=0;
		for(int i=0;i<n.size();i++){
			if(n[i]=='1'){
				
				sum1=(sum1+power(2,n.size()-i-1))%mod;
			}
		}
		for(int i=0;i<m.size();i++){
			if(m[i]=='1'){
				
				sum2=(sum2+power(2,m.size()-i-1))%mod;
			}
		}
		cout<<(sum1%mod)*(sum2%mod)%mod<<endl;
	}
	return 0;
}
