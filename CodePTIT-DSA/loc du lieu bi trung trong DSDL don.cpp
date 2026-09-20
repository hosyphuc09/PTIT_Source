#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<int> r;
	int m[100]={0};
	for(int i=0;i<n;i++){
		if(m[v[i]]==0){
			r.push_back(v[i]);
			m[v[i]]=1;
		}
	}
	for(auto k:r){
		cout<<k<<" ";
	}
	cout<<endl;
	return 0;
} 
