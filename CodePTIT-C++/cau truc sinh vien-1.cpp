#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,hoten,lop,date;
	float gpa;
};
void nhapThongTinSV( SinhVien &a){
	getline(cin,a.hoten);
	cin>>a.lop;
	cin>>a.date;
	cin>>a.gpa;
}
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
void inThongTinSV(const SinhVien a){
	cout<<"N20DCCN001"<<" "<<a.hoten<<" "<<a.lop<<" "<<chuanhoadate(a.date)<<" "<<fixed<<setprecision(2)<<a.gpa;;
	
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}