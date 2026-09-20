#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string a,b;
		getline(cin,a);
		getline(cin,b);
		set<string> s1,s2;
		stringstream ss1(a),ss2(b);
		string r,l;
		while(ss1>>r){
			s1.insert(r);
		}
		while(ss2>>l){
			s2.insert(l);
		}
		for(string x:s1){
			if(s2.find(x)==s2.end()){
				cout<<x<<" ";
			}
		}
		cout<<endl;
	}
}
