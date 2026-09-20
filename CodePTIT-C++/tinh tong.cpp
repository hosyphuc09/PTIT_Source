#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	if(s.size()>9) return false;
	for(int i=0;i<s.size();i++){
		if(s[i]<'0'||s[i]>'9') return false;
		
	}
	return true;
}
int main(){
	//b1:mo file
	ifstream f;
	f.open("DATA.in");
	//b2:doc file
	string s;
	long long sum=0;
	while(f>>s){
		if(check(s)){
			sum+=stoi(s);
		}
	}
	cout<<sum;
	//b3:dong file
	f.close();
	return 0;
}
