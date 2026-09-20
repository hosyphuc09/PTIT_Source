#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int dem=1,sum=0;
		for(int i=0;i<n;i++){
			if(a[i]==a[i+1]){
				dem++;
			}else{
				if(dem>1) sum+=dem;
				dem=1;
			} 
		}
		if(dem>1) sum+=dem;
		cout<<sum<<endl;
	}
}
