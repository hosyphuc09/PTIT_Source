#include <bits/stdc++.h>
using namespace std;
//b1 khai bao lop
class Nhanvien{
	private:
		string maso,hoten;
		float hs;
		int lcb,pc;
	public:
		void nhap(){
			cin>>maso;
			cin.ignore();
			getline(cin,hoten);
			cin>>hs>>lcb>>pc;
		}
		void Tongluong(){
			cout<<lcb*hs*pc;
		}
		//(2) phuong thuc khoi tao
		Nhanvien(string maso,string hoten,float hs,tin lcb,int lcb){
			this->maso=maso;
			this->hoten=hoten;
			this->hs=hs;
			this->lcb=lcb;
			this->pc=pc;
		}
};
int main(){
	//b2 tao doi tuong cua lop
	Nhanvien e("B24DCCN448","Nguyen van A",3.4,4000,400);
	//b3 thuc hien hanh vi cua doi tuong
//	e.nhap();
	e.Tongluong();
	return 0;
}
