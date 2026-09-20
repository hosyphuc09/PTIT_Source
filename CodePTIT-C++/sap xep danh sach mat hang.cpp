#include <bits/stdc++.h>
using namespace std;
struct Mathang{
	long long mmh;
	string tenhang,nhomhang;
	float giamua,giaban,lai;
};
void nhap(Mathang ds[],long long n){
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,ds[i].tenhang);
		getline(cin,ds[i].nhomhang);
		cin>>ds[i].giamua>>ds[i].giaban;
		cin.ignore();
		ds[i].mmh=i+1;
		ds[i].lai=ds[i].giaban-ds[i].giamua;
	}
}
bool cmp(Mathang a,Mathang b){
	return a.lai>b.lai;
}
void sapxep(Mathang ds[],long long n){
	sort(ds,ds+n,cmp);
}
void in(Mathang ds[],long long n){
	for(int i=0;i<n;i++){
		cout<<ds[i].mmh<<" "<<ds[i].tenhang<<" "<<ds[i].nhomhang<<" "<<fixed<<setprecision(2)<<ds[i].lai;
		cout<<endl;
	}
}
int main(){
	long long n;cin>>n;
	struct Mathang ds[n];
	
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	return 0;
}
