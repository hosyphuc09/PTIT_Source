#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,hoten,lop,ngaysinh;
		float gpa;
	public:
		SinhVien(){
			msv="";
			hoten="";
			lop="";
			ngaysinh="";
			gpa=0;
		}
		void nhap(){
			msv="B20DCCN001";
			getline(cin,hoten);
			cin>>lop>>ngaysinh>>gpa;
			if(ngaysinh[1]=='/') ngaysinh.insert(0,"0");
			if(ngaysinh[4]=='/') ngaysinh.insert(3,"0");
		}
		void xuat(){
			cout<<msv<<" "<<hoten<<" "<<lop<<" "<<ngaysinh<<" "<<fixed<<setprecision(2)<<gpa;
		}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
