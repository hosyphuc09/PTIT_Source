#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string mnv,hoten,gioitinh,ngaysinh,diachi,mathue,ngayky;
};
int d=0;
void nhap(NhanVien &a){
	d++;
	if(d==1){
		cin.ignore();
	}
	string ma=to_string(d);
	while(ma.size()<5) ma="0"+ma;
	a.mnv=ma;
	getline(cin,a.hoten);
	getline(cin,a.gioitinh);
	getline(cin,a.ngaysinh);
	if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
	if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
	getline(cin,a.diachi);
	getline(cin,a.mathue);
	getline(cin,a.ngayky);
	if(a.ngayky[0]=='/') a.ngayky.insert(0,"0");
	if(a.ngayky[4]=='/') a.ngayky.insert(3,"0");
}
string chuanhoa(string s){
	stringstream ss(s);
	string d,m,y;
	getline(ss,d,'/');
	getline(ss,m,'/');
	getline(ss,y);
	return y+m+d;
}
bool cmp(NhanVien a,NhanVien b){
	return chuanhoa(a.ngaysinh)<chuanhoa(b.ngaysinh);
}
void sapxep(NhanVien ds[],int n){
	sort(ds,ds+n,cmp);
}
void inds(NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].mnv<<" "<<ds[i].hoten<<" "<<ds[i].gioitinh<<" "<<ds[i].ngaysinh<<" "<<ds[i].diachi<<" "<<ds[i].mathue<<" "<<ds[i].ngayky;
		cout<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
