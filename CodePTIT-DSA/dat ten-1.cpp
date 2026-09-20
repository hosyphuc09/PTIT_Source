#include <bits/stdc++.h>
using namespace std;
vector<string> a,b;
int n,k;
void Try(int start){
	if(b.size()==k){
			for(auto x:b){
				cout<<x<<" ";
			}
			cout<<endl;
			return;
		}
	for(int i=start;i<n;i++){
		b.push_back(a[i]);
		Try(i+1);
		b.pop_back();
	}
}
bool cmp(string a,string b){
	return a<b;
}
int main(){
	cin>>n>>k;
	cin.ignore();
	string s;
	getline(cin,s);
	stringstream ss(s);
	string t;
	while(ss>>t){
		a.push_back(t);
	}
	sort(a.begin(),a.end(),cmp);
	a.erase(unique(a.begin(),a.end()),a.end());
	n=a.size();
	Try(0);
	return 0;
}
