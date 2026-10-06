#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("DT.INP");
	ofstream cout("DT.OUT");
	int t,n;
	cin>>t>>n;
	vector<int> degin(n+1);
	vector<int> degout(n+1);
	vector<pair<int,int>> res;
	int d=0;
	for(int i=0;i<n;i++){
		int k;cin>>k;
		for(int j=0;j<k;j++){
			int x;cin>>x;
			d++;
			res.push_back({i+1,x});
		}
	}
	int a[105][105]={0};
	for(int i=0;i<d;i++){
		int u=res[i].first;
		int v=res[i].second;
		degin[v]++;
		degout[u]++;
		a[u][i]=1;
		a[v][i]=-1;
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			cout<<degin[i]<<" "<<degout[i]<<endl;
		}
	}
	else if(t==2){
		cout<<n<<" "<<d<<endl;
		for(int i=1;i<=n;i++){
			for(int j=0;j<d;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
