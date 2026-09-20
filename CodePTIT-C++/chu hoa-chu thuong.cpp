#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char n;
		cin>>n;
		char t=n;
		if(n==toupper(t)){
			char m=tolower(n);
			cout<<m<<endl;
		}else{
			char l=toupper(n);
			cout<<l<<endl;
		}
	}
}
