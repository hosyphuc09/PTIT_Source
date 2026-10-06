#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("DT.INP");
	ofstream cout("DT.OUT");
	int t,n;
	cin>>t>>n;
	int a[105][105];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			int cnt=0;
			for(int j=1;j<=n;j++){
				cnt+=a[i][j];
			}
			cout<<cnt<<" ";
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
		int k=res.size();
		int b[105][105]={0};
		for(int i=1;i<=k;i++){
			int u=res[i-1].first;
			int v=res[i-1].second;
			b[u][i]=1;
			b[v][i]=1;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=k;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
