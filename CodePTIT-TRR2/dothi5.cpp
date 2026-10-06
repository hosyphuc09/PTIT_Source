#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m;
	cin>>t>>n>>m;
	int a[105][105];
	vector<pair<int,int>> res;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		res.push_back({x,y});
	}
	if(t==1){
		vector<int> b(105);
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
		vector<vector<int>> v(105);
		for(auto x:res){
			v[x.first].push_back(x.second);
			v[x.second].push_back(x.first);
		}
		cout<<n<<endl;
		for(int i=1;i<=n;i++){
			cout<<v[i].size()<<" ";
			for(auto x:v[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
