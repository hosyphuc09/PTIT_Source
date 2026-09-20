#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<vector<int>> res(n+1);
		for(int i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			res[x].push_back(y);
			res[y].push_back(x);
			
		}
		for(int i=1;i<res.size();i++){
			cout<<i<<": ";
			for(auto x:res[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
		
	}
	return 0;
}
