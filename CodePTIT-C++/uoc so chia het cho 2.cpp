#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int dem=0;
		for(long long i=1;i*i<=n;i++){
			if(n%i==0){
				long long j=n/i;
				if(i%2==0) dem++;
				if(j!=i&&j%2==0) dem++;
			}
		}
	
		cout<<dem<<endl;
	}
}
