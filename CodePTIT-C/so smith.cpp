#include <stdio.h>
#include <math.h>

int check(int n){
	int sum=0;
	for(int i=2;i<=n;i++){
		while(n%i==0){
			sum+=i;
			n/=i;
		}
	}
	return sum;
}
int pp(int n){
	int tong=0;
	while(n>0){
		int r=n%10;
		tong+=r;
		n/=10;
	}
	return tong;
}
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	if(nt(n)){
	 printf("NO\n");
	 return 0;}
	if(check(n)==pp(n)){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}




