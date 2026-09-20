#include <bits/stdc++.h>
using namespace std;
struct PhanSo{
	
	long long tu,mau; 
};
void nhap(PhanSo &a){
	cin>> a.tu>>a.mau; 
}
void rutgon(PhanSo &k){
	long long t=__gcd(k.tu,k.mau);
	k.tu/=t;
	k.mau/=t;
	
}
long long lcm(long long a,long long b){
	return 1ll*a/__gcd(a,b)*b;
}
PhanSo tong(PhanSo &p,PhanSo &q){
	PhanSo k; 
	long long t=lcm(p.mau,q.mau);
	k.tu=p.tu*(t/p.mau)+q.tu*(t/q.mau);
	k.mau=t;
	rutgon(k);
	return k;
} 
void in(const PhanSo k){
	cout<<k.tu<<"/"<<k.mau;
	cout<<endl;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
