#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,hoten,hoten2,lop,date;
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
		ds[i].hoten2="";
		stringstream ss(ds[i].hoten);
		string t,l;
		while(ss>>t){
			l=t;
			l[0]=toupper(l[0]);
			for(int j=1;j<l.size();j++){
				l[j]=tolower(l[j]);
				
			}
			ds[i].hoten2+=l+" ";
		}
		ds[i].hoten2.pop_back();
		getline(cin,ds[i].lop);
		getline(cin,ds[i].date);
		cin>>ds[i].gpa;
		cin.ignore();
		if(ds[i].date[1]=='/') ds[i].date.insert(0,"0");
		if(ds[i].date[4]=='/') ds[i].date.insert(3,"0");
	}}
void in(const SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].msv<<" "<<ds[i].hoten2<<" "<<ds[i].lop<<" "<<ds[i].date<<" "<<fixed<<setprecision(2)<<ds[i].gpa;
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
