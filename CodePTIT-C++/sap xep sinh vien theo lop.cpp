#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv,hoten,lop,email;
	public:
		void nhap(){
			cin>>msv;
			cin.ignore();
			getline(cin,hoten);
			cin>>lop>>email;
			
		}
		void in(){
			cout<<msv<<" "<<hoten<<" "<<lop<<" "<<email;
		}
		string getlop(){
			return lop;
		}
		string getma(){
			return msv;
		}
};
bool cmp(SinhVien x,SinhVien y){
	if(x.getlop()!=y.getlop()){
		return x.getlop()<y.getlop();
	}else{
		return x.getma()<y.getma();
	}
}
int main(){
	int n;cin>>n;
	SinhVien ds[1000];
	for(int i=0;i<n;i++){
	ds[i].nhap();
}
    sort(ds,ds+n,cmp);
	for(int i=0;i<n;i++){
		ds[i].in();
		cout<<endl;
	}
	return 0;
}
