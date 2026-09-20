#include <bits/stdc++.h>
using namespace std;
void khoitao(int n,int b[]){
	for(int i=0;i<n;i++){
		b[i]=i+1;
	}
}
bool check(int a[],int b[],int n){
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}
void Try(int n,int a[],int b[]){
	int d=0;
	while(true){
		d++;
		if(check(a,b,n)){
			cout<<d<<endl;
			return;
		}
		
		int i=n-2;
		while(b[i]>b[i+1]) i--;
		if(i<0) break;
		else{
			int j=n-1;
			while(b[j]<b[i]) j--;
			swap(b[i],b[j]);
			int l=i+1;
			int k=n-1;
			while(l<k){
				swap(b[l],b[k]);
				l++;
				k--;
			}
		}
	}
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[20],b[20];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		khoitao(n,b);
		Try(n,a,b);
	}
	return 0;
}
