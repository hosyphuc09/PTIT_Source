#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	for(long long i=2;i<=sqrt(n);i++){
		int k=0;
		if(n%i==0){
			while(n%i==0){
				n/=i; 
				k++;
			}
			cout<<i<<" "<<k<<endl;
		}}
		if(n>1){
			cout<<n<<" "<<'1'<<endl;
		}
	
		
	}

