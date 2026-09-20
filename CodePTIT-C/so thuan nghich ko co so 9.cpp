#include <stdio.h>
#include <math.h>

int check(int n){
	int a[100],k=0;	
	while(n>0){
		int r=n%10;
		n/=10;
		a[k++]=r;
	}
	for(int i=0;i<k/2;i++){
		if(a[i]!=a[k-i-1]){
		
		return 0;}
	}
	return 1;
}
int checkk(int n){
	while(n>0){
		int l=n%10;
		n/=10;
		if(l==9){
			return 0;
			break;
		}
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	if(n<=8){
		int a=0;
		for(int i=2;i<=n;i++){
			printf("%d ",i);
			a++;
		}
		printf("\n");
		printf("%d\n",a);
	}
	if(n>8){
		int b=7;
		printf("2 3 4 5 6 7 8 ");
		for(int i=9;i<=n;i++){
			if(check(i)&&checkk(i)){
				b++;
				printf("%d ",i);
			}
		}
		printf("\n");
		printf("%d\n",b);
	}
	return 0;
}














