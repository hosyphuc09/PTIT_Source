#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,nganh,hoten,lop,email;
	public:
		friend istream& operator >> (istream& in,SinhVien& a){
			in>>a.msv;
			in>>ws;
			getline(in,a.hoten);
			in>>a.lop>>a.email;
			a.nganh=a.msv.substr(3,4);
			
			return in;
		}
		string getnganh(){
			return nganh;
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
bool check(SinhVien a,string s){
	string k="";
	if(s=="KE TOAN") k="DCKT";
	if(s=="CONG NGHE THONG TIN") k="DCCN";
	if(s=="AN TOAN THONG TIN") k="DCAT";
	if(s=="VIEN THONG") k="DCVT";
	if(s=="DIEN TU") k="DCDT";
	if((k=="DCCN"||k=="DCAT")&&a.getlop()[0]=='E') return false;
	return a.getnganh()==k;
}
int main(){
	SinhVien ds[1000];
	int n;cin>>n;
	for(int i=0;i<n;i++) cin>>ds[i];
	int q;cin>>q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string l;
		string h="";
		while(ss>>l){
			
			for(int i=0;i<l.size();i++){
				l[i]=toupper(l[i]);
			}
			h=h+l+" ";
		}
		h.pop_back();
		cout<<"DANH SACH SINH VIEN NGANH "<<h<<":"<<endl;
		for(int i=0;i<n;i++){
			if(check(ds[i],h)){
				cout<<ds[i];
			}
		}
	}
	return 0;
}
