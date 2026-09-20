#include <bits/stdc++.h>
using namespace std;

int check(int n){
	while(n>0){
		int s=n%10;
		if(s==1||s==2||s==3||s==4||s==5||s==7||s==9){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(check(n)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
//c2
string n;
cin>>n;
bool check=true;
for(int i=0;i<n.length();i++){
	if(n[i]!='0'&&n[i]!='6'&&n[i]!='8'){
		check=false;
		break;
	}
	if(check){
		cout<<"YES";
	}else{
		cout <<"NO";
	}
} 
