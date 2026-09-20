#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		int l=0;
		for(int long long i=2;i<=sqrt(n);i++){
			while(n%i==0){
				l++;
				if(l==k){
					cout<<i<<endl;
				}
				break;
			}
		}
		if(l<k) cout<<"-1"<<endl;
	}
}
