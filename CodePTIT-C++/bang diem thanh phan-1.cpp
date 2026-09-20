#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv, hoten, lop;
	float diem1,diem2,diem3;

};
int dem=0;
void nhap(SinhVien &a){
	dem++;
	if(dem==1){
	
	cin.ignore();}
	getline(cin,a.msv);
	getline(cin,a.hoten);
	getline(cin,a.lop);
	cin>>a.diem1>>a.diem2>>a.diem3;
	cin.ignore();
}

bool cmp(SinhVien a,SinhVien b){
	return a.msv<b.msv;
}
void sap_xep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
}
void in_ds( SinhVien ds[],int n){
	for(int i=0;i<n;i++){
	
		cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].hoten<<" "<<ds[i].lop<<" "<<fixed<<setprecision(1)<<ds[i].diem1<<" "<<ds[i].diem2<<" "<<ds[i].diem3;
		cout<<endl;
	}

}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
    
}
