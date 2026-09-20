#include <bits/stdc++.h>
using namespace std;
int n,k,dem=0;
int a[100];
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void in(){
	if(nt(dem)){
		cout<<dem<<": ";
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}}
void khoitao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void Try(){
	while(true){
	dem++;
	in();
	int i=k;
	while(a[i]==n-k+i) i--;
	if(i==0){
		break;
	}
	else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
}
int main(){
	cin>>n>>k;
	khoitao();
	Try();
	return 0;
}
