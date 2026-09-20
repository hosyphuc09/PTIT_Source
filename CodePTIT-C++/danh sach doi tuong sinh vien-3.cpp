#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,hoten1,lop,ngaysinh,hoten2;
		float gpa;
		static short d;
	public:
		SinhVien(){
			msv="";
			hoten1="";
			hoten2="";
			lop="";
			ngaysinh="";
			gpa=0;
		}
		friend istream& operator >> (istream& in,SinhVien& a){
			d++;
			
			in>>ws;
			if(d<=9) a.msv="B20DCCN00"+to_string(d);
			else a.msv="B20DCCN0"+to_string(d);
			getline(in,a.hoten1);
			stringstream ss(a.hoten1);
			string t;
			a.hoten2="";
			while(ss>>t){
				t[0]=toupper(t[0]);
				for(int i=1;i<t.size();i++){
					t[i]=tolower(t[i]);
				}
				a.hoten2=a.hoten2+t+" ";
			}
			a.hoten2.pop_back();
			in>>a.lop>>a.ngaysinh>>a.gpa;
			if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
			if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
			
			return in;
		}
		float getgpa(){
			return gpa;
		}
		friend ostream& operator << (ostream& out,SinhVien a){
			out<<a.msv<<" "<<a.hoten2<<" "<<a.lop<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(2)<<a.gpa;
			out<<endl;
			return out;
		}
};
short SinhVien::d=0;
bool cmp(SinhVien a,SinhVien b){
	return a.getgpa()>b.getgpa();
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
