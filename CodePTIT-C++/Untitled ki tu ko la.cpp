#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	while(n--){
		string s;
		cin>>s;
		string k={0};
		for(int i=0;i<26;i++){
		k[s[i]]++;
		}
		for(int i=0;i<k.size();i++){
			if(k[s[i]]==1) cout<<s[i];
		}
	}
	return 0;
}
