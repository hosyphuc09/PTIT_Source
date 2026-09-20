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
			return in;
		}
		friend ostream& operator << (ostream& out,NhanVien a){
			out<<a.mnv<<" "<<a.hoten<<" "<<a.gioitinh<<" "<<a.ngaysinh<<" "<<a.diachi<<" "<<a.mathue<<" "<<a.ngayky;
			out<<endl;
			return out;
		}
		long long chuanhoa(string s){
			stringstream ss(s);
			string d,m,y;
			getline(ss,d,'/');
			getline(ss,m,'/');
			getline(ss,y);
			long long x=stoll(y+d+m);
			return x;
		}
		long long getngaysinh(){
			return chuanhoa(ngaysinh);
		}
};
short NhanVien::d=0;
bool cmp(NhanVien a,NhanVien b){
	return a.getngaysinh()<b.getngaysinh();
}
void sapxep(NhanVien ds[],int n){
	sort(ds,ds+n,cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
