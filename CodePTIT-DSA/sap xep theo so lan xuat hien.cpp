#include <bits/stdc++.h>
using namespace std;
map<int,int> f;
int cmp(int a,int b){
	if(f[a]!=f[b]) return f[a]>f[b];
	return a<b;
}

int main(){
	int t;cin>>t; 
	while(t--){
		int n;cin>>n;
		vector<int> v(n);
		f.clear();
		for(int i=0;i<n;i++){
			cin>>v[i];
			f[v[i]]++;
		}
		sort(v.begin(),v.end(),cmp);
		for(auto x:v){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
