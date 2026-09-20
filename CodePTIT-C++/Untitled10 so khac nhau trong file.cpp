#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream f1("DATA.in");
	map<int,int> k;
	int x;
	while(f1>>x){
		k[x]++;
	}
	for(auto y:k){
		cout<<y.first<<" "<<y.second<<endl;
	}
	f1.close();
	return 0;
}