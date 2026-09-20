#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
int main(){
	int t;
	cin>>t;
		for(int i=1;i<(1<<18);i++){
			string s="";
			int x=i;
			while(x>0){
				s=char(x%2+'0')+s;
				x/=2;
			}
			v.push_back(stoll(s));
		}
		while(t--){
	
		long long k;
		cin>>k;
		int dem=0;
		for(auto x:v){
			if(x<=k) dem++;
			else break;
		}
		cout<<dem<<"\n";
	}
	return 0;
}
