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
		stack<int> st;
		for(int i=0;i<s.size();i++){
			char c=s[i];
			if(check(c)){
				int x=st.top();st.pop();
				int y=st.top();st.pop();
				int tmp;
				if(c=='+'){
					 tmp=x+y;
					st.push(tmp);
				}else if(c=='-'){
					 tmp=y-x;
					 st.push(tmp);
				}else if(c=='*'){
					tmp=x*y;
					st.push(tmp);
				}else if(c=='/'){
					tmp=y/x;
					st.push(tmp);
				}
			}else{
				st.push(c-'0');
			}
		}
		cout<<st.top()<<"\n";
	}
	return 0;
}
