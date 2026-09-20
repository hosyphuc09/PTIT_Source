#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
     cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		unordered_map<char,int> f;
		for(char c : s){
			f[c]++;
		}
		string r="";
		for(char c : s){
			if(f[c]==1) r.push_back(c);
		}
		cout<<r<<endl;
	}
}
