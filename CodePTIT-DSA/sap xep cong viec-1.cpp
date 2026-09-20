#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		int d=1;
		vector<pair<int,int>> c;
		for(int i=0;i<n;i++){
		c.push_back({b[i],a[i]});
		}
		sort(c.begin(),c.end());
		int finish=c[0].first;
		for(int i=1;i<n;i++){
			if(c[i].second>=finish){
				d++;
				finish=c[i].first;
			}
		}
		cout<<d<<endl;
	}
	return 0;
}
