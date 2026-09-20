#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a1[n],a2[m];
		for(int i=0;i<n;i++){
			cin>>a1[i];
		}
		for(int i=0;i<m;i++){
			cin>>a2[i];
		}		
		vector<int> d;
		vector<bool> k(n,false);
		vector<bool> r(100001,false);
		for(int i=0;i<m;i++){
		if(!r[a2[i]]){					
			for(int j=0;j<n;j++){			
				if(a2[i]==a1[j]){
					cout<<a1[j]<<" ";
						k[j]=true;			
			}
		}
		}
		r[a2[i]]=true;}
			for(int i=0;i<n;i++){
				if(!k[i]) d.push_back(a1[i]);
			}
			sort(d.begin(),d.end());
			
	for(int x:d){
		cout<<x<<" ";
	}
		cout<<endl;
	}
	return 0;
}
