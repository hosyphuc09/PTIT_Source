#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int x,y,z;
		long long n;
		cin>>x>>y>>z;
		cin>>n;
		long long a=pow(10,n);
		long long b=pow(10,n-1);
		int dem=0;
		bool f=false;
		for(long long i=b;i<a;i++){
			if(i%x==0&&i%y==0&&i%z==0){
				cout<<i<<endl;dem++;
				f=true;
				break;
			}
			
			}
			if(dem==0) cout<<-1<<endl;
		}
	}

