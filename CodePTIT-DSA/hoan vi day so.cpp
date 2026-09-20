#include <bits/stdc++.h>
using namespace std;
void in(int n,int a[]){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int n,int a[]){
	while(true){
		in(n,a);
		int i=n-2;
		while(a[i]>a[i+1]) i--;
		if(i<0) break;
		else{
			int j=n-1;
			while(a[j]<a[i]) j--;
			swap(a[i],a[j]);
			int l=i+1;
			int k=n-1;
			while(l<k){
				swap(a[k],a[l]);
				l++;
				k--;
			}
		}
	}
}
int main(){
	int n;cin>>n;
	int a[10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	Try(n,a);
	return 0;
}
