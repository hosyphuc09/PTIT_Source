#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu,mau;
};
long long gcd(long long a,long long b){
	if(b==0) return a;
	return gcd(b,a%b);
}
PhanSo rutgon(PhanSo p){
	if(p.mau<0){
		p.tu=-p.tu;
		p.mau=-p.mau;
	}
	long long g=gcd(abs(p.tu),abs(p.mau));
	p.tu/=g;
	p.mau/=g;
	return p;
}
PhanSo cong(PhanSo a,PhanSo b){
	PhanSo r;
	r.tu=a.tu*b.mau+b.tu*a.mau;
	r.mau=a.mau*b.mau;
	return rutgon(r);
}
PhanSo nhan(PhanSo a,PhanSo b){
	PhanSo r;
	r.tu=a.tu*b.tu;
	r.mau=a.mau*b.mau;
	return rutgon(r);
}
PhanSo binhphuong(PhanSo p){
	return nhan(p,p);
}
void process(PhanSo A, PhanSo B){
	PhanSo C=binhphuong(cong(A,B));
	PhanSo D=nhan(nhan(A,B),C);
	cout<<C.tu<<"/"<<C.mau<<" "<<D.tu<<"/"<<D.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
