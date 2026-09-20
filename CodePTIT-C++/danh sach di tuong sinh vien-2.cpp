#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,hoten1,hoten2,ngaysinh,lop;
		float gpa;
		static short d;
	public:
		SinhVien(){
			msv="";
			hoten1="";
			hoten2="";
			ngaysinh="";
			lop="";
			gpa=0;
		}
		friend istream& operator >> (istream& in,SinhVien& a){
			d++;
			if(d==1){
				cin.ignore();
			}
			getline(in,a.hoten1);
			stringstream ss(a.hoten1);
			string t;
			while(ss>>t){
				t[0]=toupper(t[0]);
				for(int i=1;i<t.size();i++){
					t[i]=tolower(t[i]);
				}
				a.hoten2=a.hoten2+t+" ";
			}
			a.hoten2.pop_back();
			in>>a.lop>>a.ngaysinh>>a.gpa;
			cin.ignore();
			if(d<=9) a.msv="B20DCCN00"+to_string(d);
			else a.msv="B20DCCN0"+to_string(d);
			if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
			if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
			return in;
		}
		friend ostream& operator << (ostream& out,SinhVien a){
			out<<a.msv<<" "<<a.hoten2<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
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
