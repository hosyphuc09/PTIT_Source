#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int x;cin>>x;
	v.erase(remove(v.begin(),v.end(),x),v.end());
	for(auto k:v){
		cout<<k<<" ";
	}
	cout<<endl;
	return 0;
}
