#include <bits/stdc++.h>
using namespace std;
int n, a[10],b[10], xuoi[20],nguoc[20];
void quaylui(int i){
	int j;
	for(int j=1;j<n;j++){
		if(!b[j]&&!xuoi[i-j+n]&&!nguoc[i+j-1]){
			a[i]=j;
			b[j]=1;xuoi[i-j+n]=1;nguoc[i+j-1]=1;
			if(i==n) in();
			else quaylui(i+1);
			b[j]=0;xuoi[i-j+n]=0;nguoc[i+j-1]=0;
		}
	}
}
int main(){
	cin>>n;
	quaylui(i);
	return 0;
}
