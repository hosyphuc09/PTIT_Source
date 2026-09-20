#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
bool check(string c){
	return c=="+"||c=="-"||c=="*"||c=="/";
}
int main(){
	int t; cin>>t;
	while(t--){
		int n;cin>>n;
		stack<long long> st;
		vector<string> a;
		for(int i=0;i<n;i++){
			string k;
			cin>>k;
			a.push_back(k);
		}
		for(string c:a){
			
			if(check(c)){
				long long x=st.top();st.pop();
				long long y=st.top();st.pop();
				long long tmp;
				if(c=="+"){
					tmp=x+y;
					st.push(tmp);
				}else if(c=="-"){
					tmp=y-x;
					st.push(tmp);
				}else if(c=="*"){
					tmp=x*y;
					st.push(tmp);
				}else if( c=="/"){
					tmp=y/x;
					st.push(tmp);
				}
			}else st.push(stoll(c));
		}
		cout<<st.top()<<"\n";
	}
	return 0;
}
