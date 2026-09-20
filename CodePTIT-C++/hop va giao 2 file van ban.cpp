#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1("DATA1.in");
	ifstream f2("DATA2.in");
	string s;
	set<string> hop, set1, giao;
	while(f1>>s){
		hop.insert(s);
		set1.insert(s);
	}
	while(f2>>s){
		hop.insert(s);
		if(set1.count(s)){
			giao.insert(s);
		}
	}
	for(auto x:hop){
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x:giao){
		cout<<x<<" ";
	}
	cout<<endl;
	f1.close();
	f2.close();
	return 0;
}
