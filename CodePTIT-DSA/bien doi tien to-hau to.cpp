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
		for(int i=s.size()-1;i>=0;i--){
			char c=s[i];
			if(check(c)){
				string x=st.top();st.pop();
				string y=st.top();st.pop();
				string tmp=x+y+c;
				st.push(tmp);
			}else{
				st.push(string(1,c));
			}
		}
		cout<<st.top()<<"\n";
	}
	return 0;
}
