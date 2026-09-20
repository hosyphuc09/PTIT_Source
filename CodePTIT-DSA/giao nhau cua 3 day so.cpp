#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z;
		cin>>x>>y>>z;
		vector<long long> a(x),b(y),c(z);
		set<long long> s,l,res;
		int d=0;
		for(int i=0;i<x;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		for(int i=0;i<y;i++){
			cin>>b[i];
			if(s.find(b[i])!=s.end()) l.insert(b[i]);
		}
		for(int i=0;i<z;i++){
			cin>>c[i];
			if(l.find(c[i])!=l.end()){
			res.insert(c[i]);
		}}
		if(res.empty()){
			cout<<"-1"<<endl;
		}else{
			for(auto q:res){
				cout<<q<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
