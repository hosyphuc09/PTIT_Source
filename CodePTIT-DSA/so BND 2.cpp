#include <bits/stdc++.h>
using namespace std;
string check(int n){
	queue<string> q;
		q.push("1");
		while(!q.empty()){
			string top=q.front();
			q.pop();
			int mod=0;
			for(char c:top){
				mod=(mod*10+(c-'0'))%n;
			}
			if(mod==0) return top;
			q.push(top+'0');
			q.push(top+'1');
}}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<check(n)<<"\n";
		
	}
	return 0;
}
