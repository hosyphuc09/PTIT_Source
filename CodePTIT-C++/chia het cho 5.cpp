#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int sum=0;
		int n=s.size();
		for(int i=0;i<s.size();i++){
			if(s[i]=='1'){
			sum=sum+pow(2,n-1-i);	
			}
		}
	
		if(sum%5==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
