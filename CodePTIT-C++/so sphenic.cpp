#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int l=0;
	for(int i=2;i*i<=n;i++){
		int k=0;
	
		while(n%i==0){
			k++;
			n/=i;
		}
		if(k>1) return 0;
		if(k==1) l++;
	
	if(l>3) return 0;
}
if(n>1) l++;
return (l==3);
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if(check(n)){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
