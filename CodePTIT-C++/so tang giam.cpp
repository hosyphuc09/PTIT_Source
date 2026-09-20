#include <bits/stdc++.h>
using namespace std;
int check(int n){
int l=n%10;
bool tang=true,giam=false;
while(n>0){
	int k=n%10;
	n/=10;
	if(k>=l) tang=false;
	if(k<=l) giam=false;
	l=k;
}
return tang||giam;}
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;cin>>t;
	while(t--){
		
	int n;cin>>n;
	int a=pow(10,n);
	int b=pow(10,n-1);
	int dem =0;
	for(int i=b;i<a;i++){
		if(check(i)&&nt(i)){
			dem++;
		}
	}
	cout<<dem<<endl;
}}
