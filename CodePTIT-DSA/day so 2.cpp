#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<vector<int>> res;
	while(true){
		res.push_back(a);
		vector<int> b;
		if(a.size()==1) break;
		for(int i=0;i<a.size()-1;i++){
			int x=a[i];
			int y=a[i+1];
			b.push_back(x+y);
		}
		a=b;
	}
	for(int i=res.size()-1;i>=0;i--)
	{
		cout<<"[";
		for(int j=0;j<res[i].size();j++){
			cout<<res[i][j];
			if(j<res[i].size()-1) cout<<" ";}
		cout<<"] ";
	}
	cout<<endl;
}
return 0;
}
