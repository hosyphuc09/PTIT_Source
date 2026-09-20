#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	int stt;
	string msv,hoten,lop,email,doanhnghiep;
};
void nhap(NhanVien ds[],int n){
	cin.ignore();
	for(int i=0;i<n;i++){
		ds[i].stt=i+1;
		getline(cin,ds[i].msv);
		getline(cin,ds[i].hoten);
		getline(cin,ds[i].lop);
		getline(cin,ds[i].email);
		getline(cin,ds[i].doanhnghiep);
	}
}
bool cmp(NhanVien a,NhanVien b){
	return a.hoten<b.hoten;
}
void sapxep(NhanVien ds[],int n){
	sort(ds,ds+n,cmp);
}
void inds(NhanVien ds[],int n,string s){
	for(int i=0;i<n;i++){
		if(ds[i].doanhnghiep==s){
			cout<<ds[i].stt<<" "<<ds[i].msv<<" "<<ds[i].hoten<<" "<<ds[i].lop<<" "<<ds[i].email<<" "<<ds[i].doanhnghiep;
			cout<<endl;
		}
	}
}
int main(){
	int n;cin>>n;
	struct NhanVien *ds=new NhanVien[n];

	nhap(ds,n);
	sapxep(ds,n);
	int q;cin>>q;
	while(q--){
		string s;
		cin>>s;
		inds(ds,n,s);
	}
	return 0;
}