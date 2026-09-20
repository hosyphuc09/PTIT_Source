#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int k;
	cin>>k;
		char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
		char b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
		char c[100];
		for(int i=0;i<15;i++){
			cin>>c[i];
		}
			double sum=0;
			
		if(k==101){
				
			for(int i=0;i<15;i++){
				if(c[i]==a[i]){
					sum+=(double)10/15;
				}
			}
			cout<<fixed<<setprecision(2)<<sum<<endl;
		}
		if(k==102){
			for(int i=0;i<15;i++){
				if(c[i]==b[i]){
					sum+=(double)10/15;
				}
			}
			cout<<fixed<<setprecision(2)<<sum<<endl;
		}
	}
}
