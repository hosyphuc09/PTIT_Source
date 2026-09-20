#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string msv,hoten,date,lop,hoten2;
	float gpa;
};
int dem=0;
void nhap(SinhVien ds[],int n){
cin.ignore();
for(int i=0;i<n;i++){
	if(i<9) ds[i].msv="B20DCCN00"+to_string(i+1);
	if(i>9) ds[i].msv="B20DCCN0"+to_string(i+1);
	getline(cin,ds[i].hoten);
	stringstream ss(ds[i].hoten);
	ds[i].hoten2="";
	string t,l;
	while(ss>>t){
		l=t;
		l[0]=toupper(l[0]);
		for(int i=1;i<l.size();i++){
			l[i]=tolower(l[i]);
		}
		ds[i].hoten2+=l+" ";
	}
	ds[i].hoten.pop_back();
	getline(cin,ds[i].lop);
	getline(cin,ds[i].date);
	if(ds[i].date[1]=='/') ds[i].date.insert(0,"0"); 
	if(ds[i].date[4]=='/') ds[i].date.insert(3,"0");
	cin>>ds[i].gpa;
	cin.ignore();
}
}

bool cmp(SinhVien a,SinhVien b){
	return a.gpa>b.gpa;
}
void sapxep(SinhVien ds[],int n){
	sort(ds,ds+n,cmp);	
}
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
    sapxep(ds,N);
    in(ds, N);
    return 0;
}