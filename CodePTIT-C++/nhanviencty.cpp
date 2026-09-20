#include <bits/stdc++.h>
using namespace std;
struct congty{
	string mnv,hoten,date;
	float dtb,dyt;
};
void nhap(congty ds[],int n){
	for(int i=0;i<n;i++){
			if(i<9){
		
		ds[i].mnv="NV00"+to_string(i+1);
	}else{
		ds[i].mnv="Nv0"+to_string(i+1);
	}
		getline(cin,ds[i].hoten);
		cin>>ds[i].date>>ds[i].dtb>>ds[i].dyt;
	
	if(ds[i].date[1]=="/") ds[i].date.insert(0,"0");
	if(ds[i].date[4]=="/") ds[i].date.insert(3,"0");
}}
bool cmp(congty a,congty b){
	if(a.dtb!=b.dtb){
		return a.dtb>b.dtb;
		return a.dyt>b.dyt;
	}
}
void sapxep(congty ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(congty ds[],int n){
	for(int i=0;i<n;i++){
		
	}
}
int main(){
	int n;cin>>n;
	struct congty ds[50];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
	return 0;
}
