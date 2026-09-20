#include <bits/stdc++.h>
using namespace std;
set<long long> fibo; 
void check(){
	long long f[92];
	 f[0]=0;
	 f[1]=1;
	for(int i=2;i<93;i++){
		f[i]=f[i-1]+f[i-2];
	}
	for(int i=0;i<93;i++){
	fibo.insert(f[i]); 

}}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c[500][500];
		cin>>a>>b;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin>>c[i][j];
			}
		}
		check();
		int ans=-1,cot;
		long long sum=0;
		for(int i=0;i<a;i++){
			long long tong=0;;
			int dem =0;
			for(int j=0;j<b;j++){
		 
			if(fibo.count(c[j][i])==1){
				dem++;
				tong+=c[j][i];
			}		
				}
				if(dem>ans){
					cot=i;
					ans=dem;
					sum=tong;
				}else{
					if(sum<tong){
						cot=i;
						sum=tong;
					}
				}
			}
			cout<<cot+1<<endl;
			
			for(int i=0;i<a;i++){
				
					if(fibo.count(c[i][cot])==1){
						cout<<c[i][cot]<<" ";
					}
				}
			}
		}
		
	

