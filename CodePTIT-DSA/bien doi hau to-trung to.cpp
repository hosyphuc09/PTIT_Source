#include <bits/stdc++.h>
using namespace std;
bool check(char c){
	return c=='+'||c=='-'||c=='*'||c=='/';
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<string> st;
		for(char c:s){
			if(check(c)){
				string x=st.top();st.pop();
				string y=st.top();st.pop();
				string tmp="("+y+c+x+")";
				st.push(tmp);
			}else{
				st.push(string(1,c));
			}
		}
		cout<<st.top()<<"\n";
	}
	return 0;
}
