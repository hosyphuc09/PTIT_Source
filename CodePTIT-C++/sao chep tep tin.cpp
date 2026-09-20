#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1;
	ofstream f2;
	f1.open("PTIT.in");
	f2.open("PTIT.out");
	string s;
	while(f1>>s){
		f2<<s<<" ";
	}
	f1.close();
	f2.close();
	return 0;
}
