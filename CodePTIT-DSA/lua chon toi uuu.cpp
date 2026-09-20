#include <bits/stdc++.h>
using namespace std;
struct job{
	int start,finish;
};
bool cmp(job a,job b){
	return a.finish<b.finish;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<job> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i].start>>a[i].finish;
		}
		sort(a.begin(),a.end(),cmp);
		int last=a[0].finish;
		int dem=1;
		for(int i=1;i<n;i++){
			if(a[i].start>=last){
				dem++;
				last=a[i].finish;
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}
