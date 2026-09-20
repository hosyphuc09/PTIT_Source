#include <iostream>
#include <algorithm>
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
		a[i]=n-i+1;
	}
}
void Try(int n){
	while(true){
	in(n);
	int i=n-1;
	while(i>0&&a[i]<a[i+1]) i--;
	if(i==0) break;
	
		int j=n;
		while(a[j]>a[i]) j--;
		swap(a[i],a[j]);
		 int l=i+1;
		int k=n;
		while(l<k){
			swap(a[l],a[k]);
			l++;
			k--;
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
