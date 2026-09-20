#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string hoten,ngaysinh;
	float d1,d2,d3,tong;
};
void nhap(ThiSinh &a){
	getline(cin,a.hoten);
	cin>>a.ngaysinh;
	cin>>a.d1>>a.d2>>a.d3;
	if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,"0");
	if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,"0");
	a.tong=a.d1+a.d2+a.d3;
}
void in( ThiSinh a){
	cout<<a.hoten<<" "<<a.ngaysinh<<" "<<fixed<<setprecision(1)<<a.tong;
	cout<<endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
