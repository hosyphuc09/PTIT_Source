#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	vector<bool> k(256,false);
	k['a']=true;
	k['e']=true;
	k['i']=true;
	k['o']=true;
	k['u']= true;
	k['y']=true;
	for(int i=0;i<s.size();i++){
		if(!k[s[i]]){
			cout<<"."<<s[i];
		}
	}
	cout<<endl;
}
