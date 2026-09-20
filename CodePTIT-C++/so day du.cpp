#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
	
	string s;
	cin>>s;
	bool k[1005]={false};
	bool l=false;
	int r=0;
	for(int i=0;i<s.size();i++){
		if((s[i]>='a'&&s[i]<='z')|| s[0]=='0'){
			cout<<"INVALID"<<endl;
			l=true;
			break;
		}
		if(s[i]>='0'&&s[i]<='9'){
		if(!k[s[i]-'0']){
			r++;
			k[s[i]-'0']=true;
		}
	}
}
if(l) continue;
      if(r==10){
      	cout<<"YES"<<endl;
	  }else{
	  	cout<<"NO"<<endl;
	  }
}
	
}
