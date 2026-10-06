#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("DT.INP");
	ofstream cout("DT.OUT");
	int t;
	cin>>t;
	int n;cin>>n;
	int a[105][105];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			int deg=0;
			for(int j=1;j<=n;j++){
				deg+=a[i][j];
			}
			cout<<deg<<" ";
		}
		cout<<"\n";
	}else if(t==2){
		vector<pair<int,int>> res;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i][j]==1){
					res.push_back({i,j});
				}
			}
		}
		cout<<n<<" "<<res.size()<<"\n";
		for(auto x:res){
			cout<<x.first<<" "<<x.second<<"\n";
		}
	}
	return 0;
}
