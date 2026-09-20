#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long n=a,m=b;
		if(a<b){
			long long k=b;
			b=a;
			a=k;
		}
		while(b!=0){
			int t=a%b;
			a=b;
			b=t;
		}
		long long q=(n*m)/a;
		cout<<q<<" "<<a<<endl;
	}
}
