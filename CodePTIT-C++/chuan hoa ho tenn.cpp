#include <bits/stdc++.h>
using namespace std;
string ten(string s){
       if(s.empty()) return s;
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	s[0]=toupper(s[0]);
	return s;
}
int main(){
	int t;cin>>t;
cin.ignore();
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		
			string s1;
			getline(cin,s1);
			stringstream ss(s1);
			string k,h;
			vector<string> v;
			
			while(ss>>k){
				h=ten(k);
				v.push_back(h);
			}
			if(n==1){
				if(v.size()>=3){
				
			cout<<v[v.size()-1]<<" "<<v[0]<<" ";
			for(int i=1;i<v.size()-1;i++){
				cout<<v[i]<<" ";
			}
		    cout<<endl;}
		}else if(n==2){
			if(v.size()>=3){
			
			for(int i=1;i<v.size();i++){
				cout<<v[i]<<" ";
			}
			cout<<v[0]<<endl;
		}
}
	}
}
