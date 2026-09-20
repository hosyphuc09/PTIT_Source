#include <bits/stdc++.h>
using namespace std;
int check(long long n){
	if(n<2) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	long long n;
	cin>>n;
	if(check(n)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
