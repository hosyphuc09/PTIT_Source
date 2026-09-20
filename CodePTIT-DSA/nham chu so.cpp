#include <bits/stdc++.h>
using namespace std;
long long min(string s1,string s2){
	for(int i=0;i<s1.size();i++){
		if(s1[i]=='6') s1[i]='5';
	}
	int x=stoi(s1);
	for(int i=0;i<s2.size();i++){
		if(s2[i]=='6') s2[i]='5';
	}
	int y=stoi(s2);
	long long z=x+y;
	return z;
}
long long max(string s1,string s2){
	for(int i=0;i<s1.size();i++){
		if(s1[i]=='5') s1[i]='6';
	}
	int x=stoi(s1);
	for(int i=0;i<s2.size();i++){
		if(s2[i]=='5') s2[i]='6';
	}
	int y=stoi(s2);
	long long z=x+y;
	return z;
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	cout<<min(s1,s2)<<" "<<max(s1,s2)<<endl;
	return 0;
}
