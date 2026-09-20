#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		map<long long,long long> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		bool f=false;
		for(int i=0;i<n;i++){
			if(m[a[i]]==2){
				cout<<a[i]<<endl;
				f=true;
				break;
			}
		}
		if(!f) cout<<"NO"<<endl;
	}
	return 0;
}
