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
		string getma(){
			return msv;
		}
};
bool cmp(SinhVien a,SinhVien b){
	return a.getma()<b.getma();
}

int main(){
	vector<SinhVien> ds;
	SinhVien sv;
	while(cin>>sv){
		ds.push_back(sv);
	}

	sort(ds.begin(),ds.end(),cmp);

	for(auto x:ds){
		cout<<x;
	}
	return 0;
}
