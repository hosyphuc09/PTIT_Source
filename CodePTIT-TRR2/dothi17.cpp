#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("DT.INP");
	ofstream cout("DT.OUT");
	int t,n,m;
	cin>>t>>n>>m;
	vector<int> degin(n+1);
	vector<int> degout(n+1);
	vector<pair<int,int>> res;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		degin[x]++;
		degout[y]++;
		res.push_back({x,y});
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			cout<<degout[i]<<" "<<degin[i]<<endl;
		}
	}
	else if(t==2){
		int a[105][105]={0};
		for(int i=0;i<m;i++){
			int u=res[i].first;
			int v=res[i].second;
			a[u][i]=1;
			a[v][i]=-1;
		}
		cout<<n<<" "<<m<<endl;
		for(int i=1;i<=n;i++){
			for(int j=0;j<m;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
