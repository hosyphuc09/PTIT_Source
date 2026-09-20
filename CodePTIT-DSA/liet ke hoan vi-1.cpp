#include <bits/stdc++.h>
using namespace std;
int a[11]={0},n,d=1;
void result(){
	cout<<d<<": ";
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void khoitao(){
	for(int i=1;i<=n;i++){
	a[i]=i;
}
}
void Try(){
	while(true){
		result();
		int i=n-1;
		while(a[i]>a[i+1]) i--;
		if(i==0){
			break;
		}
		else {
			int j=n;
			while(a[j]<a[i]) j--;
			swap(a[j],a[i]);
			j=i+1;
			int k=n;
			while(j<k){
				swap(a[j],a[k]);
				k--;
				j++;
			}
			d++;
		}
	}
}
int main(){
	cin>>n;
	khoitao();
	Try();
	return 0;
}
