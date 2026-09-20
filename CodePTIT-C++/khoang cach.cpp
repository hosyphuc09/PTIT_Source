#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		double n=(c-a)*(c-a);
		double  m=(d-b)*(d-b);
		double  sum=n+m;
		double  k=sqrt(sum);
		cout<<fixed<<setprecision(4)<<k<<endl;
	}
}
