#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> a;
vector<string> b;
void in(){
	for(auto x:a){
		cout<<x;
	}
	cout<<"\n";
}
void Try(int m){
	for(int i=0;i<b.size();i++){
		a[m]=b[i];
		if(m==n-1) in();
		else Try(m+1);
	}
}
int main(){
	cin>>n;
	a.resize(n);
	set<string> s;
	for(int i=1;i<=3;i++){
		string k;
		cin>>k;
		s.insert(k);
	}
	for(auto x:s){
		b.push_back(x);
	}
	Try(0);
}
