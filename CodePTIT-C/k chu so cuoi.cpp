#include <stdio.h>
int check(int n){
	int b[100],f=0;
		while(n>0){
		int r=n%10;
		n/=10;
		b[f++]=r;
	}
	for(int i=0;i<f/2;i++){
		if(b[i]!=b[n-i-1]){
		return 0;	
		}
	}
return 1;
}

int main(){
	int n,k,a[100];
	int f=0;
	scanf("%d %d",&n,&k);
		while(n>0){
		int r=n%10;
		n/=10;
		a[f++]=r;
	}
	int s=0;
	for(int i=0;i<k;i++){
		s=s*10+a[i];
	}
	if(check(s))
	{
		printf("yes");
	}
	else{
		printf("no");
	}
	
	return 0;
}