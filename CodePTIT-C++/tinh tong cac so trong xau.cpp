#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int sum=0;
		for(int i=0;i<s.size();i++){
			if(i!=0&&(s[i-1]>='0'&&s[i-1]<='9')) continue;
			if(s[i]>='0'&&s[i]<='9'){
				int tich=0;
				bool f=false;
				for(int j=i;j<s.size();j++){
					if(s[j]>='0'&&s[j]<='9'){
						tich=tich*10+(s[j]-'0');
					}else{
						f=true;	
						break;
					}
				}
				sum+=tich;
				
			}
		}
		cout<<sum<<endl;
	}
}
