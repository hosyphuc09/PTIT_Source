#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv,hoten,gioitinh,ngaysinh,diachi,mathue,ngayky;
	public:
		friend istream& operator >> (istream& in,NhanVien& a){
			getline(in,a.hoten);
			getline(in,a.gioitinh);
			getline(in,a.ngaysinh);
			getline(in,a.diachi);
			getline(in,a.mathue);
			getline(in,a.ngayky);
			if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
			if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
			if(a.ngayky[1]=='/') a.ngayky.insert(0,"0");
			if(a.ngayky[4]=='/') a.ngayky.insert(3,"0");
			return in;
		}
		friend ostream& operator <<(ostream& out,NhanVien a){
			out<<"00001"<<" "<<a.hoten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.mathue<<" "<<a.ngayky;
			return out;
		} 
};
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
