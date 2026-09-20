#include <bits/stdc++.h>
using namespace std;
int check(int n,int a[]){
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-1-i]) return 0;
	}
	return 1;
}
int main(){
	set<char> s2={'2','A','B','C','a','b','c'};
	set<char> s3={'3','D','E','F','d','e','f'};
	set<char> s4={'4','G','H','I','g','h','i'};
	set<char> s5={'5','J','K','L','j','k','l'};
	set<char> s6={'6','M','N','O','m','n','o'};
	set<char> s7={'7','P','Q','R','S','p','q','r','s'};
	set<char> s8={'8','T','U','V','t','u','v'};
	set<char> s9={'9','W','X','Y','Z','w','x','y','z'};
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int a[s.size()];
		int d=0;
		for(char c:s){
			if(s2.find(c)!=s2.end()){
			auto it=s2.begin();
			char x=*it;
			a[d++]=x-'0';
			}else if(s3.find(c)!=s3.end()){
			auto it=s3.begin();
			char x=*it;
			a[d++]=x-'0';
			}else if(s4.find(c)!=s4.end()){
				auto it=s4.begin();
			char x=*it;
			a[d++]=x-'0';
			}else if(s5.find(c)!=s5.end()){
				auto it=s5.begin();
			char x=*it;
			a[d++]=x-'0';
			}else if(s6.find(c)!=s6.end()){
			auto it=s6.begin();
			char x=*it;
			a[d++]=x-'0';
			}else if(s7.find(c)!=s7.end()){
			auto it=s7.begin();
			char x=*it;
			a[d++]=x-'0';
			}else if(s8.find(c)!=s8.end()){
				auto it=s8.begin();
			char x=*it;
			a[d++]=x-'0';
			}else if(s9.find(c)!=s9.end()){
			auto it=s9.begin();
			char x=*it;
			a[d++]=x-'0';
			}
		}
		
	if(check(d,a)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	}
	
}
