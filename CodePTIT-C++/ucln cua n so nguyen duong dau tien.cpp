#include <bits/stdc++.h>
using namespace std;
long long check(long long a,long long b){
while(b!=0){
	long long t=a%b;
	a=b;
	b=t;
}
return a;


}
long long checkk(long long a,long long b){
	return (a/check(a,b))*b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long k=1;
		for(long long i=2;i<=n;i++){
			k=checkk(k,i);
		}
		cout<<k<<endl;
		}
	}

