#include <bits/stdc++.h>
using namespace std;
string s;
bool vs[105];
vector<string> v;
void Try(int m,int k,string c){
	for(int i=0;i<k;i++){
		if(!vs[i]){
			vs[i]=true;
			c+=s[i];
			if(m==k-1) v.push_back(c);
			else Try(m+1,k,c);
			c.pop_back();
			vs[i]=false;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>s;
		int k=s.size();
		v.clear();
		Try(0,k,"");
		for(auto x:v){
			cout<<x<<" ";
			
		}
		cout<<endl;
	}
}
