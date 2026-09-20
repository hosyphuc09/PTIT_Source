#include <bits/stdc++.h>
using namespace std;
string check( string s){
	string k=s;
	transform(k.begin(),k.end(),k.begin(),::tolower);
	if(!k.empty()) k[0]=toupper(k[0]);
	return k;
}
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string t;
	vector<string> tu;
	while(ss>>t){
		tu.push_back(t);
	
	}
	
	string ten = tu.back();
	tu.pop_back();
	for(int i=0;i<tu.size();i++){
		tu[i]=check(tu[i]);
	}
	transform(ten.begin(),ten.end(),ten.begin(),:: toupper);
	for(int i=0;i<tu.size();i++){
		cout<<tu[i];
		if(i<tu.size()-1) cout<<" ";
	}
	cout<<", "<<ten<<endl;
}
