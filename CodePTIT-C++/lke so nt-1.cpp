#include <bits/stdc++.h>
using namespace std;

bool check(long long n){
	if(n<2) return false;
	long long l=sqrt(n);
	for(long long i=2;i<=l;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	long long a,b;
	cin>>a>>b;
	if(a>b) swap(a,b);
	for(long long i=a;i<=b;i++){
		if(check(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
