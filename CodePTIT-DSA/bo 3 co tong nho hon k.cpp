#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long k;
		int n;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int d=0;

		for(int i=0;i<n;i++){
			
			for(int j=i+1;j<n;j++){
				for(int y=j+1;y<n;y++){
				long long sum=0;
				sum=(a[i]+a[j]+a[y]);
				if(sum<k) d++;
			}}
		}
		cout<<d<<endl;
	}
	return 0;
}
