#include <bits/stdc++.h>
using namespace std;
int a[100];
void in(int n){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void khoitao(int n){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void Try(int n){
	while(true){
	in(n);
	int i=n-1;
	while(a[i]>a[i+1]) i--;
	if(i==0) break;
	else{
		int j=n;
		while(a[j]<a[i]) j--;
		swap(a[i],a[j]);
		j=i+1;
		int k=n;
		while(j<k){
			swap(a[j],a[k]);
			j++;
			k--;
		}
	}
}
}
int main(){
	int t;cin>>t;
	while(t--){
	int n;cin>>n;
	khoitao(n);
	Try(n);
	cout<<endl;
	}
	return 0;
}
