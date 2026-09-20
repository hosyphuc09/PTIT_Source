#include <bits/stdc++.h>
using namespace std;
long long check(string s){
	stringstream ss(s);
	long long x;
	ss>>x;
	return x;
}
int main(){
	int t;
	cin>>t;

	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		string a=s1,b=s2;
		
		for(int i=0;i<s1.size();i++){
			if(s1[i]=='6') s1[i]='5';
			
		}
		for(int i=0;i<a.size();i++){
			if(a[i]=='5') a[i]='6';
		}
		for(int i=0;i<b.size();i++){
			if(b[i]=='5') b[i]='6';
		}
		for(int i=0;i<s2.size();i++){
			if(s2[i]=='6') s2[i]='5';
			
		}
		long long x=check(s1);
		long long y=check(s2);
		long long n=check(a);
		long long m=check(b);
		

	cout<<x+y<<" "<<n+m<<endl;
	}
}
