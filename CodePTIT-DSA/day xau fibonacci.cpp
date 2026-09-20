#include <bits/stdc++.h>
using namespace std;
long long f[100];
int   fibon(int n,long long k){
	if(n==1) return 0;
	if(n==2) return 1;
	if(k<=f[n-2]) return fibon(n-2,k);
	return fibon(n-1,k-f[n-2]);
}
int main(){
	f[0]=0;f[1]=1;
	for(int i=2;i<=92;i++){
		f[i]=f[i-1]+f[i-2];
	}
	int n,t;long long k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<fibon(n,k)<<endl;
	}
	return 0;
}
