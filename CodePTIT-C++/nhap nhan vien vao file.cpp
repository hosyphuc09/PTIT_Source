//nhap thong tin nhan vien vao 1 file
#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string maso,hoten;
	float hs;
	int lcb,pc;
};
void nhap(){
//nhap nhan vien => bien cau truc
	NhanVien e;
	cin>>e.maso;
	cin.ignore();
	getline(cin,e.hoten);
	cin>>e.hs>>e.lcb>>e.pc;
//bien cau truc=>file
	ofstream f;
	f.open("NhanVien.txt");
	f<<e.maso<<"\n"<<e.hoten<<"\n"<<e.hs<<"\n"<<e.lcb<<"\n"<<e.pc;
	f.close();
 
}
void doc(){
	ifstream f;
	f.open("NhanVien.txt");
	NhanVien e;
	f>>e.maso;
	f.ignore();
	getline(f,e.hoten);
	f>>e.hs>>e.lcb>>e.pc;
	f.close();
	cout<<e.maso<<":"<<e.lcb*e.hs+e.pc;
}
int main(){
	nhap();
	doc();
	 return 0;
}
