#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void check(int n){
	queue<string> q;
	q.push("6");
	q.push("8");
	while(!q.empty()){
		string top=q.front();
		q.pop();
		if(top.size()<=n){
			v.push_back(top);
		}else if(top.size()>n) return;
		q.push(top+"6");
		q.push(top+"8");
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		v.clear();
		check(n);
		
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
