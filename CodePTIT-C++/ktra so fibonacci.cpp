#include <bits/stdc++.h>
using namespace std;
int check(long long n){
	if(n==1||n==0) return 1;
	long long a=1;
	long long b=1;
	while(b<n){
		long long t=b;
		b=a+b;
		a=t;
	}
	return b==n;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(check(n)){
			cout<<"YES"<<endl;
			
		}else{
			cout<<"NO"<<endl;
		}
	}
}
