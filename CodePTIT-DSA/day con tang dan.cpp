#include <bits/stdc++.h>
using namespace std;
int n,a[50];
vector<int> tmp;
vector<string> res;
void Try(int m){
	for(int i=m;i<=n;i++){
		if(tmp.empty()||a[i]>tmp.back()){
			tmp.push_back(a[i]);
			if(tmp.size()>=2){
				string s=" ";
				for(auto x:tmp){
					s+=to_string(x)+" ";
				}
				s.pop_back();
				res.push_back(s);
			}
			Try(i+1);
			tmp.pop_back();
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	Try(1);
	sort(res.begin(),res.end());
	for(auto x:res){
		cout<<x<<"\n";
	}
	return 0;
}
