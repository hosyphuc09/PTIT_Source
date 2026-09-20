#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,hoten,lop;
	float d1,d2,d3;
};
void nhap(SinhVien ds[],int n){
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,ds[i].msv);
		getline(cin,ds[i].hoten);
		getline(cin,ds[i].lop);
		cin>>ds[i].d1>>ds[i].d2>>ds[i].d3;
		cin.ignore();
	}
}
bool cmp(SinhVien a,SinhVien b){
	return a.hoten<b.hoten;
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(const SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].hoten<<" "<<ds[i].lop<<" "<<fixed<<setprecision(1)<<ds[i].d1<<" "<<ds[i].d2<<" "<<ds[i].d3;
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	struct SinhVien *ds=new SinhVien[n];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	return 0;
}
