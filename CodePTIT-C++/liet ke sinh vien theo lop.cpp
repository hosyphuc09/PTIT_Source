#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,hoten,lop,email;
	public:
		friend istream& operator >> (istream& in,SinhVien& a){
			in>>ws;
			getline(in,a.msv);
			getline(in,a.hoten);
			in>>a.lop>>a.email;
			return in;
		}
		friend ostream& operator << (ostream& out,SinhVien a){
			out<<a.msv<<" "<<a.hoten<<" "<<a.lop<<" "<<a.email;
			out<<endl;
			return out;
		}
		string getlop(){
			return lop;
		}
};
bool chuanhoa(string s,SinhVien a){
	return s==a.getlop();

}
int main(){
	SinhVien ds[1000];
	int n;cin>>n;
	for(int i=0;i<n;i++) cin>>ds[i];
	int q;cin>>q;
	while(q--){
		string s;
		cin>>s;
		cout<<"DANH SACH SINH VIEN LOP "<<s<<":"<<endl;
		for(int i=0;i<n;i++){
			if(chuanhoa(s,ds[i])){
			cout<<ds[i];
		}}
	}
	return 0;
}
