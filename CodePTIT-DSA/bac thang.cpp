#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;

int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<long long> dp(n+1);
		dp[0]=1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=k;j++){
				if(i-j>=0){
					dp[i]=(dp[i]+dp[i-j])%mod;
				}
			}
			cout<<dp[n]<<endl;
		}
	}
	return 0;
}
