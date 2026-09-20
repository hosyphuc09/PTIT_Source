#include <bits/stdc++.h>
using namespace std;
int t,n,m;
bool vs[1005];

int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		vector<int> a(2*m+1);
		for(int i=1;i<=2*m;i++){
			cin>>a[i];
		}
		vector<int> degin(n+1);
		vector<int> degout(n+1);
		for(int i=1;i<2*m;i++){
			if(i%2==1){
				
				degin[a[i]]++;
				degout[a[i+1]]++;
			}
		} 
		bool ok=false;
		for(int i=1;i<=n;i++){
			if(degin[i]!=degout[i]){
				ok=true;
				break;
			}
		}
		if(!ok){
			cout<<1<<endl;
		}else cout<<0<<endl;
	}
}
