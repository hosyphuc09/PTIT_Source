#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv,hoten,gioitinh,ngaysinh,diachi,mathue,ngayky;
		static short d;
	public:
		friend istream& operator >> (istream& in,NhanVien& a){
			d++;
			in>>ws;
			string ma=to_string(d);
			while(ma.size()<5) ma="0"+ma;
			a.mnv=ma;
		getline(in,a.hoten);
		in>>a.gioitinh>>a.ngaysinh;
		in>>ws;
		getline(in,a.diachi);
		in>>a.mathue>>a.ngayky;
		if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
		if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
		if(a.ngayky[1]=='/') a.ngayky.insert(0,"0");
		if(a.ngayky[4]=='/') a.ngayky.insert(3,"0");
		return in;}
		friend ostream& operator << (ostream& out,NhanVien a){
			out<<a.mnv<<" "<<a.hoten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.mathue<<" "<<a.ngayky;
			out<<endl;
			return out;
		}
};
short NhanVien::d=0;
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
