#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s;cin>>s;
		priority_queue<int> q;
		map<char,int> mp;
		for(auto c:s){
			mp[c]++;
		}
		for(auto x:mp){
			q.push(x.second);
		}
		long long sum=0;
		while(k--&&!q.empty()){
			int m=q.top();
			q.pop();
			
			m--;
			if(m>0) q.push(m);
			
		}
		while(!q.empty()){
			int r=q.top();
			q.pop();
			sum+=1LL*r*r;
		}
		cout<<sum<<"\n";
}
return 0;
}
