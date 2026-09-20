#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
   int n;cin>>n;
   set <int> v;
   while(n--){
   	int x,y;
   	cin>>x>>y;
   	if(x==1) v.insert(y);
   	if(x==2) v.erase(y);
   	if(x==3){
   		if(v.find(y)!=v.end()){
   			cout<<"Yes"<<endl;
		   }else{
		   	cout<<"No"<<endl;
		   }
	   }
   }
    return 0;
}




