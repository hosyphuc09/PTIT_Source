#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+9;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> a(n),b(m);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	vector<int> cnt(n);
	for(int i=0;i<n;i++){
		cnt[i]=lower_bound(b.begin(),b.end(),a[i])-b.begin();
	}
	vector<long long> dp(k+1,0);
	dp[0]=1;
	for(int i=0;i<n;i++){
		for(int j=k;j>=1;j--){
			if(cnt[i]>=j){
				dp[j]=(dp[j]+dp[j-1]*(cnt[i]-(j-1))%mod)%mod;
			}
		}
	}
	cout<<dp[k]<<endl;
	return 0;
}

