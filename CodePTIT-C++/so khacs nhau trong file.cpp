#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream f;
	f.open("DATA.in");
	short s;
	map<short,short> mp;
	while(f>>s){
		mp[s]++;
	}
	for(auto m:mp){
		cout<<m.first<<" "<<m.second<<endl;
	}
	f.close();
	return 0;
}
