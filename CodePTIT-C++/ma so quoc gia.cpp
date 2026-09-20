#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long k=n;
		int d[100],l=1;
		while(k>0){
			d[l++]=k%10;
			k/=10;
		}
		int q=0;
		while(n>0){
			int a=n%10;
			q++;
			n/=10;
			int b=n%10;
			n/=10;
			int c=n%10;
			n/=10;
			if(a==4&&b==8&&c==0){
				for(int i=1;i<l-3;i++)
				{
				d[q]=d[q+3];
				d[q+1]=d[q+4];
				d[q+2]=d[q+5];	
				}
				for(int i=l-3;i>=1;i--){
					cout<<d[i];
				}
			}
		}
		cout<<endl;
	}
}
