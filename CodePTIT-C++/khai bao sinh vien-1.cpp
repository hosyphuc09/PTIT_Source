#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,hoten,lop,ngaysinh;
		float gpa;
	public:
		friend istream& operator >> (istream &in,SinhVien& a)
		{
	getline(in,a.hoten);
	getline(in,a.lop);
	in>>a.ngaysinh>>a.gpa;
	if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
	if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
	return in;
}
		friend ostream& operator << (ostream &out,SinhVien a)
    {
	out<<"B20DCCN001"<<" "<<a.hoten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(2)<<a.gpa;
return out;
}
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
