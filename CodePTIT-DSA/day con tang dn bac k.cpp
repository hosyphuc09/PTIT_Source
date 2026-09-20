#include <bits/stdc++.h>
using namespace std;
int n,k;
int c[105];
int d=0;
vector<int> a;
void Try(int i){
	if(a.size()==k){
		d++;
		return;
	}
	
		for(int j=i;j<n;j++){
			if(a.empty()||c[j]>a.back()){
				a.push_back(c[j]);
				Try(j+1);
				a.pop_back();
			}
		}
}
int main(){

	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	Try(0);
	cout<<d<<endl;
	return 0;
}
