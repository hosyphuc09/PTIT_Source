#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,hoten,hoten2,lop,ngaysinh;
	float gpa;
};
void nhap(SinhVien ds[],int n){
	cin.ignore();
	for(int i=0;i<n;i++){
		if(i<9){
			ds[i].msv="B20DCCN00"+to_string(i+1);
		}else{
			ds[i].msv="B20DCCN0"+to_string(i+1);
		}
		
		ds[i].hoten2="";
		getline(cin,ds[i].hoten);
		getline(cin,ds[i].lop);
		cin>>ds[i].ngaysinh>>ds[i].gpa;
		stringstream ss(ds[i].hoten);
		string l;
	
		while(ss>>l){
			l[0]=toupper(l[0]);
			for(int j=1;j<l.size();j++){
				l[j]=tolower(l[j]);
			}
			ds[i].hoten2+=l+" ";
		}
		ds[i].hoten2.pop_back();
		cin.ignore();
		if(ds[i].ngaysinh[1]=='/') ds[i].ngaysinh.insert(0,"0");
		if(ds[i].ngaysinh[4]=='/') ds[i].ngaysinh.insert(3,"0");
	}
}
void in(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].msv<<" "<<ds[i].hoten2<<" "<<ds[i].lop<<" "<<ds[i].ngaysinh<<" "<<fixed<<setprecision(2)<<ds[i].gpa;
		cout<<endl; 
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
