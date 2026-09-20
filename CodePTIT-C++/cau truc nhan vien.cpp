#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string mnv,hoten,gioi,date,adress,thue,hopdong;
};
string chuanhoadate(string s){
	stringstream ss(s);
	string d,m,y;
	getline(ss,d,'/');
	getline(ss,m,'/');
	getline(ss,y);
	if(d.size()==1) d='0'+d;
	if(m.size()==1) m='0'+m;
	return d+"/"+m+"/"+y;
}
void nhap(NhanVien &a){
	getline(cin,a.hoten);
	getline(cin,a.gioi);
	getline(cin,a.date);
	getline(cin,a.adress);
	getline(cin,a.thue);
	getline(cin,a.hopdong);
}
void in(const NhanVien a){
	cout<<"00001"<<" "<<a.hoten<<" "<<a.gioi<<" "<<chuanhoadate(a.date)<<" "<<a.adress<<" "<<a.thue<<" "<<chuanhoadate(a.hopdong);
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}