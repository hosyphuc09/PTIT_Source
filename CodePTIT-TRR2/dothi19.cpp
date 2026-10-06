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
		d++;
			int x;cin>>x;
			res.push_back({i+1,x});
		}
	}

	for(int i=0;i<d;i++){
		int u=res[i].first;
		int v=res[i].second;
		degin[u]++;
		degout[v]++;
		
		
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			cout<<degout[i]<<" "<<degin[i]<<endl;
		}
	}
	else if(t==2){
		cout<<n<<" "<<d<<endl;
		for(int i=0;i<d;i++){
			cout<<res[i].first<<" "<<res[i].second<<endl;
		
		}
	}
}
