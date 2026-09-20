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
		vector<vector<int>> res;
		int d=0;
		for(int i=0;i<n;i++){
			bool check = false;
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1]){
					check=true;
					swap(a[j],a[j+1]);
				}
			}
			
			if(!check) break;
			d++;
			res.push_back(a);
		}
		for(int i=res.size()-1;i>=0;i--){
			cout<<"Buoc "<<d<<": ";
			d--;
			for(auto x:res[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
