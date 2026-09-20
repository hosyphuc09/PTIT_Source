#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n);
		vector<vector<int>> res;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int d=0;
		for(int i=0;i<n-1;i++){
			d++;
			for(int j=i+1;j<n;j++){
				if(a[j]<a[i]) swap(a[i],a[j]);
			}
			res.push_back(a);
		}
		for(int i=res.size()-1;i>=0;i--){
				cout<<"Buoc "<<d<<": ";
				d--;
			for(int x:res[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
