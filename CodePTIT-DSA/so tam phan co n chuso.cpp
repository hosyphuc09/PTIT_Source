#include <bits/stdc++.h>
using namespace std;
int n;
int a[105];
vector<int> b;
bool chuaxet[105];
void in(){

		for(int i=1;i<=n;i++){
			cout<<a[i];
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
	set<int> s;
	for(int i=1;i<=3;i++){
		int x;
		cin>>x;
		s.insert(x);
	}
	for(auto x:s){
		b.push_back(x);
	}
	
	Try(0);
	return 0;
}
