#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a,pair<int ,int> b){
	if(a.first==b.first){
		return a.second<b.second;
	}
	return a.first<b.first;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		vector<pair<int,int>> l;
		for(int i=0;i<n;i++){
			l.push_back({abs(x-a[i]),i});
		}
		stable_sort(l.begin(),l.end(),[](const pair<int,int>& a,const pair<int,int>& b){
			return a.first<b.first;});
			for(int i=0;i<n;i++){
				cout<<a[l[i].second];
				if(i!=n-1) cout<<" ";
			}
			cout<<endl;
	}
	return 0;
}
