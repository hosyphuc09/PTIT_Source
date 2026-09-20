#include <stdio.h>

int check(long long n){
	int k=0,a[100];
	while(n>0){
		int r=n%10;
		n/=10;
		a[k++]=r;
		
	}
	for(int i=0;i<k/2;i++){
		if(a[i]!=a[k-i-1]){
			return 0;
		}
	}
	return 1;
}
int checkk(long long n){

	while(n>0){
		int r=n%10;
		n/=10;
		if(r==6){
			return 1;
		}
	}
	return 0;
}
int checkkk(long long n){
	int s=0;
	while(n>0){
		int r=n%10;
		n/=10;
		s+=r;
	}
	int l=s%10;
	if(l!=8){
		return 0;
	}
	return 1;
}
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	
	for(long long i=a;i<=b;i++){
		if(check(i)&&checkk(i)&&checkkk(i)){
		printf("%lld\n",i);
		}
	}

	return 0;
}




