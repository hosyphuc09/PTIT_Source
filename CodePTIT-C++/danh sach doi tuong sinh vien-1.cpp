#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,hoten,lop,ngaysinh;
		float gpa;
		static short d;
	public:
		SinhVien(){
			msv="";
			hoten="";
			lop="";
			ngaysinh="";
			gpa=0;
		}
		friend istream& operator >> (istream& in,SinhVien& a){
			d++;
			if(d==1){
				cin.ignore();
			}
			getline(in,a.hoten);
			in>>a.lop>>a.ngaysinh>>a.gpa;
			cin.ignore();
			if(d<=9) a.msv="B20DCCN00"+to_string(d);
			else a.msv="B20DCCN0"+to_string(d);
			if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
			if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
			return in;
		}
		friend ostream& operator << (ostream& out,SinhVien a){
			out<<a.msv<<" "<<a.hoten<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(2)<<a.gpa;
			out<<endl;
			return out;
		}
};
short SinhVien::d=0;
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
