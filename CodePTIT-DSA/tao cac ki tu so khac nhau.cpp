#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<string> s;
vector<string> res;
void Try(int m){
	if(res.size()==k){
		for(auto x:res){
			cout<<x;
		}
		cout<<endl;
	}
	for(int i=m;i<n;i++){
		res.push_back(s[i]);
		Try(i+1);
		res.pop_back();
	}
}
int main(){
	cin>>n>>k;
	
	for(int i=0;i<n;i++){
		string  x;cin>>x;
		s.push_back(x);
	}
	Try(0);
	return 0;
}
