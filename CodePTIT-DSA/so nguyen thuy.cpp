#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		queue<string> q;
		q.push("4");
		q.push("5");
		vector<string> res;
		while(res.size()<n){
			string s=q.front();q.pop();
			string rev=s;
			reverse(rev.begin(),rev.end());
			res.push_back(s+rev);
			q.push(s+"4");
			q.push(s+"5");
		}
		for(auto x:res){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
