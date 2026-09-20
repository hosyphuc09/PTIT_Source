#include <bits/stdc++.h>
using namespace std;
int check(long long n){
	int a[100],m=0;
	while(n>0){
		int s=n%10;
		a[m++]=s;
		n/=10;
	}
	for(int i=0;i<m/2;i++){
		if(a[i]!=a[m-1-i]){
			return 0;
		}
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
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}
