#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	queue<int> q;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int x;cin>>x;
			q.push(x);
		}else if(s=="POP"){
			if(!q.empty()) q.pop();
		}else if(s=="PRINTFRONT"){
			if(q.empty()) cout<<"NONE\n";
			else cout<<q.front()<<"\n";
		}
	}
	return 0;
}
