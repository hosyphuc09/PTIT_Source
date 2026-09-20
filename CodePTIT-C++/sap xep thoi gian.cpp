#include <bits/stdc++.h>
using namespace std;
struct Thoigian{
	int gio,phut,giay;
	string s;
};
string chuanhoa(int x){
	string ma;
	if(x<10) ma="0"+to_string(x);
	else ma=to_string(x);
	return ma;
}
void nhap(Thoigian ds[],int n){
	for(int i=0;i<n;i++){
		cin>>ds[i].gio>>ds[i].phut>>ds[i].giay;
		ds[i].s=chuanhoa(ds[i].gio)+chuanhoa(ds[i].phut)+chuanhoa(ds[i].giay);
	}
}
bool cmp(Thoigian a,Thoigian b){
	return a.s<b.s;
}
void sapxep(Thoigian ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(Thoigian ds[],int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].gio<<" "<<ds[i].phut<<" "<<ds[i].giay;
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	struct Thoigian *ds=new Thoigian[n];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	return 0; 
} 
