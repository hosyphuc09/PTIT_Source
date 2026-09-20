#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1,f2;
	f1.open("DATA1.in");
	f2.open("DATA2.in");
	string s;
	set<string> xethop, set1, xetgiao;
	while(f1>>s){
		xethop.insert(s);
		set1.insert(s);
	}
	while(f2>>s){
		xethop.insert(s);
		for(auto x:set1){
			if(x==s){
				xetgiao.insert(s);
			}
		}
	}
	for(auto x:xethop){
		cout<<x<<" ";
	}
	cout<<endl;
	for(auto x:xetgiao){
		cout<<x<<" ";
	}
	cout<<endl;
	f1.close();
	f2.close();
	return 0;
}
