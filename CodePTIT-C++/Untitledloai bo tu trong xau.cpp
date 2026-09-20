#include <bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	stringstream ss(a);
	string token, r="";
	while(ss>>token){
		if(token!=b){
			if(!r.empty())
			r+=" ";
			r+=token;
		}
	}
	cout<<r<<endl;
}
