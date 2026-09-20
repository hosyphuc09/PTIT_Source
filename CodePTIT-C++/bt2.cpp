#include <bits/stdc++.h>
using namespace std;
int main(){
	string s,s1;
	while(getline(cin,s)) s1+=" "+s;
	stringstream ss(s1);
	string t,l;
	int d=0;
	while(ss>>t){
	
	l=t;
	if(d==0){
		l[0]=toupper(l[0]);
		for(int i=1;i<l.size();i++){
			l[i]=tolower(l[i]);
		}
		cout<<l<<" ";
		d=1;
	}else{
		if(l[l.size()-1]=='?'||l[l.size()-1]=='!'||l[l.size()-1]=='.'){
			for(int i=0;i<l.size()-1;i++){
				cout<<l[i];
			}
			cout<<endl;
			d=0;
		}else{
		
		for(int i=0;i<l.size();i++){
			l[i]=tolower(l[i]);
			cout<<l[i];
		}
		cout<<" ";
		d=1;
		}
	
		
	}
	
	
}
}