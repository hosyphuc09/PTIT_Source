//Xay dung phan mem theo pp hdt

#include  <bits/stdc++.h>
using namespace std;
//b1 khai baos lop
class NhanVien{
	
	// thuoc tinh
	
	string maso,hoten;
	float hs;
	int lcb,pc;
	
	// phuong thuc
	public:
	void nhap(){
		cin>>maso;
		cin.ignore();
		getline(cin,hoten);
		cin>>hs>>lcb>>pc;
	}
	
	void Tinhtongluong(){
		cout<<maso<<":"<<lcb*hs+pc;
	}
};
int main(){
	
	//b2. tao ra doi tuong cua lop
	
	NhanVien e;
	
	//B3 yeu cau doi tuong e thuc thi hanh vi cua no
	
	e.nhap();
	e.Tinhtongluong();
	return 0;
} 
