#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int dem=0,l=0,a[100];
	while(n>0){
		int s=n%10;
		dem++;
		n/=10;a[l++]=s;
	}
	if(dem%2!=0) return 0;
	if(dem%2==0){
		int r=0,t=0;
		for(int i=0;i<l;i++){
			if(a[i]%2==0) r++;
			if(a[i]%2==1) t++;
		}
		if(r!=t) return 0;
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	int l=pow(10,n-1);
	int k=pow(10,n);
	int r=0;
	for(int i=l;i<k;i++){
		
		if(check(i)){
			cout<<i<<" ";
			r++;
		}
		if(r==10){
		
		cout<<endl;
		r=0;}
	}
}
