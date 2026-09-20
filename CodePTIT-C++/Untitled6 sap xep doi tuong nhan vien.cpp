#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string mnv,hoten,gioitinh,ngaysinh,diachi,mathue,ngayky;
		static short d;
	public:
		friend istream& operator >> (istream& in, NhanVien &a){
		d++;
		string ma=to_string(d);
		while(ma.size()<5) ma="0"+ma;
	    a.mnv=ma;
	    in>>ws;
	    getline(in,a.hoten);
	    getline(in,a.gioitinh);
	    getline(in,a.ngaysinh);
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
		
		string chuanhoa(string s){
	stringstream ss(s);
	string d,m,y;
	getline(ss,d,'/');
	getline(ss,m,'/');
	getline(ss,y);
	return y+d+m;
}
string getngaysinh(){
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
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>ds[i];
	}
	sapxep(ds,n);
	for(int i=0;i<n;i++){
		cout<<ds[i];
	}
	return 0;
}