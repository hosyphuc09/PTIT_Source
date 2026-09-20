#include <stdio.h>
#include <math.h>

int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int check(int n){
	int l=n;
	int f=0;
	while(n>0){
		int g=n%10;
		f=f*10+g;
		n/=10;
	}
	if(l==f) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b,k=0;
		scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++){
			if(nt(i)&&check(i)){
				printf("%d ",i);
				k++;
				if(k%10==0) printf("\n");
			}
	}
	if(k%10!=0) printf("\n");
	}
	printf(" \n");
	return 0;
}