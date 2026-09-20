#include <bits/stdc++.h>
using namespace std;

int main(){

		int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long m=0;
		for(long long i=2;i<=sqrt(n);i++){
		while(n%i==0){
			
		m=i;
			n/=i;
		}
		}
		
		if(n>1) m=n;
		
			cout<<m<<endl;
		
	
	}
}

