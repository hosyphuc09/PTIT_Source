#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int r=a[0];
	vector<vector<int>> res;
	int d=0;
	for(int i=1;i<n;i++){
		vector<int> b;
		d++;
		int k=a[i];
		int j=i-1;
		while(j>=0&&a[j]>k){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
		for(int l=0;l<=i;l++){
			b.push_back(a[l]);
		}
		res.push_back(b);
	}
	for(int i=res.size()-1;i>=0;i--){
		cout<<"Buoc "<<d<<": ";
		d--;
		for(auto x:res[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	cout<<"Buoc 0: "<<r<<endl;
	return 0;
}
