#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> v(n);
		long long sum=0;
		for(int i=0;i<n;i++){
			cin>>v[i];
			sum+=v[i];
		}
		int i=1;
		bool f=false;
		long long tong=0;
		while(i<n-1){
			tong+=v[i-1];
			long long tong2=sum-v[i]-tong;
			if(tong2==tong){
				cout<<i+1<<endl;
				f=true;
				break;
			}
			i++;
		}
		if(!f) cout<<"-1"<<endl;
	}
	return 0;
}
