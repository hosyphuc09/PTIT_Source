#include <bits/stdc++.h>
using namespace std;
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
int check(int n){
	int x=0,r;
	while(n>0){
		r=n%10;
		if(nt(r)) x++;
		n/=10;
	}
	return x;
}
bool cmp(int a,int b)
{
	return check(a)<check(b);
}
int main(){
	int n;cin>>n;
	vector <int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
}
	stable_sort(v.begin(),v.end(),cmp);
	for(auto x:v)
	{
		cout<<x<<" ";
	}
	return 0;
}
