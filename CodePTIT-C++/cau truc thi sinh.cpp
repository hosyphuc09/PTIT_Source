#include <bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string Hoten,date;
	float diem1,diem2,diem3,tongdiem;
};
void nhap( ThiSinh &A){
	getline(cin,A.Hoten);
	getline(cin,A.date);
	cin>>A.diem1>>A.diem2>>A.diem3;
	A.tongdiem=A.diem1+A.diem2+A.diem3;
}


void in(const ThiSinh A){
	cout<<A.Hoten<<" "<<A.date<<" "<<fixed<<setprecision(1)<<A.tongdiem<<endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
