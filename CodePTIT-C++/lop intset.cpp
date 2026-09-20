#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1("DATA.in");
	int n,m;
	f1>>n>>m;
	vector<int> a(n),b(m);
	for(int i=0;i<n;i++) f1>>a[i];
	for(int i=0;i<m;i++) f1>>b[i];
	set<int> A(a.begin(),a.end());
	set<int> B(b.begin(),b.end());
	for(auto x:A){
		if(B.count(x)) cout<<x<<" ";
	}
	cout<<endl;
	f1.close();
	return 0;
}
