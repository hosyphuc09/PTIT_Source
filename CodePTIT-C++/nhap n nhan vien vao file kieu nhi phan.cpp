//nhap thong tin n nhan vien vao 1 file kieu nhi phan.
#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	char maso[20],hoten[50];
	float hs;
	int lcb,pc;
};
void nhap(){
//nhap nhan vien => bien cau truc
    int n;cin>>n;
    ofstream f;
    f.open("NhanVien.txt",ios::binary);
    for(int i=0;i<n;i++){
    	
	
	NhanVien e;
	cin>>e.maso;
	cin.ignore();
//	getline(cin,e.hoten);
    gets(e.hoten);
	cin>>e.hs>>e.lcb>>e.pc;
	
//bien cau truc=>file
	
//	f<<e.maso<<"\n"<<e.hoten<<"\n"<<e.hs<<"\n"<<e.lcb<<"\n"<<e.pc;
    f.write(reinterpret_cast<char*>(&e),sizeof(NhanVien));
}
	f.close();
 
}
void doc(){
	ifstream f;
	f.open("NhanVien.txt");
	NhanVien e;
	while(f.read(reinterpret_cast<char*>(&e),sizeof(NhanVien))){
		

//	f.ignore();
//	getline(f,e.hoten);
//	f>>e.hs>>e.lcb>>e.pc;
//	
	cout<<e.maso<<":"<<e.lcb*e.hs+e.pc;
}
f.close();}

int main(){
	nhap();
	doc();
	 return 0;
}
