#include <bits/stdc++.h>
using namespace std;

class PhanSo{
	private:
	    long long  tu,mau;
	public:
		PhanSo(long long tu, long long mau){
			this->tu=tu;
			this->mau=mau;
		}
		friend istream& operator >> (istream& in,PhanSo& a){
			in>>a.tu>>a.mau;
		return in;
		}
		void rutgon(){
			long long g=__gcd(tu,mau);
			tu=tu/g;
			mau=mau/g;
		}
		friend ostream& operator << (ostream& out,PhanSo a){
			out<<a.tu<<"/"<<a.mau;
			return out;
		}
};
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
