#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s;cin>>s;
		map<char,int> m;
		for(auto c:s){
			m[c]++;
		}
		priority_queue<int> q;
		for(auto x:m){
			q.push(x.second);
		}
		while(k--&& !q.empty()){
			int top=q.top();
			q.pop();
			top--;
			if(top>0) q.push(top);
		}
		long long sum=0;
		while(!q.empty()){
			long long x=q.top();
			q.pop();
			sum+=x*x;
		}
		cout<<sum<<endl;
	}
	return 0;
}
