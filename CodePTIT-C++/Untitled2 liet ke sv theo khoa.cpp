#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,hoten,lop,email,msv2;
	public:
		friend istream& operator >> (istream& in,SinhVien &a){
			getline(in,a.msv);
			getline(in,a.hoten);
			getline(in,a.lop);
			getline(in,a.email);
			return in;
		}
		friend ostream& operator << (ostream& out,SinhVien a){
			out<<a.msv<<" "<<a.hoten<<" "<<a.lop<<" "<<a.email;
			out<<endl;
			return out;
		}
		string chuanhoa(string s){
			string l="";
			for(int i=0;i<s.size();i++){
			
			if(i==1||i==2) l+=s[i];
		}
		return l;
		}
		string getmsv(){
			return chuanhoa(lop);
		}
};
bool check(string s,SinhVien a){
	return s==a.getmsv();
}
int main(){
	SinhVien ds[1000];
	int n;cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++) cin>>ds[i];
	int q;cin>>q;
	while(q--){
		string s;cin>>s;
		string k="";
		cout<<"DANH SACH SINH VIEN KHOA "<<s<<":"<<endl;
		for(int i=0;i<s.size();i++){
			if(i==2||i==3) k+=s[i];
		}
		for(int i=0;i<n;i++){
			if(check(k,ds[i])){
				cout<<ds[i];
			}
		}
	}
	return 0;
}