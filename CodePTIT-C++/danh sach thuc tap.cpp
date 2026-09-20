#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	int thutu;
	string msv,hoten,lop,email,doanhnghiep;
};
void nhap(SinhVien ds[],int n){
	cin.ignore();
	for(int i=0;i<n;i++){
		ds[i].thutu=i+1;
		getline(cin,ds[i].msv);
		getline(cin,ds[i].hoten);
		getline(cin,ds[i].lop);
		getline(cin,ds[i].email);
		getline(cin,ds[i].doanhnghiep);
	}
}

bool cmp(SinhVien a,SinhVien b){
	return a.hoten<b.hoten;
}

void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}

void in(const SinhVien ds[],int n,string s){
	for(int i=0;i<n;i++){
		if(ds[i].doanhnghiep==s){
			cout<<ds[i].thutu<<" "<<ds[i].msv<<" "<<ds[i].hoten<<" "<<ds[i].lop<<" "<<ds[i].email<<" "<<ds[i].doanhnghiep;
			cout<<endl;
		}
	}
}
int main(){
	int n,q;cin>>n;
	struct SinhVien *ds=new SinhVien[n];
	nhap(ds,n);
	sapxep(ds,n);
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		in(ds,n,s);
	}
	return 0;
}
