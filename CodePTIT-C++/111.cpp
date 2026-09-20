#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long l=0;
		bool f=false;
		for( long long i=2;i<=sqrt(n);i++){
			while(n%i==0){
				l++;
				n/=i;
				if(l==k){
					cout<<i<<endl;
					f=true;
					break;
				}
			
			}
			if(f) break;
		}
		if(!f&&n>1){
			l++;
			if(l==k){
				cout<<n<<endl;
				f=true;
			}
		}
		if(!f) cout<<"-1"<<endl;
	}
}