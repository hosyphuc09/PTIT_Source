#include <bits/stdc++.h>
using namespace std;
int check(string s){
	int sum=0;
	for(int i=0;i<s.size();i++){
		sum+=s[i]-'0';
	}
	while(sum>=10){
		int t=0;
		while(sum>0){
			t+=sum%10;
			sum/=10;
		}
		sum=t;
	}
	return sum==9;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
