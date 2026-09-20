#include <stdio.h>

int main(){
	int a[100],k=0;
	long long n;
	scanf("%lld",&n);
	while(n>0){
		int r=n%10;
		a[k++]=r;
		n/=10;
	}
	int l=0;
	int b[100];
	int c[100]={0};
	for(int i=k-1;i>=0;i--){
		b[l++]=a[i];
	}
	for(int i=0;i<l;i++){
	if(b[i]==3||b[i]==5||b[i]==7||b[i]==2){
		c[b[i]]++;
	}}
	for(int i=0;i<l;i++){
		if((b[i]==3||b[i]==5||b[i]==7||b[i]==2)&&c[b[i]]>0){
			printf("%d %d\n",b[i],c[b[i]]);
			c[b[i]]=0;
		}
	}
	return 0;}
	
	
	
	