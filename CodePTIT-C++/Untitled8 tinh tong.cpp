#include <bits/stdc++.h>
using namespace std;
bool check(string s){
	if(s.size()>=9) return false;
	for(int i=0;i<s.size();i++){
		if(s[i]<'0'||s[i]>'9') return false;
	}
	return true;
}
int main(){
	ifstream f1("DATA.in");
	string x;
	long long sum=0;
	while(f1>>x){
		if(check(x)) sum+=stoi(x);
	}
	cout<<sum<<endl;
	f1.close();
	return 0;
}