#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	int r=a.size();
	while(r>0){
		cout<<"[";
		for(int i=0;i<a.size();i++){
			if(i!=a.size()-1)
			cout<<a[i]<<" ";
			else cout<<a[i];
		}
		
		cout<<"]"<<endl;
		vector<int> b;
		for(int i=0;i<a.size()-1;i++){
		int x=a[i];
		int y=a[i+1];
		b.push_back(x+y);
		}
		a=b;
		r=a.size();
	}
	}
	return 0;
}
