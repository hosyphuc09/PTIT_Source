#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
	if((pow(a.first,2)+pow(a.second,2))!=(pow(b.first,2)+pow(b.second,2))){
		return pow(a.first,2)+pow(a.second,2)<pow(b.first,2)+pow(b.second,2);
	}else{
		if(a.first!=b.first){
			return a.first<b.first;
		}else{
			return a.second<b.second;
		}
	}
}
int main(){
	int n;cin>>n;
	pair<int,int> a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout<<a[i].first<<" "<<a[i].second<<endl;
	}
    return 0;
}
