#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		set<int> s;
		for(int i=0;i<n;i++){
			int k=a[i];
			if(k==0) s.insert(0);
			while(i>0){
				int r=k%10;
				k/=10;
				s.insert(r);
			}}
			
		for(set<int>::iterator  x = s.begin();x != s.end();x++){
			cout<<*x<<" "; 
		} 
			cout<<endl;
		
	}
}
