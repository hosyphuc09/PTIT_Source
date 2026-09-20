#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string s;
	cin>>s;
	stringstream ss(s);
	string token;
	while(getline(ss,token,',')){
		cout<<token<<endl;
	}
	
}
