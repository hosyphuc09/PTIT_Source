#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,hoten,hoten2,lop,ngaysinh;
		float gpa;
		static short d;
	public:
		SinhVien(){
			msv="";
			hoten="";
			hoten2="";
			lop="";
			ngaysinh="";
			gpa=0;
		}
		friend istream& operator >> (istream& in,SinhVien &a){
			d++;
			if(d<=9){
				a.msv="B20DCCN00"+to_string(d);
			}else{
				a.msv="B20DCCN0"+to_string(d);
			}
			in>>ws;
			getline(in,a.hoten);
			stringstream ss(a.hoten);
			string l;
			while(ss>>l){
				l[0]=toupper(l[0]);
				for(int j=1;j<l.size();j++){
					l[j]=tolower(l[j]);
				}
				a.hoten2+=l+" ";
			}
			a.hoten2.pop_back();
			getline(in,a.lop);
			getline(in,a.ngaysinh);
			if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
			if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
			in>>a.gpa;
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