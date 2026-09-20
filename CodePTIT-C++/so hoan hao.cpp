#include <bits/stdc++.h>
using namespace std;
int check(long long n){
	int sum=0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			sum+=i;
			sum+=n/i;
		}
	}
	sum=sum+1;
	if(sum!=n) {
		return 0;
	}
	return 1;
}
int main(){
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(check(n)){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
