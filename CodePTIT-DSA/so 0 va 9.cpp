#include <bits/stdc++.h>
using namespace std;
int stoi(string s,int n){
	int res=0;
	for(char c:s){
		res=(res*10+(c-'0'))%n;
	}
	return res;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		queue<string> q;
		q.push("9");
		while(true){
			string top=q.front();
			q.pop();
			string x=top+"0";
			string y=top+"9";
		if(stoi(top,n)==0){
			cout<<top<<"\n";
			break;
		}
		q.push(x);
		q.push(y);
	}}
	return 0;
}
