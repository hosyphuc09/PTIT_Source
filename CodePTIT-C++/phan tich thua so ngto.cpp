#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		for(long long i=2;i*i<=n;i++){
			int dem=0;
			while(n%i==0){
				dem++;
				n/=i;
			}
			cout<<i<<" "<<dem<<endl;
		}
		if(n>1) cout<<n<<" "<<1<<endl;
	}
}
