#include <bits/stdc++.h>
using namespace std;
bool check(string s,string n){
	if(s.size()<n.size()) return true;
	if(s.size()>n.size()) return false;
	return s<=n;
}
int main(){
	int t;cin>>t;
	while(t--){
		string n;
		cin>>n;
		queue<string> q;
		q.push("1");
		int dem=0;
		while(!q.empty()){
			string top=q.front();
			q.pop();
			
			if(!check(top,n)) continue;
			dem++;
			q.push(top+"0");
			q.push(top+"1");
		}
		
		cout<<dem<<"\n";
	}
	return 0;
}
