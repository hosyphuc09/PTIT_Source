#include <bits/stdc++.h>
using namespace std;
bool check(string c){
	return c=="+"||c=="-"||c=="*"||c=="/";
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		stack<long long> st;
		vector<string> v;
		for(int i=0;i<n;i++){
			string s;
			cin>>s;
			v.push_back(s);
		}
		for(int i=v.size()-1;i>=0;i--){
			string r=v[i];
			if(check(r)){
				long long x=st.top();st.pop();
				long long y=st.top();st.pop();
				if(r=="+") st.push(x+y);
				else if(r=="-") st.push(x-y);
				else if(r=="*") st.push(x*y);
				else if(r=="/") st.push(x/y);
			}else st.push(stoll(r));
		}
		cout<<st.top()<<"\n";
	}
	return 0;
}
