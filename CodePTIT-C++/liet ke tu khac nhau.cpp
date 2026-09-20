#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream f;
	f.open("VANBAN.in");
	string s;
	set<string> se;
	while(f>>s){
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		se.insert(s);
	}
	for(auto x:se){
		cout<<x<<endl;
	}
	f.close();
	return 0;
}
