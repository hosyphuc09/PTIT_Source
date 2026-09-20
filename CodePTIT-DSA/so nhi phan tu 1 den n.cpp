#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		queue<string> q;
		q.push("1");
		for(int i=1;i<=n;i++){
			string s=q.front();
			cout<<s<<" ";
			string x=s+"0";
			string y=s+"1";
			q.push(x);
			q.push(y);
			q.pop();
		}
		cout<<endl;
	}
	return 0;
}
