#include <stdio.h>
#include <math.h>

int check(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int checkk(int n){
	int s=0;
	while(n>0){
	
	
		int r=n%10;
		n/=10;
		s+=r;}
		int f=s%10;

		if(f==1||f==2||f==3||f==4||f==6||f==7||f==8||f==9){
			return 0;
		}
		return 1;}
	
int main(){

		int n;
		scanf("%d",&n);
		int k=0;
		for(int i=2;i<=n;i++){
		if(check(i)&&checkk(i)){
			printf("%d ",i);
			k++;
		}
	}
	printf("\n");
	printf("%d\n",k);
	return 0;
}



