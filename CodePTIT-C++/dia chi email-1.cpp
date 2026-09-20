#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string t,k,l;
	int d=0;;
	while(ss>>t){
		l=t;
		transform(l.begin(),l.end(),l.begin(),::tolower);
		k[d++]=l[0];
	}
	cout<<l;
	for(int i=0;i<d-1;i++){
		cout<<k[i];
	}
	cout<<"@ptit.edu.vn";
	cout<<endl;
}

