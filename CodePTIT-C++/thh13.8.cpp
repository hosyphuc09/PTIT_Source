#include <bits/stdc++.h>
using namespace std;
struct Nguoi{
	string ten;
	int ngay,thang,nam;
};
bool sosanhtuoi(Nguoi a,Nguoi b){
	if(a.nam!=b.nam) return a.nam>b.nam;
	if(a.thang!=b.thang) return a.thang>b.thang;
	return a.ngay>b.ngay;
}
int main(){
	int n;cin>>n;
	vector<Nguoi> ds(n);
	for(int i=0;i<n;i++){
		cin>>ds[i].ten;
		string ngaysinh;
		cin>>ngaysinh;
		stringstream ss(ngaysinh);
		string t;
		getline(ss,t,'/');
		ds[i].ngay=stoi(t);
		getline(ss,t,'/');
		ds[i].thang=stoi(t);
		getline(ss,t);
		ds[i].nam=stoi(t);
	}
	int tre=0,gia=0;
	for(int i=1;i<n;i++){
		if(sosanhtuoi(ds[i],ds[tre])){
			tre=i;
		}
		if(!sosanhtuoi(ds[i],ds[gia])){
			gia=i;
		}
	}
	cout<<ds[tre].ten<<endl;
	cout<<ds[gia].ten<<endl;
	return 0;
}
