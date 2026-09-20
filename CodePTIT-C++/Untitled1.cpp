#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,hoten,hoten2,ngaysinh,lop;
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
	
		getline(cin,ds[i].hoten);
		cin>>ds[i].lop>>ds[i].ngaysinh>>ds[i].gpa;
		if(ds[i].ngaysinh[1]=='/') ds[i].ngaysinh.insert(0,"0");
		if(ds[i].ngaysinh[4]=='/') ds[i].ngaysinh.insert(3,"0");
		stringstream ss(ds[i].hoten);
		string l;
		ds[i].hoten2="";
		while(ss>>l){
			l[0]=toupper(l[0]);
			for(int j=1;j<l.size();j++){
				l[j]=tolower(l[j]);
			}
			ds[i].hoten2+=l+" ";
		}
		ds[i].hoten2.pop_back();
			cin.ignore();
	}	
}
bool cmp(SinhVien a,SinhVien b){
	return a.gpa>b.gpa;
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);
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
    sapxep(ds,N);
    in(ds, N);
    return 0;
}