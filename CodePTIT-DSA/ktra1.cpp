#include <bits/stdc++.h>
using namespace std;
void Try(string s,int n){
	if(s.size()==n){
		cout<<s;
		return;
	}
	Try(s+"A",n);
	cout<<",";
	Try(s+"B",n);
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		Try("",n);
		cout<<endl;
	}
	return 0;
}
