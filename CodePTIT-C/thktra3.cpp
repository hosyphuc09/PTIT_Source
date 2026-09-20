#include <stdio.h>
#define M 1000000007

int main(){

int n;
scanf("%d",&n);
long long f=0,f1=1,k;
if(n==0){
	printf("0\n");
	return 0;}
	for(int i=2;i<=n;i++){
		k=(f+f1)%M;
		f=f1;
		f1=k;
	}
	printf("%lld\n",f1);
	return 0;
}