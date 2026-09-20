#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
	set<char> s;
	for(int i=0;i<n;i++){
		string ss;
		cin>>ss;
		for(int j=0;j<ss.size();j++){
			s.insert(ss[j]);
		}
	}
		for(set<char>::iterator it=s.begin();it!=s.end();it++){
			cout<<*it<<" ";
		}
		
		cout<<endl;
	}
}
