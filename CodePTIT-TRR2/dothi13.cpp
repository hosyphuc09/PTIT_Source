#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("DT.INP");
	ofstream cout("DT.OUT");
	int t,n;
	cin>>t>>n;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	vector<int> degin(n+1);
	vector<int> degout(n+1);
	vector<pair<int,int>> res;
	int d=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1){
				degin[j]++;
				degout[i]++;
				res.push_back({i,j});
				d++;
			}
		}
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			cout<<degin[i]<<" "<<degout[i]<<endl;
		}
	}
	else if(t==2){
		cout<<n<<" "<<d<<endl;
		int a[105][105]={0};
		for(int i=0;i<d;i++){
			int u=res[i].first;
			int v=res[i].second;
			
				a[u][i+1]=1;
				a[v][i+1]=-1;
			
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=d;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
