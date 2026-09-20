#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack<char> st;
		int res=0;
		for( char c:s){
			if(c=='('){
				st.push(c);
			}else{
				if(!st.empty()){
					st.pop();
					res+=2;
				}
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
