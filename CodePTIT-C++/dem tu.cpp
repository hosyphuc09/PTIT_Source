#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	string n;
	getline(cin,n);
	while(t--){
		
	
	string n;
	getline(cin,n);
	bool f=false;
	int dem=0;
	for(int i=0;i<n.size();i++){
		char c=n[i];
		if(c==' '||c=='\t'||c=='\n'){
			f=false;
		}else{
			if(!f){
				dem++;
				f=true;
			}
		}
	}
	cout<<dem<<endl;
}
}
