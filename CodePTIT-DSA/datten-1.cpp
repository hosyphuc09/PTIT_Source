#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<string> c;
vector<string> st(105);
void in(){
	for(int i=1;i<=k;i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
}
void Try(int n,int m,int start){
	for(int i=start;i<=n;i++){
		c[m]=st[i];
		if(m==k) in();
		else Try(n,m+1,i+1);
	}
}
int main(){
	cin>>n>>k;
	set<string> set;
	cin.ignore();
	string s;
	getline(cin,s);
	stringstream ss(s);
	string t;
	while(ss>>t){
		set.insert(t);
	}
	int d=1;
	n=set.size();
		c.resize(k+1);
	for(string x:set){
	st[d++]=x;
	}
	Try(n,1,1);
}
