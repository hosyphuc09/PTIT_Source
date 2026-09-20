#include <bits/stdc++.h>
using namespace std;
class GiangVien{
	private:
		string mgv,hoten,tat,tat1,bomon;
		static short d;
	public:
		friend istream& operator >> (istream& in,GiangVien& a){
			d++;
			if(d<=9) a.mgv="GV0"+to_string(d);
			else a.mgv="GV"+to_string(d);
			in>>ws;
			getline(in,a.hoten);
			getline(in,a.bomon);
			stringstream ss(a.bomon);
			stringstream tt(a.hoten);
			string s,k;
			a.tat="";
			while(ss>>s){
				s[0]=toupper(s[0]);
				a.tat=a.tat+s[0];
			}
			a.tat1="";
			while(tt>>k){
				for(int i=0;i<k.size();i++){
					k[i]=tolower(k[i]);
				}
				a.tat1=a.tat1+k+" ";
			}
			
			return in;
		}
		string gethoten(){
				return tat1;
			}
		friend ostream& operator << (ostream& out,GiangVien a){
			out<<a.mgv<<" "<<a.hoten<<" "<<a.tat;
			out<<endl;
			return out;
		}
};
short GiangVien::d=0;
bool check(GiangVien a,string s){
	if(a.gethoten().find(s)!=string::npos) return true;
	return false;
}
int main(){
	int n;cin>>n;
	GiangVien ds[1000];
	for(int i=0;i<n;i++){
		cin>>ds[i];
	}
	int q;cin>>q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string l;
		string h="";
		cout<<"DANH SACH GIANG VIEN THEO TU KHOA "<<s<<":"<<endl;
		while(ss>>l){
			for(int i=0;i<l.size();i++){
				l[i]=tolower(l[i]);
			}
			h=h+l+" ";
		} 
		h.pop_back();
		for(int i=0;i<n;i++){
			if(check(ds[i],h)){
				cout<<ds[i];
			}
		}
	}
	return 0;
}
