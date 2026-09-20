#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
 
using namespace std;
struct NhanVien{
	string mnv,hoten,gioitinh,date,address,mathue,ngayki;
};
int dem=0;

void nhap(NhanVien &a){

	dem++;

	string ma=to_string(dem);
	while(ma.size()<5) ma="0"+ma;
	a.mnv=ma;
	getline(cin,a.hoten);
	getline(cin,a.gioitinh);
	getline(cin,a.date);
	getline(cin,a.address);
	getline(cin,a.mathue);
	getline(cin,a.ngayki);
}
string chuanhoadate(string s){
	stringstream ss(s);
	string d,m,y;
	getline(ss,d,'/');
	getline(ss,m,'/');
	getline(ss,y);
	if(d.size()==1) d="0"+d;
	if(m.size()==1) m="0"+m;
	return d+"/"+m+"/"+y;
}
void inds(const NhanVien ds[],int N){
	for(int i=0;i<N;i++){
		cout<<ds[i].mnv<<" "<<ds[i].hoten<<" "<<ds[i].gioitinh<<" "<<chuanhoadate(ds[i].date)<<" "<<ds[i].address<<" "<<ds[i].mathue<<" "<<chuanhoadate(ds[i].ngayki);
		cout<<endl;
	}
	
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
