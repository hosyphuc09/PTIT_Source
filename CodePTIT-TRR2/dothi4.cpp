#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("DT.INP");
	ofstream cout("DT.OUT");
	int t,n,m;
	cin>>t>>n>>m;
	vector<pair<int,int>> res;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		res.push_back({x,y});
	}
	if(t==1){
		vector<int> b(n+1,0);
		
		for(auto x:res){
			b[x.first]++;
			b[x.second]++;
		}
		for(int i=1;i<=n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
	else if(t==2){
		int a[105][105]={0};
		for(int i=0;i<m;i++){
			int u=res[i].first;
			int v=res[i].second;
			a[u][v]=1;
			a[v][u]=1;
		}
		cout<<n<<endl;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
