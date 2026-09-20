#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int> a(2*m+1);
		for(int i=1;i<=2*m;i++){
			cin>>a[i];
		}
		vector<int> deg(n+1);
	
		for(int i=1;i<=2*m;i++){
		
				
			deg[a[i]]++;
			
		} 
		int d=0;
		bool ok=false;
		for(int i=1;i<=n;i++){
			if(deg[i]%2==1){
				d++;
				ok=true;
			}
		}
		if(!ok){
			cout<<2<<endl;
		}else if(d==2){
			cout<<1<<endl;
		}else cout<<0<<endl;
	}
}
