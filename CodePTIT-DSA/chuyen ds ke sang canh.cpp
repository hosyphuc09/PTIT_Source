#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	cin.ignore();
	vector<pair<int,int>> res;
	for(int i=1;i<=n;i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		int t;
		while(ss>>t){
			if(t>i) res.push_back({i,t});
		}
	}
	sort(res.begin(),res.end());
	for(int i=0;i<res.size();i++){
		cout<<res[i].first<<" "<<res[i].second<<endl;
	}
}
