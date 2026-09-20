#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
	char c;
	cin>>c;
	if(islower(c)) cout<<(char)toupper(c)<<endl;
	if(isupper(c)) cout<<(char)tolower(c)<<endl;
}
}
