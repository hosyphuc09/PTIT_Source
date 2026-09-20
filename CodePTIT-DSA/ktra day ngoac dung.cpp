#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	stack<char> st;
	for(char c:s){
		if(c=='('||c=='['||c=='{'){
			st.push(c);
		}else{
			if(st.empty()) return false;
			char top=st.top();
			st.pop();
			if((c==')' &&top!='(')||(c==']'&&top!='[')||(c=='}'&&top!='{')){
				return false;
			}
				}
	}
	return st.empty();
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)) cout<<"true\n";
		else cout<<"false\n";
	}
	return 0;
}
