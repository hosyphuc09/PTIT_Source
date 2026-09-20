#include <bits/stdc++.h>
using namespace std;
string check(int n){
	queue<string> q;
	q.push("1");
	while(!q.empty()){
		string s=q.front();
		q.pop();
		int mod =0;
		for(char c:s){
			mod=(mod*10+(c-'0'))%n;
		}
		if(mod==0) return s;
		q.push(s+"0");
		q.push(s+"1");
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<check(n)<<endl;
	}
}
