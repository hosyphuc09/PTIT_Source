#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<vector<int>> res;
		vector<int> v;
		v=a;
		res.push_back(a);
		while(true){
			vector<int> c;
			for(int i=0;i<v.size()-1;i++){
				c.push_back(v[i]+v[i+1]);
			}
			res.push_back(c);
			v=res.back();
			if(v.size()==1) break;
		}
		for(int i=0;i<res.size();i++){
			cout<<"[";
			for(auto x:res[i]){
				cout<<x<<" ";
			}
			cout<<"]"<<endl;
		}
	}
}
