#include <bits/stdc++.h>
using namespace std;

int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int check(int n){
	int s=0;
	while(n>0){
		s+=n%10;
		n/=10;
	}
	return s;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int l=n;
		int sum=0;
		
		if(nt(n)){
		 cout<<"NO"<<endl;
		 continue;}
		 	int tong=check(n);
		 	for(int i=2;i<=sqrt(n);i++){
		 		if(nt(i)){
	
		 		while(n%i==0){
		 			sum+=check(i);
		 			n/=i;
				 }
			 }
		 }
	if(n>1) sum+=check(n);
		if(tong==sum){
		 cout<<"YES"<<endl;}
		 else{
		 	cout<<"NO"<<endl;
		 }
	}
}

