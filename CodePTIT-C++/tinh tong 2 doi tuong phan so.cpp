#include <bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu,mau;
	public:
		PhanSo(){
			tu=0;
			mau=1;
		}
		PhanSo(long long tu,long long mau){
			this->tu=tu;
			this->mau=mau;
		}
		friend istream& operator >> (istream& in,PhanSo& a){
			in>>a.tu>>a.mau;
			return in;
		}
		void rutgon(){
			long long g=__gcd(tu,mau);
			tu/=g;
			mau/=g;
		}
		friend PhanSo operator + (PhanSo a,PhanSo b){
			PhanSo tong;
			long long l=a.mau/__gcd(a.mau,b.mau)*b.mau;
			tong.tu=a.tu*(l/a.mau)+b.tu*(l/b.mau);
			tong.mau=l;
			tong.rutgon();
			return tong;
			
		}
		friend ostream& operator << (ostream& out,PhanSo a){
			out<<a.tu<<"/"<<a.mau;
			return out;
		}
};
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
