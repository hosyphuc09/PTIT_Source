#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	set<string> s;
	for(int i=0;i<n;i++){
		string ss;
		getline(cin,ss);
		s.insert(ss);
	}
	cout<<s.size()<<endl;
	
	
}
