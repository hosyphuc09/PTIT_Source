#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		int k=s.size();
		cin>>s;
		vector<int> f(26,0);
		for( char c:s){
			f[c-'a']++;
		} 
		int m=*max_element()
}
