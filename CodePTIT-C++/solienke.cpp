#include <bits/stdc++.h>
using namespace std;
int check(long long n){
	int d=0;
	int a[100];
	while(n>0){
		a[d++]=n%10;
		n/=10;
	}
	sort(a,a+d);
	for(int i=0;i<d-1;i++){
		if(a[i+1]-a[i]!=1) return 0;
	}
	return 1;
}
int main(){
	int t;cin>>t;
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

