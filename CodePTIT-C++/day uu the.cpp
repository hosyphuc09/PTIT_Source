#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
	string s;
	getline(cin,s);
	int x=0,chan=0,le=0;
	stringstream ss(s);
	int k;
	while(ss>>k){
		if(k%2==0){
			chan++;
		}else{
			le++;
		}
		x++;
	}
	if((x%2==0&&chan>le)||(x%2==1&&le>chan)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	}
}
