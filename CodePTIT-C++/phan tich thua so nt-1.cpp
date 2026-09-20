#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=2;i<=n;i++){
			int k=0;
			if(n%i==0){
			
			while(n%i==0){
				k++;
				n/=i;
			}
			cout<<i<<" "<<k<<" ";
		}}
		cout<<endl;
	}
}
