#include <bits/stdc++.h>
using namespace std;
class Giangvien{
	private:
		string hoten,bomon,mgv,bomonviettat;
		static short stt;
	public:
		void nhap(){
			getline(cin,hoten);
			getline(cin,bomon);
			stt++;
			if(stt<=9){
				mgv="GV0"+to_string(stt);
				
			}else{
				mgv="GV"+to_string(stt);
			}
			stringstream ss(bomon);
			string tmp;
			while(ss>>tmp){
				bomonviettat+=toupper(tmp[0]);
			}
		}
		void xuat(){
			cout<<mgv<<" "<<hoten<<" "<<bomonviettat;
		}
		string getten(){
			stringstream ss(hoten);
			string tmp;
			while(ss>>tmp){
				
			}
			return tmp;
		}
		string getma(){
			return mgv;
		}
};
short Giangvien::stt=0;
bool cmp(Giangvien a,Giangvien b){
	if(a.getten()!=b.getten()){
	return a.getten()<b.getten();
}else{
	return a.getma()<b.getma();
}
}
int main(){
	int n;cin>>n;
	cin.ignore();
	Giangvien gv[n];
	for(int i=0;i<n;i++){
		gv[i].nhap();
}
    sort(gv,gv+n,cmp);
    for(int i=0;i<n;i++){
    	gv[i].xuat();
    	cout<<endl;
	}
	return 0;
}
