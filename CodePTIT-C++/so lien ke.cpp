#include <bits/stdc++.h>
using namespace std;

int check(long long n){
	while(n>0){
		int a=n%10;
		n/=10;
		int b=n%10;
		n/=10;
		if(a>b){
			if(a!=b+1) return 0;
		}
		if(a<b){
			if(a!=b-1) return 0;
		}
		if(a==b) return 0;
	}
	return 1;
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
