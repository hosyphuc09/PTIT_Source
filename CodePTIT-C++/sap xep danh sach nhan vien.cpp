#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string mnv,hoten,gioitinh,ngaysinh,diachi,mathue,ngayky;
};
int dem=0;
void nhap(NhanVien &a){
	dem++;
	if(dem==1) cin.ignore();
	string ma=to_string(dem);
	while(ma.size()<5) ma="0"+ma;
	a.mnv=ma;
	getline(cin,a.hoten);
	getline(cin,a.gioitinh);
	getline(cin,a.ngaysinh);
	getline(cin,a.diachi);
	getline(cin,a.mathue);
	getline(cin,a.ngayky);
}
string chuanhoadate(string s){
	stringstream ss(s);
	string d,m,y;
	getline(ss,d,'/');
	getline(ss,m,'/');
	getline(ss,y);
	if(d.size()==1) d="0"+d;
	if(m.size()==1) m="0"+m;
	return y+d+m;
}
string chuanhoadatee(string s){
	stringstream ss(s);
	string d,m,y;
	getline(ss,d,'/');
	getline(ss,m,'/');
	getline(ss,y);
	if(d.size()==1) d="0"+d;
	if(m.size()==1) m="0"+m;
	return d+"/"+m+"/"+y;
}
bool cmp(NhanVien a,NhanVien b){
	return chuanhoadate(a.ngaysinh)<chuanhoadate(b.ngaysinh);
}
void sapxep(NhanVien ds[],int n){
	sort(ds,ds+n,cmp);
}
void inds(const NhanVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].mnv<<" "<<ds[i].hoten<<" "<<ds[i].gioitinh<<" "<<chuanhoadatee(ds[i].ngaysinh)<<" "<<ds[i].diachi<<" "<<ds[i].mathue<<" "<<chuanhoadatee(ds[i].ngayky);
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
