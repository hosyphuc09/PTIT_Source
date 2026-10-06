#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int t,n;
	cin>>t>>n;
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	if(t==1){
		cout<<n<<endl;
		for(int i=1;i<=n;i++){
			int deg=0;
			for(int j=1;j<=n;j++){
				if(a[i][j]==1) deg++;
				
			}
			cout<<deg<<" ";
		}
		cout<<"\n";
	}
	else if(t==2){
		for(int i=1;i<=n;i++){
			int deg=0;
			vector<int> res;
			for(int j=1;j<=n;j++){
				if(a[i][j]==1){
					deg++;
					res.push_back(j);
				}				
			}
			cout<<deg<<" ";
			for(auto x:res){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
} 
