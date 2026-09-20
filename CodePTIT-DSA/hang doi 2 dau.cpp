#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	deque<int> dq;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		if(s=="PUSHBACK"){
			int x;cin>>x;
			dq.push_back(x);
		}else if(s=="PUSHFRONT"){
			int y; cin>>y;
			dq.push_front(y);
		}else if(s=="PRINTFRONT"){
			if(dq.empty()) cout<<"NONE\n";
			else cout<<dq.front()<<"\n";
		}else if(s=="PRINTBACK"){
			if(dq.empty()) cout<<"NONE\n";
			else cout<<dq.back()<<"\n";
		}else if(s=="POPFRONT"){
			if(!dq.empty()) dq.pop_front();
		}else if(s=="POPBACK"){
			if(!dq.empty()) dq.pop_back();
		}
	}
	return 0;
}
