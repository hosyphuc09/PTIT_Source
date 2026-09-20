#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		long long x=stoll(s1,nullptr,2);
		long long y=stoll(s2,nullptr,2);
		cout<<(x*y)<<endl;
	}
	return 0;
}
