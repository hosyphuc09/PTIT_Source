#include <bits/stdc++.h>
using namespace std;
class GiangVien{
	private:
		string mgv,hoten,bomon,tat;
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
			string s;
			while(ss>>s){
				s[0]=toupper(s[0]);
				a.tat=a.tat+s[0];
			}
			return in;
		}
		friend ostream& operator << (ostream& out,GiangVien a){
			out<<a.mgv<<" "<<a.hoten<<" "<<a.tat;
			out<<endl;
			return out;
		}
		string gettat(){
			return tat;
		}
};
short GiangVien:: d=0;
bool check(GiangVien a,string k){
	return a.gettat()==k;
}
int main(){
	GiangVien ds[1000];
	int n;cin>>n;
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
		while(ss>>l){
			l[0]=toupper(l[0]);
			h=h+l[0];
		}
		cout<<"DANH SACH GIANG VIEN BO MON "<<h<<":"<<endl;
		for(int i=0;i<n;i++){
			if(check(ds[i],h)){
				cout<<ds[i];
			}
		}
	}
	return 0;
}
