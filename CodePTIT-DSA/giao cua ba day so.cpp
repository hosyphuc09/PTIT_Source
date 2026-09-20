#include <bits/stdc++.h>
using namespace std;;
int main(){
	int t;cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		vector<long long> a(x),b(y),c(z);
		for(int i=0;i<x;i++){
			cin>>a[i];
		}	
		for(int i=0;i<y;i++){
			cin>>b[i];
		}
		for(int i=0;i<z;i++){
			cin>>c[i];
		}
		int i=0,j=0,l=0;
		bool f=false;
		while(i<x&&j<y&&l<z){
			if(a[i]==b[j]&&b[j]==c[l]){
				cout<<a[i]<<" ";
				f=true;
				i++,j++,l++;
			}
			else if(a[i]<b[j]) i++;
			else if(b[j]<c[l]) j++;
			else l++;
		}
		if(!f) cout<<"-1"<<endl;
		else cout<<endl;
	}
	return 0;
}
