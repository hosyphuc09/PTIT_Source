#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string mnv,hoten,gioitinh,ngaysinh,diachi,mathue,ngayky;
};
int dem=0;
void nhap( NhanVien &a){
	string ma=to_string(dem);
	dem++;
	while(ma.size()<5) ma="0"+ma;
	a.mnv=ma;
	getline(cin,a.hoten);
	getline(cin,a.gioitinh);
	getline(cin,a.ngaysinh);
	getline(cin,a.diachi);
	getline(cin,a.mathue);
	getline(cin,a.ngayky);
}
string chuanhoangay(string s){
	stringstream ss(s);
	string d,m,y;
	getline(ss,d,'/');
	getline(ss,m,'/');
	getline(ss,y);
	if(d.size()==1) d="0"+d;
	if(m.size()==1) m="0"+m;
	return d+"/"+m+"/"+y;
}
void inds(const NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].mnv<<" "<<ds[i].hoten<<" "<<ds[i].gioitinh<<" "<<chuanhoangay(ds[i].ngaysinh)<<" "<<ds[i].diachi<<" "<<ds[i].mathue<<" "<<chuanhoangay(ds[i].ngayky);
		cout<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
