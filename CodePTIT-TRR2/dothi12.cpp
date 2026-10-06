#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t>>n;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	vector<pair<int,int>> res(n+1);
	vector<int> degin(n+1);
	vector<int> degout(n+1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1){
				degin[i]++;
				degout[j]++;
				res.push_back({i,j});
			}
		}
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			cout<<degin[i]<<" "<<degout[i]<<endl;
		}
	}
	else if(t==2){
		cout<<n<<" "<<res.size()<<endl;
		for(int i=1;i<=n;i++){
			for(auto x:res[i]){
				cout<<x.first<<" "<<x.second<<endl;
			}
		}
	}
}
