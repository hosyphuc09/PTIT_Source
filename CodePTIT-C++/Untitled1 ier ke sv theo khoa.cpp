#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	 string msv,msv2,hoten,lop,email;
};
void nhap(SinhVien &a){
	getline(cin,a.msv);
	getline(cin,a.hoten);
	getline(cin,a.lop);
	getline(cin,a.email);
	a.msv2="";
	for(int i=0;i<a.lop.size();i++){
		if(i==1||i==2) a.msv2+=a.msv[i];
	}
}
void inds(SinhVien ds[],int n,string s){
	for(int i=0;i<n;i++){
		if(ds[i].msv2==s){
			cout<<ds[i].msv<<" "<<ds[i].hoten<<" "<<ds[i].lop<<" "<<ds[i].email;
			cout<<endl;
		}
	}
}
int main(){
	struct SinhVien ds[1000];
	int n;cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++) nhap(ds[i]);
	int q;cin>>q;
	while(q--){
		string s;cin>>s;
		string k;
		for(int i=0;i<s.size();i++){
			if(i==2||i==3) k+=s[i];
		}
		cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
		inds(ds,n,k);
	}
	return 0;
}