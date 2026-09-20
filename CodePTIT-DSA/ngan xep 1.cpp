#include <bits/stdc++.h>
using namespace std;
int main(){
	stack<int> st;
	string s;
	while(cin>>s){
		if(s=="push"){
			int x;
			cin>>x;
			st.push(x);
		} else if(s=="pop"){
			if(!st.empty()) st.pop();
		}else if(s=="show"){
			if(st.empty()) cout<<"empty\n";
			else{
				stack<int> temp=st;
				vector<int> a;
				while(!temp.empty()){
					a.push_back(temp.top());
					temp.pop();
				}
				reverse(a.begin(),a.end());
				for(auto x:a){
					cout<<x<<" ";
				}
				cout<<endl;
			}
		}
	}
}
