#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	stack<char> st;
	for(char x:s){
		if(x==')'){
			bool res=false;
			while(!st.empty()&&st.top()!='('){
				char top=st.top();
				
				if(top=='+'||top=='-'||top=='*'||top=='/'){
					res=true;
				}
				st.pop();
				}
				if(!st.empty()) st.pop();
				if(!res) return true;
			
		}
		else st.push(x); 
	}
	return false;
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(check(s)) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
