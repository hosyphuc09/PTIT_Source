#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	
	}
	sort(a,a+n);

	for(int i=0;i<n;i++){
			bool f=false;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				f=true;
				break;
			}
		}
		if(!f) cout<<a[i]<<" ";
	}
	
	cout<<endl;
}
