#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string hoten,ngaysinh;
};
void nhap(SinhVien ds[],int n){
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,ds[i].hoten);
		getline(cin,ds[i].ngaysinh);
		
	}
}
string chuanhoa(string s){
	stringstream ss(s);
	string d,m,y;
	getline(ss,d,'/');
	getline(ss,m,'/');
	getline(ss,y);
	if(d.size()==1) d="0"+d;
	if(m.size()==1) m="0"+m;
	return y+m+d;
}
bool cmp(SinhVien a,SinhVien b){
	return chuanhoa(a.ngaysinh)>chuanhoa(b.ngaysinh);
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
	}
void in( SinhVien ds[],int n){
	
	
			cout<<ds[0].hoten<<endl;
		
	
			cout<<ds[n-1].hoten<<endl;
		
	
}
int main(){
	int n;cin>>n;
	struct SinhVien *ds=new SinhVien[n];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);

	return 0;
}