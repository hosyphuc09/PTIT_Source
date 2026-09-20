#include <bits/stdc++.h>
using namespace std;
struct job{
	int deadline,profit;
	
};
bool cmp(job a,job b){
	return a.profit>b.profit;
}
int main(){
	int n;cin>>n;
	vector<job> a(n);
	int maxx=n;
	for(int i=0;i<n;i++){
		cin>>a[i].deadline>>a[i].profit;
		maxx=max(maxx,a[i].deadline);
	}
	sort(a.begin(),a.end(),cmp);
	vector<int> slot(maxx+1,-1);
	long long ans=0;
	for(int i=0;i<n;i++){
		for(int j=a[i].deadline;j>0;j--){
			if(slot[j]==-1){
				slot[j]=i;
				ans+=a[i].profit;
				break;
			}
		}
	}cout<<ans<<endl;
}
