#include <bits/stdc++.h>
using namespace std;
int check(string s,int n){
	int len=s.size();
	vector<vector<int>> dp(len+1,vector<int>(n,0));
	dp[0][0]=1;
	for(int i=1;i<=len;i++){
		int digit=s[i-1]-'0';
		for(int r=0;r<n;r++){
			dp[i][r]+=dp[i-1][r];
		}
		for(int r=0;r<n;r++){
			int k=(r*10+digit)%n;
			dp[i][k]+=dp[i-1][r];
		}
	}
	return dp[len][0]-1;
}
int main(){
	int t;cin>>t;
	while(t--){
		int m,n;
		string s;
		cin>>m>>n>>s;
		int r=check(s,n);
		cout<<r<<endl;
	}
	return 0;
}
