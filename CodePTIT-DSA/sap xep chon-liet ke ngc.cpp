#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<vector<int>> res;
	int d=0;
	for(int i=0;i<n-1;i++){
		int m=i;
		d++;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[m]) m=j;
		}
		swap(a[i],a[m]);
		res.push_back(a);
	}
	for(int i=res.size()-1;i>=0;i--){
		cout<<"Buoc "<<d<<": ";
		d--;
		for(auto x:res[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
